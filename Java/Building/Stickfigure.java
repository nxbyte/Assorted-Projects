//Warren Seto
//Period 2 

import java.awt.*;

public class Stickfigure {

	private int baseX;
	private int baseY;
	private Color color;
	private int height;

	public Stickfigure (int center, int bottom, Color shade, int size)
	{
		baseX = center;
		baseY = bottom;
		color = shade;
		height = size;
	}
	
	public void draw (Graphics page)
	{
		int top = baseY - height;
		
		page.setColor(color);
		page.fillRect(baseX-10, top, 100, 900);
	}
	
	public void lights (Graphics page)
	{
		page.setColor(color);
		page.fillRect(baseX, baseY, 10, 20);
	}
}
