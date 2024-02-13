package ch_45;

import java.applet.Applet;
import java.awt.Graphics;

/**
 *
 * @author Darsh
 */
public class HelloWorldAPP extends Applet{
  
    @Override
    public void paint(Graphics g){
            g.drawString("Hello World in APPLET", 100, 300);
    }
}
