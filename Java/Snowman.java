//Warren Seto
//Period 2

import java.applet.Applet;
import java.awt.*;

public class Snowman extends Applet
{
   public void paint (Graphics page)
   {
	  //Layout of the applet
      final int MID = 170;
      final int TOP = 50;

      setBackground (Color.cyan); //Background Color
      
      page.drawString ("Warren Seto", 3, 12); //My name in the upper-left corner
      
      page.setColor (Color.blue);
      page.fillRect (0, 175, 300, 50); //Ground

      page.setColor (Color.yellow);
      page.fillOval (260, -40, 80, 80); //Modified Sun

      page.setColor (Color.white);
      page.fillOval (MID-20, TOP, 40, 40); //Head
      page.fillOval (MID-35, TOP+35, 70, 50);  //Upper torso
      page.fillOval (MID-50, TOP+80, 100, 60); //Lower torso
     
      page.setColor (Color.red);
      page.fillOval (MID-5, TOP+40, 7, 7); //Creates one red button
      page.fillOval (MID-5, TOP+55, 7, 7); //Creates second red button

      page.setColor (Color.black);
      page.fillOval (MID-10, TOP+10, 5, 5); //Left eye
      page.fillOval (MID+5, TOP+10, 5, 5); //Right eye

      page.drawArc (MID-10, TOP+25, 20, 10, -190, -160); //Smile

      page.drawLine (MID-25, TOP+60, MID-50, TOP+40); //Left Arm
      page.drawLine (MID+25, TOP+60, MID+55, TOP+60); //Right Arm

      page.drawLine (MID-20, TOP+5, MID+20, TOP+5); //Brim of Hat
      page.fillRect (MID-15, TOP-20, 30, 25); //Top of Hat
   }
}
