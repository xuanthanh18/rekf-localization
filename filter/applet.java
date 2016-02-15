import java.applet.*;

public class MainApplet extends Applet{
  String s = "Java Howto";
  int x=20;
  int y=50;

public void init() {
  add(new Button("Real's"));
}

public void paint(Graphics g) {
  g.drawString(s, x,y);
  g.drawLine(x , y+2 , x+getFontMetrics(getFont()).stringWidth(s) , y+2 );
  }
}
