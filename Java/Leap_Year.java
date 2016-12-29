//Warren Seto
//Period 2
	
	import java.util.Scanner;

public class Leap_Year {

	public static void main(String[] args) {
		
		int year; //Declare 
		Scanner input = new Scanner (System.in); //Input Stream
				
		System.out.println("Leap Year");//Leap Year Project

		System.out.print("Enter a year: ");
		year = input.nextInt(); //Input the year to check
		
		if (year > 1582) //Checks if the year is greater than 1582
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //The year is a leap year if the year is either divisible by 4 and not divisible by 100, or divisible by 400
			{
				System.out.print("The year, " + year + " is a leap year.");
			}
			
			else //If the year does not fit the parameters above, then the year is not a leap year
			{
					System.out.print("The year, " + year + " is not a leap year.");
			}
		}
		
		else //If the year is not greater than 1582, then output an error
		{
			System.out.print("The year, " + year + " is not a valid year, because the year is not earlier than 1582.");
		}

	}
}

/*
Output:

Leap Year
Enter a year: 2012
The year, 2012 is a leap year.

*/