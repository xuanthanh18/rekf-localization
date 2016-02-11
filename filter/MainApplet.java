
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

import java.applet.*;
import java.awt.*;
import javax.swing.*;


import java.lang.*;
import java.awt.*;
import java.awt.geom.*;
import javax.swing.*;
import java.util.*;
import Jama.*;
import java.awt.event.*;
import java.applet.*;

public class MainApplet extends JApplet implements ActionListener
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


	public void paint(Graphics g)
	{
		g.drawString("hehe" , 60, 60);

	}

	public void actionPerformed(ActionEvent e)
	{

	}

	public void init()
	{
		//getContentPane().setLayout(new BorderLayout());

		JButton rawGraph = new JButton("Draw Graph");
		getContentPane().add(rawGraph, BorderLayout.NORTH);
		rawGraph.addActionListener(this);


		/*combo = new JComboBox();
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

		getContentPane().add(combo, BorderLayout.PAGE_START);

		style = new ButtonGroup();
		xystyle = new JRadioButton("X vs Y", true);
		xtstyle = new JRadioButton("X vs t", false);
		ytstyle = new JRadioButton("Y vs t", false);

		style.add(xystyle);
		style.add(xtstyle);
		style.add(ytstyle);

		getContentPane().add(xystyle);
		getContentPane().add(xtstyle);
		getContentPane().add(ytstyle);

		status = new JLabel("Program Status ! ", SwingConstants.LEFT);
		getContentPane().add(status, BorderLayout.SOUTH);



		//calculation
	//	status.setText("Simulating ...");
	//	System.out.println("he he " + rssi.getSize());
	//	filter.setNumSample(rssi.getSize());
		/*filter.initialize();
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

		//getPlotData(graphMode, what, dstyle); //get data
		//setScale();							  //set scales
		//conv(convData);						  //convert data to screen coordinates
		}


	}