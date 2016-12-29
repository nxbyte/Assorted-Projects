//Warren Seto
//Period 2

import java.util.Random;
import java.applet.*;
import java.awt.*;

public class Building extends Applet {

	private final int wide = 500;
	private final int tall = 300;
	private final int min = 100;
	private final int var = 40;
	
	private Stickfigure f1, f2, f3, f4;
	private Stickfigure win1, win2, win3, win4, win5;
	private Stickfigure win6, win7, win8, win9, win10;
	private Stickfigure win11, win12, win13, win14, win15;
	
	public void init ()
	{
		int h1, h2, h3, h4, h5;
		Random gen = new Random();
		
		h1 = min + gen.nextInt (var);
		h2 = min + gen.nextInt (var);
		h3 = min + gen.nextInt (var);
		h4 = min + gen.nextInt (var);
		
		f1 = new Stickfigure (140, 150, Color.red, h1);
		f2 = new Stickfigure (220, 150, Color.blue, h2);
		f3 = new Stickfigure (300, 150, Color.GREEN, h3);
		f4 = new Stickfigure (380, 150, Color.darkGray, h4);
		
		//=========================================================Windows Part
		
		h1 = gen.nextInt (200) + 141;
		h2 = gen.nextInt (200) + 141;
		h3 = gen.nextInt (300) + 141;
		h4 = gen.nextInt (200) + 141;
		h5 = gen.nextInt (300) + 141;
		
		win1 = new Stickfigure (h1, 80, Color.yellow, 10);
		win2 = new Stickfigure (h2, 75, Color.yellow, 10);
		win3 = new Stickfigure (h3, 90, Color.yellow, 10);
		win4 = new Stickfigure (h4, 106, Color.yellow, 10);
		win5 = new Stickfigure (h5, 121, Color.yellow, 10);
		
		h1 = gen.nextInt (200) + 141;
		h2 = gen.nextInt (200) + 141;
		h3 = gen.nextInt (300) + 141;
		h4 = gen.nextInt (200) + 141;
		h5 = gen.nextInt (300) + 141;
		
		win6 = new Stickfigure (h1, 147, Color.yellow, 10);
		win7 = new Stickfigure (h2, 163, Color.yellow, 10);
		win8 = new Stickfigure (h3, 140, Color.yellow, 10);
		win9 = new Stickfigure (h4, 192, Color.yellow, 10);
		win10 = new Stickfigure (h5, 179, Color.yellow, 10);
		
		h1 = gen.nextInt (200) + 141;
		h2 = gen.nextInt (300) + 141;
		h3 = gen.nextInt (300) + 141;
		h4 = gen.nextInt (200) + 141;
		h5 = gen.nextInt (300) + 141;
		
		win11 = new Stickfigure (h1, 230, Color.yellow, 10);
		win12 = new Stickfigure (h2, 242, Color.yellow, 10);
		win13 = new Stickfigure (h3, 263, Color.yellow, 10);
		win14 = new Stickfigure (h4, 211, Color.yellow, 10);
		win15 = new Stickfigure (h5, 242, Color.yellow, 10);

		//=========================================================Windows Part
		
		setBackground (Color.black);
		setSize(wide, tall);
	}
	
	public void paint (Graphics page)
	{
		f1.draw (page);
		f2.draw (page);
		f3.draw (page);
		f4.draw (page);
		
		win1.lights (page);
		win2.lights (page);
		win3.lights (page);
		win4.lights (page);
		win5.lights (page);
		win6.lights (page);
		win7.lights (page);
		win8.lights (page);
		win9.lights (page);
		win10.lights (page);
		win11.lights (page);
		win12.lights (page);
		win13.lights (page);
		win14.lights (page);
		win15.lights (page);
	}
}
