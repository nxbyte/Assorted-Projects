//Warren Seto
//Period 2

import java.util.Scanner;

public class My_Name {
	
	public static void main(String[] args) {
		
		System.out.println("Program: My_Name");//My_Name Program
		
		//Declare
		Scanner input = new Scanner (System.in); //Input Stream
		int length, count, count2; //Controls: the amount of words in the string, and the loops
		String name; //String (Word)

		System.out.print("Enter a name: "); //Input a string
		name = input.nextLine(); //Input into string variable
		length = name.length(); //Find the amount of letters from what was inputed
		
		//Part 2, (String Backwards):
		System.out.print("Backwards: ");
		
		for (count = length; count > 0; count--)
		{
			System.out.print(name.substring((count-1), count));	//Outputs the last letter to first (One at a time)
		}
		
		System.out.println(); //Adding a space between each task
		
		//Part 3, (Space out the string):
		System.out.println("Descending Order: ");
		
		for (count = 0; count < length; count++)
		{
			System.out.println(name.substring(count, (count + 1))); //Outputs one letter at a time and go to the next line
			
			for (count2 = 0; count2 <= count; count2++)
			{
				System.out.print(" "); //Regulates the amount of spaces
			}	
		}
	}
}

/*
Output:

Program: My_Name
Enter a name: Warren Seto
Backwards: oteS nerraW
Descending Order: 
W
 a
  r
   r
    e
     n
       
       S
        e
         t
          o
*/
