
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

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.applet.*;

public class MagicFilter extends JFrame{
	public static void main(String arg[]){
		MagicFilter frame = new MagicFilter();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		GraphPanel myGraph = new GraphPanel();
		frame.getContentPane().add(myGraph);
		frame.show();
		int num = myGraph.getNumSample() -1 ;
		for(int i = 0; i < num ; i++){
			try{
				Thread.sleep(2);
			}catch(Exception e)
			{}
			myGraph.liveDraw(i);
		}
	}

	private AboutDialog dialog;
	//private GraphPanel panel;

	public MagicFilter(){
		String plaf = "com.sun.java.swing.plaf.windows.WindowsLookAndFeel";
		try{
			UIManager.setLookAndFeel(plaf);
			SwingUtilities.updateComponentTreeUI(this);
		}catch(Exception e){
			e.printStackTrace();
		}

		Toolkit kit = Toolkit.getDefaultToolkit();
		Dimension screensize = kit.getScreenSize();
		int screenHeight = screensize.height;
		int screenWidth = screensize.width;
		setSize( screenWidth, screenHeight);
		setTitle("Magic Filter");

		JMenuBar menuBar = new JMenuBar();
		JMenu fileMenu = new JMenu("File");
		JMenuItem estItem = new JMenuItem("Estimate");
		JMenuItem opItem = new JMenuItem("Optimal Graph");

		estItem.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent event){
				System.out.println("Redrawing");
			}
		});

		Action exitAction = new AbstractAction("Exit"){
			public void actionPerformed(ActionEvent event){
				System.exit(0);
			}
		};

		JMenuItem exitItem = new JMenuItem(exitAction);

		JMenu helpMenu = new JMenu("Help");
		JMenuItem aboutItem = new JMenuItem("About MagicFilter");

		aboutItem.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent event){
				if(dialog == null)
					dialog = new AboutDialog(MagicFilter.this);
				dialog.show();
			}
		});

		menuBar.add(fileMenu);
		menuBar.add(helpMenu);
		fileMenu.add(estItem);
		fileMenu.add(opItem);
		fileMenu.addSeparator();
		fileMenu.add(exitItem);
		helpMenu.add(aboutItem);
		setJMenuBar(menuBar);
	}
}

class AboutDialog extends JDialog{
	public AboutDialog(JFrame owner){
		super(owner, "About MagicFilter", true);
		Container pane = getContentPane();
		pane.add(new JLabel("<HTML> <b> <I> MagicFilter 1.2</i></b><hr>"
			+ " By NRL.SUMMER group<br>"
			+ " Copyright@2004 by NRL.SUMMER UNSW</HTML>"), BorderLayout.CENTER);
		JButton ok = new JButton("OK");
		ok.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent event){
				setVisible(false);
			}
		});

		JPanel panel = new JPanel();
		panel.add(ok);
		pane.add(panel, BorderLayout.SOUTH);
		setSize(250, 150);
	}
}
