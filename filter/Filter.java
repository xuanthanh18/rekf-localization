/*
Author: Xuan Thanh Dang, Budi Mulyawan, Nirupama Bulusu, Sanjay Jha, Pubudu N Pathirana

Contact: xuanthanh18@gmail.com
Version: 1.0

Copyright (c) National ICT Australia Limited, 2004.
License is granted to copy, use, and to make and to use derivative works for
research and evaluation purposes,provided that the National ICT Australia
Limited is acknowledged in all documentation pertaining to any such copy or derivative work.
The National ICT Australia Limited grants no other licenses expressed or implied.

NATIONAL ICT AUSTRALIA LIMITED MAKES NO REPRESENTATIONS CONCERNING EITHER THE
MERCHANTABILITY OF THIS SOFTWARE OR THE SUITABILITY OF THIS SOFTWARE FOR ANY PARTICULAR PURPOSE.

The software is provided "as is" without express or implied warranty of any kind.

*/

import Jama.*;
import java.util.*;
import java.math.*;
import java.io.*;


public class Filter
{
  //configuration
  private  int NUM_SENSOR = 10;
  private  int REKF = 1;
  private  int CON = 1;
  private double espl;
  private double T = 10 ;    //
  private double h = 0.05/60;   //tick
  private int Amax = 50;
  private int SMOOTH;

  private int numSample;
  private Data data;

  //data members
  //Data for each sensor
  private double r[], n[], q[];	//this is 3xNUMBER of sensor matrix
  private double sensorInitPos[][];	//this is the system initial state
  private Matrix IC;			//the mobile robot initial state

  //used matrixes
  private Matrix R, N, Q, A, B,B2, x1, x1h, Xh1, dotXh1, cap, sap, sep, caphat, u, U, Y;
  private Matrix bA1, bH1, bB1, dotX, X;
  private Matrix a, b;
  private Matrix temp, performance;

  //Debug
  private Matrix debug;

  private boolean loaded;


  public Filter(String filename){
    data = new Data("output.txt");
    sensorInitPos = new double[NUM_SENSOR][4];

    if(!loaded){
      // read the file
      try{
        BufferedReader inp = new BufferedReader(new InputStreamReader(new FileInputStream(filename)));
        // Get file info - line by line
        while ( inp.ready() ){
          String nextline = inp.readLine();
          if (nextline == null) continue;					                                                                                                                                         // Break the line down
          StringTokenizer tokens = new StringTokenizer (nextline);
          int numargs = tokens.countTokens();

          if ( numargs == 0 ) continue;                                                                                                                                         String attribute = tokens.nextToken();											                 if (attribute.equals("#")) continue;																					                                                                                                                                                             												                // System.out.println(nextline);													                // Check the attribute
          if (attribute.equals("NUM_SENSOR"))   { NUM_SENSOR    = Integer.valueOf(tokens.nextToken()).intValue(); }
          if (attribute.equals("REKF")){ REKF = Integer.valueOf(tokens.nextToken()).intValue();}
          if (attribute.equals("CON"))   { CON   = Integer.valueOf(tokens.nextToken()).intValue(); }
          if (attribute.equals("H"))   { h    = Double.valueOf(tokens.nextToken()).doubleValue() / Double.valueOf(tokens.nextToken()).doubleValue() ; }

          if (attribute.equals("Amax"))   { Amax    = Integer.valueOf(tokens.nextToken()).intValue(); }
          if (attribute.equals("r"))
          {
            r = new double[NUM_SENSOR];
            for(int i = 0; i < NUM_SENSOR; i++)
              r[i] = Double.valueOf(tokens.nextToken()).doubleValue();
          }

          if(attribute.equals("q"))
          {
            q = new double[NUM_SENSOR];
            for(int i = 0; i < NUM_SENSOR; i++)
              q[i] = Double.valueOf(tokens.nextToken()).doubleValue();

          }

          if(attribute.equals("n"))
          {
            n = new double[NUM_SENSOR];
            for(int i = 0; i < NUM_SENSOR; i++)
              n[i] = Double.valueOf(tokens.nextToken()).doubleValue();

          }

          if (attribute.equals("IC"))
          {
            IC = new Matrix(4, 1);
            IC.set(0, 0, Double.valueOf(tokens.nextToken()).doubleValue());
            IC.set(1, 0,Double.valueOf(tokens.nextToken()).doubleValue() );
            IC.set(2, 0, Double.valueOf(tokens.nextToken()).doubleValue());
            IC.set(3, 0, Double.valueOf(tokens.nextToken()).doubleValue());
          }

          if(attribute.equals("SENSORS"))
          {
            for(int i = 0; i < NUM_SENSOR; i ++)
            {
              nextline = inp.readLine();
              if (nextline == null) continue;
              tokens = new StringTokenizer (nextline);

              for(int j = 0; j < 4; j++)
              {

                sensorInitPos[i][j] =  Double.valueOf(tokens.nextToken()).doubleValue();
                System.out.println("Value is : " + sensorInitPos[i][j]);
              }

            }

          }
        }
      }

      catch(IOException e)
      {  }
    }
    numSample = data.getSize();
    /* for measure performance */
    performance = new Matrix(4, numSample);
    espl = CON*0.001*REKF;

    //get value for a, b
    /*
       a = 0 0 1 0
       0 0 0 1
       0 0 0 0
       0 0 0 0


*/
    a = new Matrix(4,4); //a ~ A
    a.set(0, 2, 1);
    a.set(1, 3, 1);

    /*
       b = 0 0
       0 0
       1 0
       0 1
       */
    b = new Matrix(4, 2); // b ~ B
    b.set(2, 0, 1);
    b.set(3,1, 1);

    //set value for A and B
    A = new Matrix(NUM_SENSOR*4, NUM_SENSOR*4); // A ~ AA1
    for(int i = 0; i< NUM_SENSOR; i++)
    {
      A.setMatrix(i*4 ,(i+1)*4 -1, i*4,  (i+1)*4 -1, a);
    }

    B = new Matrix( NUM_SENSOR*4, 2); //B ~ BB1
    for(int i = 0; i < NUM_SENSOR; i++)
    {
      B.set( (i+1)*4 - 2, 0, 1);
      B.set((i+1)*4 - 1,1, 1);
    }

    B2 = new Matrix(NUM_SENSOR*4, NUM_SENSOR*2);
    {
      for(int i = 0; i < NUM_SENSOR; i++)
      {
        B2.set(i*4 + 2, i*2, -1);
        B2.set(i*4 + 3, i*2 + 1, -1);

      }
    }

  }

  public  void initialize()
  {
    //build weighting  matrix
    R = new Matrix(NUM_SENSOR, NUM_SENSOR);
    N = new Matrix(NUM_SENSOR*4, NUM_SENSOR*4);
    Q = new Matrix(NUM_SENSOR*2, NUM_SENSOR*2);

    cap = new Matrix(4, numSample);
    caphat = new Matrix(2,1 );

    cap.setMatrix(0,3, 0,0, IC);
    //cap.print(2,1 );

    sep = new Matrix(NUM_SENSOR*4, numSample);
    sep.setMatrix(0, NUM_SENSOR*4 -1,0, 0,  new Matrix(40, 1, 10));

    Y = new Matrix(NUM_SENSOR, 1);
    sap = new Matrix(NUM_SENSOR*4, 1);
    System.out.println("Number of sample  : " + numSample);

    u = new Matrix(2,1 );
    U = new Matrix(2,numSample);

    bA1 = new Matrix(NUM_SENSOR, 1);
    bH1 = new Matrix(NUM_SENSOR, 1);
    bB1 = new Matrix(NUM_SENSOR, NUM_SENSOR*4);

    dotXh1 = new Matrix(NUM_SENSOR*4, 1);
    Xh1 = new Matrix(NUM_SENSOR*4, numSample);

    x1h = new Matrix(NUM_SENSOR*4,1);
    x1 = new Matrix(NUM_SENSOR*4, numSample);

    dotX = new Matrix(NUM_SENSOR*4, NUM_SENSOR*4);
    X = new Matrix(NUM_SENSOR*4, NUM_SENSOR*4);

    for(int i = 0; i < NUM_SENSOR; i++)
    {
      R.set(i, i, r[i]);
    }

    for(int i =0; i<NUM_SENSOR; i++)
    {
      N.set(i*4, i*4, n[i]);
      N.set(i*4+1, i*4 + 1, n[i]);
      N.set(i*4 + 2, i*4 + 2, n[i]);
      N.set(i*4 + 3, i*4 + 3, n[i]);
    }
    for(int i = 0; i < NUM_SENSOR; i++)
    {
      Q.set(i*2, i*2, q[i]);
      Q.set(i*2 + 1, i*2 + 1, q[i]);							                                                                  }


      //set initial system state
      for(int i = 0; i < NUM_SENSOR; i++)
      {
        for(int j = 0; j < 4; j++)
        {
          sap.set(j+i*4, 0 , sensorInitPos[i][j]);
          System.out.println(sensorInitPos[i][j]);
        }
      }

      temp = new Matrix(NUM_SENSOR*4, 1);
      for(int i = 0; i< NUM_SENSOR; i++)
      {
        temp.setMatrix(i*4, (i+1)*4 - 1,0, 0, IC);
      }

      //set initial value for x1, Xh1
      x1.setMatrix(0,NUM_SENSOR*4 -1, 0,0, temp.minus(sap));
      Xh1.setMatrix(0, NUM_SENSOR*4-1,0, 0,temp.minus(sep.getMatrix(0,NUM_SENSOR*4-1,0, 0)));
      X = N;

      //Debug
      System.out.println("Matrix A: ");
      A.print(2, 1);
      System.out.println("Matrix B:");
      B.print(2, 1);
      System.out.println("Matrix R:");
      R.print(2, 4);
      System.out.println("Matrix N:");
      N.print(2, 1);
      System.out.println("Matrix Q:");
      Q.print(2, 1);
      System.out.println("Initial robot state:");
      cap.getMatrix(0, 3, 0 , 0).print(2, 1);
      System.out.println("Initial sensors states: ");
      sap.getMatrix(0, NUM_SENSOR*4 -1, 0, 0).print(2, 4);
  }

  public void setNumSample(int n)
  {
    numSample = n;
  }

  /*
     @Function: getRSSI
     @Usage: get RSSI from sensors, store in a matrix
     */
  public Matrix getRSSI(int n)
  {

    //this function will call other class function to get the real RSSI measurement
    //and convert to a matrix which is y(t)
    //data.getRSSI(n).transpose().print(2, 1);

    return data.getRSSI(n);
  }

  /*
     @Function: getBetaH1
     @Usage: simulate BetaH1
     */

  public Matrix getBetaH1(int n)
  {
    Matrix BetaH1 = new Matrix(NUM_SENSOR, 1);
    for(int i = 0; i < NUM_SENSOR; i++)
    {
      BetaH1.set(i, 0, -100 + 15*Math.log(1*(Xh1.get(i*4, n)*Xh1.get(i*4, n) + Xh1.get(i*4 +1, n)*Xh1.get(i*4 + 1, n) ) ) );
    }

    return BetaH1;
  }

  /*
     @Function: getBetab1
     @Usage: simulate the slope of C(x(t))
     */
  public Matrix getBetab1(int n)
  {
    Matrix Betab1 = new Matrix(NUM_SENSOR, NUM_SENSOR*4);
    for(int i = 0; i  < NUM_SENSOR; i++)
    {
      Betab1.set(i, i*4, 2*(Xh1.get(i*4 , n) / (Xh1.get(i*4, n)*Xh1.get(i*4, n) +Xh1.get(i*4 + 1, n)*Xh1.get(i*4 + 1, n) ) ) );
      Betab1.set(i, i*4 + 1, 2*(Xh1.get(i*4 + 1, n) / (Xh1.get(i*4, n)*Xh1.get(i*4, n) +Xh1.get(i*4 + 1, n)*Xh1.get(i*4 + 1, n) ) ) );
    }

    Betab1.timesEquals(-15*(-1));
    return Betab1;
  }

  /*
     @Function: doFilter
     @Usage: Do the main estimation of the system state ( sensor positions)
     */
  public void doFilter()
  {
    long startTime = System.currentTimeMillis();
    Matrix mTime = new Matrix(1,numSample-1);

    //cap.print(2, 1);  OK
    for(int n = 0; n < numSample - 1; n++)
    {
      //performance.set(1, n, n);
      //performance.set(0, n, System.currentTimeMillis() - startTime);

      //Simulate velocity and acceleration
      U.set(0,n,0);
      U.set(1, n,0);
      u = U.getMatrix(0,1, n,n);

      caphat = (a.times(cap.getMatrix(0,3,n, n))).plus( b.times(u));
      //caphat.print(2,1);

      cap.setMatrix(0, 3,n+1,  n + 1, (cap.getMatrix(0, 3, n, n)).plus(caphat.times(h)));


      x1h = A.times(x1.getMatrix(0,NUM_SENSOR*4-1, n,n)).plus(B.times(u));

      x1.setMatrix(0, NUM_SENSOR*4 -1 ,n+1, n+1 , (x1.getMatrix(0, NUM_SENSOR*4-1, n,n)).plus(x1h.times(h)));

      //Get RSSI value, in real experiment, this will be provided by sensors.

      Y =  getRSSI(n);
      Y.print(2, 1);
      bB1 = getBetab1(n);
      bH1 = getBetaH1(n);

      Matrix temp1, temp2, temp3;

      temp1 = (A.times(Xh1.getMatrix(0, NUM_SENSOR*4 -1, n, n))).plus(B.times(u));
      temp2 = (X.inverse()).times((((bB1.transpose()).times(R)).times(Y.minus(bH1))).plus((bB1.transpose()).times(bH1.times(espl*espl))));

      dotXh1 = temp1.plus(temp2);

      Xh1.setMatrix(0, NUM_SENSOR*4 -1,n+1,  n+1, (Xh1.getMatrix(0, NUM_SENSOR*4 - 1, n, n)).plus(dotXh1.times(h)));

      //Calculate dotX, X
      dotX = (A.transpose()).times(X);
      dotX.plusEquals(X.times(A));
      //XX*BB2*inv(Q1)*BB2'*XX
      dotX.plusEquals( X.times(B2).times(Q.inverse()).times(B2.transpose()).times(X));
      dotX.minusEquals(((bB1.transpose()).times(R)).times(bB1));
      dotX.plusEquals(((bB1.transpose()).times(bB1)).times(espl*espl));

      dotX.timesEquals(-1);

      // update X
      X.plusEquals(dotX.times(h));

      for(int i = 0; i < NUM_SENSOR; i++)
      {
        sep.setMatrix(i*4 ,(i+1)*4 -1,n+1,  n+1, cap.getMatrix(0, 3,n+1,  n+1));

      }

      sep.setMatrix(0, NUM_SENSOR*4- 1,n+1,  n+1, (sep.getMatrix(0, NUM_SENSOR*4 -1,n+1,  n+1)).minus(Xh1.getMatrix(0, NUM_SENSOR*4-1,n+1,  n+1)));

    }
  }

  /*
     @Function : getSystemState()
     @Usage: Return the whole system state ( sensor positions + mobilerobot path)

*/
  public Matrix getSystemState()
  {
    Matrix systemState = new Matrix((NUM_SENSOR+1)*4 + 1, numSample + 1); //plus one for mobile robot and initial pos
    systemState.setMatrix(0,(NUM_SENSOR*4 -1), 0 , numSample -1 , sep);
    systemState.setMatrix(NUM_SENSOR*4 , (NUM_SENSOR+ 1)*4 - 1, 0, numSample -1, cap);
    systemState.setMatrix(0, NUM_SENSOR*4 -1, numSample, numSample,sap);

    for(int i = 0; i < numSample; i++)
    {
      systemState.set(NUM_SENSOR*4 + 4, i, i*h);
    }

    return systemState;
  }

  public Matrix getOptimizedState()
  {
    double mx, my;
    Matrix systemState = new Matrix(4, numSample + 10); //plus 10 sensors locations
    SMOOTH = numSample / 10;

    systemState.setMatrix(0, 3, 0, numSample -1, cap);
    for(int i =0; i < NUM_SENSOR  ; i++)
    {
      mx = 0;
      my = 0;
      for(int j = numSample - SMOOTH -1; j < numSample -1; j++)												     {																						mx = mx + sep.get(i*4,j);
        my = my + sep.get(i*4 + 1, j);
      }
      systemState.set(0, numSample + i, mx/SMOOTH);
      systemState.set(1, numSample + i, my/SMOOTH);
    }
    return systemState;
  }

  public Matrix getPerformance()
  {
    return performance;
  }

  public Matrix getRobotPath()
  {
    return cap;
  }

  public int getNumOfSample()
  {
    return numSample;
  }
}
