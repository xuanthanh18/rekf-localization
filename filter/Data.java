
/*
Author: Xuan Thanh Dang, Budi Mulyawan, Nirupama Bulusu, Sanjay Jha, Pubudu N Pathirana

Contact: xuan.t.dang@uts.edu.au
Version: 1.0

Copyright (c) National ICT Australia Limited, 2004.
License is granted to copy, use, and to make and to use derivative works for
research and evaluation purposes,provided that the National ICT Australia
Limited is acknowledged in all documentation pertaining to any such copy or derivative work.
The National ICT Australia Limited grants no other licenses expressed or implied.

NATIONAL ICT AUSTRALIA LIMITED MAKES NO REPRESENTATIONS CONCERNING EITHER THE
MERCHANTABILITY OF THIS SOFTWARE OR THE SUITABILITY OF THIS SOFTWARE FOR ANY PARTICULAR PURPOSE.

The software is provided "as is" without express or implied warranty of any kind.

Contact: Nirupama Bulusu (nbulusu@cse.unsw.edu.au)

*/


import java.io.*;
import java.util.*;
import Jama.*;

public class Data
{
	private	Matrix data;
	static boolean loaded = false;
	private int numSample;
	final private int NUM_SENSOR = 3;

	public Data(String filename)
	{
		numSample = 0;

		//get the number of samples
		 if (!loaded)
		 {
	          // read the file
	         try {
		            BufferedReader inp = new BufferedReader(new InputStreamReader(new FileInputStream(filename)));

		            // Get file info - line by line
		            while ( inp.ready() )
			     {

		        	      String nextline = inp.readLine();


		                  if (nextline == null) continue;
				  numSample++;
			     }

			inp.close();
			 }
		 	catch(IOException e)
			{

			}
		  }

		  numSample = 540;

		 data = new Matrix(numSample, NUM_SENSOR);

		if(!loaded && numSample!= 0)
       		{

				try
				{
					BufferedReader inp = new BufferedReader(new InputStreamReader(new FileInputStream(filename)));
					while(inp.ready())
					{
						for(int row = 0;row < numSample ; row++)
						{

								String nextline = inp.readLine();
								if(nextline == null) continue;

								   // Break the line down
								  StringTokenizer tokens = new StringTokenizer (nextline);
								  int numargs = tokens.countTokens();
									  if ( numargs == 0 ) continue;
							  for(int col = 0; col < NUM_SENSOR; col++)
							  {
								data.set(row,  col, Double.valueOf(tokens.nextToken()).doubleValue());
							  }

				 		 }


					 }
					 inp.close();
				 }
				  catch (IOException e)
				  {
					  System.err.println("WARNING - Could not open configuration file");
					  System.err.println("            Will use default values instead");
				  }



			 //data.print(2, 1);

			  loaded = true;
 		 }
	}

	public Matrix getRSSI(int n)
	{
		return data.getMatrix(n, n, 0, NUM_SENSOR-1).transpose();
	}
	public int getSize()
	{
		return numSample;
	}
}
