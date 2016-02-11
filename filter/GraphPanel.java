
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


import java.lang.*;
import java.awt.*;
import java.awt.geom.*;
import javax.swing.*;
import java.util.*;
import Jama.*;
import java.awt.event.*;
import java.applet.*;

public class GraphPanel extends JPanel implements ActionListener
{
	private Matrix  allData, data, convData, tempData;
	private Filter filter;
	final int HEIGHT = 500;
	final int WIDTH = 600;
	final int STARTX = 150;
	final int STARTY = 100;

	final int RAWMODE = 0; //graph all the data as it is
	final int OPMODE = 1;  //plot data after predict the values from the filter

	final int XYSTYLE = 0; //plot x vs y
	final int XTSTYLE = 1; //plot x vs t
	final int YTSTYLE = 2; //plot y vs t



	private double xMin, yMin;
	private double xScale, yScale;
	private int graphMode;
	private int dstyle;
	private int what;
	private int numSensor, numSample;

	//for live drawing
	private int index;
	private boolean debug;
	private boolean optimized;
	private boolean live;

	private JRadioButton xystyle, xtstyle, ytstyle;
	private ButtonGroup style;
	private JComboBox combo;
	private JLabel status;

	private Data rssi;



	public GraphPanel()
	{
		optimized = false;
		//setOpaque(true);
		filter = new Filter("config.cfg");
	//	rssi = new Data("output.txt");

		//default scales are 1s
		xScale = 1;
		yScale = 1;

		//interface
		String plaf = "com.sun.java.swing.plaf.windows.WindowsLookAndFeel";
		try
		{
			UIManager.setLookAndFeel(plaf);
			SwingUtilities.updateComponentTreeUI(GraphPanel.this);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}

		debug = false;


		JButton rawGraph = new JButton("Draw Graph");
		add(rawGraph);
		rawGraph.addActionListener(this);


		combo = new JComboBox();
		combo.setEditable(false);

		combo.addItem("Robot path");
		combo.addItem("All sensors and robot");
		combo.addItem("Sensor number 1");
		combo.addItem("Sensor number 2");
		combo.addItem("Sensor number 3");
		combo.addItem("Sensor number 4");
		combo.addItem("Sensor number 5");
		combo.addItem("Sensor number 6");
		combo.addItem("Sensor number 7");
		combo.addItem("Sensor number 8");
		combo.addItem("Sensor number 9");
		combo.addItem("Sensor number 10");

		add(combo);

		style = new ButtonGroup();
		xystyle = new JRadioButton("X vs Y", true);
		xtstyle = new JRadioButton("X vs t", false);
		ytstyle = new JRadioButton("Y vs t", false);

		style.add(xystyle);
		style.add(xtstyle);
		style.add(ytstyle);

		add(xystyle);
		add(xtstyle);
		add(ytstyle);

		status = new JLabel("Program Status ! ", SwingConstants.LEFT);
		add(status, BorderLayout.SOUTH);



		//calculation
	//	status.setText("Simulating ...");
	//	System.out.println("he he " + rssi.getSize());
	//	filter.setNumSample(rssi.getSize());
		filter.initialize();
		filter.doFilter();

		allData = new Matrix(filter.getSystemState().getArrayCopy());
		numSensor = (allData.getRowDimension() -1) /4 - 1;

		numSample = allData.getColumnDimension();
		index = numSample -1 ;




		/*Random rand = new Random();

		allData = new Matrix(filter.getSystemState().getRowDimension(), filter.getSystemState().getColumnDimension());

		for(int i = 0; i < allData.getRowDimension()/4; i++)
		{
			for(int j = 0; j < allData.getColumnDimension(); j++)
			{
				allData.set(i*4, j, 0);
				allData.set(i*4 +1 ,j, rand.nextDouble()*10000 - 5000);
				allData.set(allData.getRowDimension() -1 , j, rand.nextDouble()*10 - 5);

			}
		}*/




		graphMode = 0;
		dstyle = 0;
		what = 1;

		getPlotData(graphMode, what, dstyle); //get data
		setScale();							  //set scales
		conv(convData);						  //convert data to screen coordinates
	}

	/*
	@Function: getPlotData
	@Usage: get appropriate data to be plotted
	*/
	private void getPlotData(int mode, int what, int style)
	{
		if(mode ==0)
		{
			if(what ==1) //plot all sensors and robot
			{
				data = new Matrix(allData.getArrayCopy());

			}
			else if (what == 0) //plot robot path
			{
				data = new Matrix(5, allData.getColumnDimension());
				data= allData.getMatrix(numSensor*4, numSensor*4 + 4, 0, allData.getColumnDimension()-1);
				//data.print(2, 5);
			}
			else
			{
				data = new Matrix(5, allData.getColumnDimension());
				data.setMatrix(0, 3 ,0, allData.getColumnDimension()-1,allData.getMatrix((what -2)*4, (what-2)*4 + 3, 0, allData.getColumnDimension() -1 ));
				data.setMatrix(4, 4, 0, allData.getColumnDimension()-1, allData.getMatrix( (numSensor+1)*4, (numSensor+1)*4, 0, allData.getColumnDimension() -1));
			}
		}
		else
		{

		}

		convData = new Matrix(data.getArrayCopy()); //make a copy, this copy will be converted to plot
	}


	public void actionPerformed(ActionEvent event)
	{
		String cmd = event.getActionCommand();
		if(cmd.equals("Draw Graph"))
		{
			/* get information about :

			 - What to plot
			 - How to plot

			 */
			if(xystyle.isSelected() == true)
				dstyle = 0;
			else if (xtstyle.isSelected() == true)
				dstyle = 1;
			else
				dstyle = 2;


			what = combo.getSelectedIndex();

			getPlotData(RAWMODE, what, dstyle);
			setScale();
			conv(convData);


			/* */
			repaint();
			System.out.println("Raw Graph : " + dstyle + " and : " + what);



		}
		else if(cmd.equals("Simulate"))
		{
			status.setText("Simulating ...");
			if(xystyle.isSelected() == true)
				dstyle = 0;
			else if (xtstyle.isSelected() == true)
				dstyle = 1;
			else
				dstyle = 2;


			what = combo.getSelectedIndex();

			filter = new Filter("config.cfg");
			//filter.setNumSample(rssi.getSize());
			filter.initialize();
			filter.doFilter();
			allData = new Matrix(filter.getSystemState().getArrayCopy());
			numSensor = (allData.getRowDimension() -1) /4 - 1;
			getPlotData(RAWMODE, what, dstyle);
			setScale();
			conv(convData);

			repaint();


		}
		else if(cmd.equals("Optimal Graph"))
		{
			dstyle = 0;
			data = new Matrix(filter.getOptimizedState().getArrayCopy());
			//data = new Matrix(filter.getPerformance().getArrayCopy());
			convData = new Matrix(data.getArrayCopy());
			setScale();
			conv(convData);
			optimized = true;
			repaint();
		}
		else if(cmd.equals("Performance"))
		{
			dstyle = 0;
			data = new Matrix(filter.getPerformance().getArrayCopy());
			convData = new Matrix(data.getArrayCopy());
			setScale();
			conv(convData);
		//	optimized = false;
			repaint();
		}
		else
		{
			System.out.println("Optimal Graph");

		}

	}


	/**
	@Function: getNumSample
	@Usage :
	*/
	public int getNumSample()
	{
		return numSample;
	}

	/**
	@Function: liveDraw
	@Usage
	*/

	public void liveDraw(int n)
	{
		//System.out.println(n);
		index = n;
		repaint();
	}
	/*
	@Function: conv
	@Usage: convert real data to screen data
	*/
	private void conv(Matrix convData)
	{
		int COL, ROW;

		COL = convData.getColumnDimension();
		ROW = convData.getRowDimension();

		if(dstyle == 0)
		{
			for(int i = 0; i < ROW/4; i++)
			{
				for(int j = 0; j < COL; j++)
				{
					convData.set(i*4, j, (data.get(i*4, j) - xMin)/xScale + STARTX );
					convData.set(i*4 +1, j, STARTY + HEIGHT  -   ( - yMin +  data.get(i*4 +1, j))/yScale);
				}
			}
		}
		else if(dstyle == XTSTYLE) //x vs t
		{
			for(int i = 0; i < ROW/4; i++)
			{
				for(int j = 0; j < COL; j++)
				{
					//convData.set(i*4, j, (data.get(i*4, j) - xMin)/xScale + STARTX );
					convData.set(i*4, j, STARTY + HEIGHT -(-yMin + data.get(i*4, j))/yScale);
					//System.out.println("Y is : " + convData.get(i*4, j));

				}

			}

			for(int j =0; j < COL; j++)
			{
				convData.set(ROW -1, j, (data.get(ROW -1 , j) - xMin)/xScale + STARTX );
				//System.out.println("X is : " + convData.get(ROW-1, j));
			}
		}
		else
		{
			for(int i = 0; i < ROW/4; i++)
			{
				for(int j = 0; j < COL; j++)
				{
					//convData.set(i*4 + 1, j, (data.get(i*4 +1, j) - xMin)/xScale + STARTX );
					convData.set(i*4 + 1, j, STARTY + HEIGHT -(-yMin + data.get(i*4 + 1, j))/yScale);
				}
			}

			for(int j =0; j < COL; j++)
			{
				convData.set(ROW -1, j, (data.get(ROW -1 , j) - xMin)/xScale + STARTX );
				//convData.set(ROW-1, j, STARTY + HEIGHT -(-yMin + data.get(ROW-1, j))/yScale);
			}
		}
	}


	/*
	@Function: setScale
	@Usage: set x,y scale to fit all point into the graph
	*/
	private void setScale()
	{
		int COL, ROW;
		double xMax, yMax;

		xMin = data.get(0,0);
		xMax = xMin;

		yMin = data.get(1, 0);
		yMax = yMin;

		COL = data.getColumnDimension();
		ROW = data.getRowDimension();

		if(dstyle == 0)
		{
			xMin = data.get(0,0);
			xMax = xMin;

			yMin = data.get(1, 0);
			yMax = yMin;


			for(int i =0; i < ROW/4; i++)
			{
				for(int j =0; j < COL; j++)
				{

					if(xMin > data.get(i*4, j))
						xMin = data.get(i*4, j);
					if(xMax < data.get(i*4, j))
						xMax = data.get(i*4, j);


					if(yMin > data.get(i*4 +1, j))
						yMin = data.get(i*4 +1, j);
					if(yMax < data.get(i*4 +1, j))
						yMax = data.get(i*4 +1, j);

				}
			}
		}
		else if(dstyle == XTSTYLE) //x vs t
		{
			xMin = data.get(ROW-1,0);
			xMax = xMin;

			yMin = data.get(0, 0);
			yMax = yMin;

			for(int i =0; i < ROW/4; i++)
			{
				for(int j =0; j < COL; j++)
				{

					if(yMin > data.get(i*4, j))
					yMin = data.get(i*4, j);
					if(yMax < data.get(i*4, j))
					yMax = data.get(i*4, j);

				}
			}
			for(int j = 0; j < COL; j++)
			{
					if(xMin > data.get(ROW -1, j))
					xMin = data.get(ROW -1 , j);
					if(xMax < data.get(ROW -1, j))
					xMax = data.get(ROW -1, j);
			}

		}

		else //y vs t
		{
			xMin = data.get(ROW -1,0);
			xMax = xMin;

			yMin = data.get(0, 0);
			yMax = yMin;

			for(int i =0; i < ROW/4; i++)
			{
				for(int j =0; j < COL; j++)
				{

					if(yMin > data.get(i*4 +1, j))
					yMin = data.get(i*4 + 1, j);
					if(yMax < data.get(i*4 +1 , j))
					yMax = data.get(i*4 + 1, j);

				}
			}
			for(int j = 0; j < COL; j++)
			{
					if(xMin > data.get(ROW -1, j))
					xMin = data.get(ROW -1 , j);
					if(xMax < data.get(ROW -1, j))
					xMax = data.get(ROW -1, j);
			}


		}

		//set scale to plot
		xMax = 6000;
		xMin = 0;
		yMax = 9000;
		yMin = 0;

		if(xMax != xMin)
		{
			xScale = (xMax - xMin) / WIDTH;
		}

		if(yMax != yMin)
		{
			yScale = (yMax - yMin) / HEIGHT;
		}

		System.out.println("XScale is : " + xScale);
		System.out.println("YScale is : " + yScale);

	}


	public void paint(Graphics gf)
	{
		//System.out.println(index);

		debug = false;

		int space = 10;
		int sHEIGHT = 120;
		int sWIDTH = 140;


		super.paint(gf);
		Graphics2D g = (Graphics2D) gf;
		g.setColor(Color.white);
		Rectangle2D rect = new Rectangle2D.Double(STARTX, STARTY, WIDTH, HEIGHT);


		g.fill3DRect(STARTX, STARTY, WIDTH, HEIGHT, true);
		g.draw3DRect(STARTX, STARTY, WIDTH, HEIGHT, true);





		Font font = new Font("Serif", Font.BOLD, 12);
		Font oldFont = g.getFont();


		int ROW, COL;
		ROW = convData.getRowDimension();
		COL = convData.getColumnDimension();

		for(int i = 0; i < ROW/4; i++)
		{

			g.fill3DRect(STARTX + WIDTH + space ,STARTY + (i)*(sHEIGHT + space),  sWIDTH, sHEIGHT, true);
			g.draw3DRect(STARTX + WIDTH + space ,STARTY + (i)*(sHEIGHT + space),  sWIDTH, sHEIGHT, true);

		}

		/*
		//System.out.println("row is : " + ROW);
		//System.out.println("col is : " + COL);

		*/

		//set value for Y axis
		double val;
		for(int i = 0;  i <= HEIGHT/100; i++)
		{

			val =  i*100*yScale;
			//g.draw(new Line2D.Double(STARTX -2, -i*100 + STARTY + HEIGHT, STARTX +2, -i*100 + STARTY + HEIGHT));
			g.drawString(Double.toString(val), STARTX - 140, -i*100 + STARTY + HEIGHT);
			g.setFont(oldFont);
			g.setColor(Color.green);
			g.draw(new Line2D.Double(STARTX, STARTY + HEIGHT - i*100, STARTX + WIDTH, STARTY + HEIGHT - i*100));
			g.setColor(Color.black);
			g.setFont(font);

		}

		//set value for X axis
		for(int i = 0; i <= WIDTH/100; i++)
		{

			val  =  i*100*xScale;
			//g.draw(new Line2D.Double(STARTX + i*100, STARTY + HEIGHT -2, STARTX+i*100, STARTY + HEIGHT + 2));
			g.drawString(Double.toString(val), STARTX + i*100 - 50, STARTY+ HEIGHT + 20 + 20*(i%2));
			g.setFont(oldFont);
			g.setColor(Color.green);
			g.draw(new Line2D.Double(STARTX + i*100, STARTY, STARTX + i*100, STARTY + HEIGHT));
			g.setColor(Color.black);
			g.setFont(font);

		}

		//g.setFont(font);
		g.setColor(Color.black);
		g.draw(rect);
		g.setFont(font);

		//plot the points
		for(int i  = 0; i < ROW/4  ; i++)
		{
				switch(i)
				{
					case 0:
						g.setColor(Color.blue);
						break;
					case 1:
						g.setPaint(Color.cyan);
						break;
					case 2:
						g.setPaint(Color.darkGray);
						break;
					case 3:
						g.setPaint(Color.black);
						break;
					case 4:
						g.setPaint(Color.magenta);
						break;
					case 5:
						g.setPaint(Color.orange);
						break;
					case 6:
						g.setPaint(Color.pink);
						break;
					case 7:
							g.setPaint(Color.red);
						break;
					case 8:
						g.setPaint(Color.yellow);
						break;
					case 9:
						g.setPaint(Color.green);
						break;
					default:
						g.setPaint(Color.green);
						break;

				}

				//x vs y
				if(dstyle == 0)
				{
					//optimized
					if(optimized == true)
					{
						//
						for(int j = 0; j < index - 1; j++)
							g.fillOval((int)convData.get(i*4,j), (int)convData.get(i*4 +1, j), 10,10  );

						for(int j = index ; j < COL -1; j++)
						{
							g.setColor(Color.red);
							g.fillOval((int)convData.get(i*4, j), (int) convData.get(i*4 +1, j), 10, 10);
							g.drawString(Integer.toString(j-COL + 12), (int) convData.get(i*4, j) + 15, (int) convData.get(i*4 +1, j));

						}
						optimized = false;


					}
					else
					{

						//single x vs y
						g.setColor(Color.red);

						//Draw sensor positions
						if(what == 1)
						{

							if( i == ROW/4 -1)
							{

								Image image = Toolkit.getDefaultToolkit().getImage("lego.jpg");
								g.drawImage(image,(int) convData.get(i*4, index) + 10, (int) convData.get(i*4+1, index)- 10, null);

								g.drawString("Mobile Robot", STARTX + WIDTH + space + 20,STARTY + 10);
								g.setColor(Color.black);

								g.drawString("x :" + Double.toString(data.get(i*4, index)), STARTX + WIDTH + space + 10,STARTY + 30);
								g.drawString("y :" + Double.toString(data.get(i*4 +1, index)), STARTX + WIDTH + space + 10,STARTY + 50);
								g.drawString("Vx:" + Double.toString(data.get(i*4 +2, index)), STARTX + WIDTH + space + 10,STARTY + 70);
								g.drawString("Vy:" + Double.toString(data.get(i*4 +3, index)), STARTX + WIDTH + space + 10,STARTY + 90);

								g.setColor(Color.red);


								for(int j = 0; j < index - 1; j++)
								{
									g.fillOval((int) convData.get(i*4, j), (int) convData.get(i*4+1, j), 5, 5);

								}

							}
							else
							{
								g.setColor(Color.black);
								g.fillOval((int) convData.get(i*4, numSample -1), (int) convData.get(i*4+1, numSample -1), 10, 10);
								g.drawString(Integer.toString(i+1), (int) convData.get(i*4, numSample -1) - 15, (int) convData.get(i*4 +1, numSample -1) + 15);
								g.setColor(Color.red);



								g.drawString("Sensor " + Integer.toString(i+1), STARTX + WIDTH + space + 20,STARTY + (i+1)*(sHEIGHT + space) + 10);
								g.setColor(Color.black);

								g.drawString("x :" + Double.toString(data.get(i*4, index)), STARTX + WIDTH + space + 10,STARTY + (i+1)*(sHEIGHT + space) + 30);
								g.drawString("y :" + Double.toString(data.get(i*4 +1, index)), STARTX + WIDTH + space + 10,STARTY + (i+1)*(sHEIGHT + space) + 50);
								g.drawString("Vx:" + Double.toString(data.get(i*4 +2, index)), STARTX + WIDTH + space + 10,STARTY + (i+1)*(sHEIGHT + space)+70);
								g.drawString("Vy:" + Double.toString(data.get(i*4 +3, index)), STARTX + WIDTH + space + 10,STARTY + (i+1)*(sHEIGHT + space) + 90);

								double x;
								x = (data.get(i*4, index) - data.get(i*4, numSample -1))*(data.get(i*4, index) - data.get(i*4, numSample -1)) +(data.get(i*4 +1, index) - data.get(i*4+1, numSample -1))*(data.get(i*4+1, index) - data.get(i*4+1, numSample -1));
								//x = x / (data.get(i*4, numSample -1)*data.get(i*4, numSample -1) + data.get(i*4+1, numSample -1)*data.get(i*4+1, numSample -1) );
								x = Math.sqrt(x);

								g.setColor(Color.red);
								g.drawString("Error:" + Integer.toString((int)x) + "mm", STARTX + WIDTH + space + 10,STARTY + (i+1)*(sHEIGHT + space) + 110);

								g.setColor(Color.cyan);
								for(int j = 0; j < index - 1; j++)
								{
									g.fillOval((int) convData.get(i*4, j), (int) convData.get(i*4+1, j), 1,1 );

								}

								g.setColor(Color.blue);
								g.fillOval((int) convData.get(i*4, index), (int) convData.get(i*4+1, index), 10, 10);
								g.drawString(Integer.toString(i+1), (int) convData.get(i*4, index) + 15, (int) convData.get(i*4 +1, index) + 15);

							}

						}
						else
						{
							g.setColor(Color.blue);
							for(int j = 0; j < index - 1; j++)
							{
								g.fillOval((int) convData.get(i*4, j), (int) convData.get(i*4+1, j), 2, 2);
							}


						}

						//g.fillOval((int) convData.get(i*4, index), (int) convData.get(i*4+1, index), 2, 2);

						//Draw Robot path
							//System.out.println("position is " + (int) convData.get(i*4, j) + " : " + (int) convData.get(i*4 +1, j));



					}
				}

				//x or y vs t
				else if(dstyle == 1)
				{
						for(int j = 0; j < index -1; j++)
						{
							g.fillOval((int)convData.get(ROW-1, j), (int)convData.get(i*4, j), 2, 2);
						}

				}
				else
				{
					for(int j = 0; j < index - 1; j++)
					{
						g.fillOval((int)convData.get(ROW-1, j), (int) convData.get(i*4 +1, j), 2,2);
					}
				}
			}

			//convData = tempData.copy();
	}

}
