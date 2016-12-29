//Warren Seto
//Period 2

public class Stars {

	public static void main(String[] args) {	

		int count, count2, space = 9; //Declares the two counters used in this program, and the variable for spacing
		
		System.out.println("Project: Stars"); //Project: Stars
		System.out.println();
		
		//Part A:
		System.out.println("Part a: ");
		
		for (count = 0; count <= 10; count++) //A loop that allows stars to be outputted in the next ten lines 
		{
			for (count2 = 10; count2 > count; count2--) //Outputs the number of stars
			{
				System.out.print("*");
			}
			System.out.println(); //Next Line
		}
		
		//Part B:
		System.out.println("Part b: ");

		for (count = 1; count <= 10; count++) //A loop that allows stars to be outputted in the next ten lines 
		{			
			for (count2 = 0; count2 < space; count2++) //Star Spacing
			{
				System.out.print(" ");
			}
			
			space = space - 1; //Regulates the amount of spaces for stars
			
			for (count2 = 0; count2 < count; count2++) //Outputs the stars
			{
				System.out.print("*");
			}
			System.out.println(); //Next Line
		}
		System.out.println(); //Next Line
		
		//Part C:
		System.out.println("Part c:");
		
		for (count = 0; count <= 10; count++) //A loop that allows stars to be outputted in the next ten lines 
		{
			for (count2 = 1; count2 <= count; count2++) //Star Spacing
			{
				System.out.print(" ");
			}
			
			for (count2 = 10; count2 > count; count2--) //Outputs the stars
			{
				System.out.print("*");
			}
			System.out.println(); //Next Line
		}
		
		space = 5;
		
		//Part D:
		
		System.out.println("Part d:");
				
		for (count = 0; count <= 9; count++) //The first loop handles the top portion of the diamond
		{
			if (count % 2 == 0) //If the counter counts to an even number, then 
			{
				for (count2 = 0; count2 <= space; count2++) //Star Spacing
				{
					System.out.print(" ");
				}
						
				space = space - 1; //Regulates the amount of spaces for stars
						
				for (count2 = 0; count2 <= count; count2++) //Outputs the stars
				{
					System.out.print("*");
				}	
					System.out.println(); //Next Line
			}
			//If the counter counts an odd number, or zero, it skips the commands above all together 
		}
			
		for (count = 9; count >= 0; count--) //The second loop handles the bottom portion of the diamond
		{
			if (count % 2 == 0) //If the counter counts to an even number, then 
			{
				space = space + 1; //Regulates the amount of spaces for stars
						
				for (count2 = 0; count2 <= space; count2++) //Star Spacing
				{
					System.out.print(" ");
				}
						
				for (count2 = 0; count2 <= count; count2++) //Outputs the stars
				{
					System.out.print("*");
				}
						
				System.out.println(); //Next Line
			}		
			//If the counter counts an odd number, or zero, it skips the commands above all together 
		}		
	}	
}

/*

Project: Stars

Part a: 
**********
*********
********
*******
******
*****
****
***
**
*

Part b: 
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

Part c:
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
          
Part d:
      *
     ***
    *****
   *******
  *********
  *********
   *******
    *****
     ***
      *

 */
