//Warren Seto
//Period 2
	
import java.util.Scanner;

public class Triangle {

	public static void main(String[] args) {
	
	Scanner input = new Scanner (System.in); //Input Stream	

	int side1, side2, side3, sum1, sum2, sum3; //Sides of the triangle, and the sums
	int repeat; //Loop to make the program run again
	
	do{ //Beginning of loop
		
	System.out.println("Triangle");//Triangle Project
		
	System.out.print("Enter a first side: ");
	side1 = input.nextInt(); //Input first side
	
	System.out.print("Enter a second side: ");
	side2 = input.nextInt(); //Input second side
	
	System.out.print("Enter a third side: ");
	side3 = input.nextInt(); //Input third side

	//Finds the sum to test if the sides make a triangle
	sum1 = side2 + side3; 
	sum2 = side1 + side3;
	sum3 = side1 + side2;
	
	if ((sum1 > side1) && (sum2 > side2) && (sum3 > side3)) //If the sum of two sides are greater than the third side, then the sides form a triangle.
	{
		System.out.println("You entered three sides that form a triangle.");
		
		if ((side1 == side2) && (side2 == side3) && (side3 == side1)) //If all of the sides are equal, then it is an equilateral triangle.
		{
			System.out.println("Your triangle is an equilateral triangle.");
		}
		
		else if ((side1 != side2) && (side2 != side3) && (side3 != side1)) //If none of the sides are equal, then it is a scalene triangle.
		{
			System.out.println("Your triangle is a scalene triangle.");
		}
		
		else //If the two statements above are false, then it must be an isosceles triangle.
		{
			System.out.println("Your triangle is an isosceles triangle.");
		}
	}
	
	else //If one of the longest sides are not less than the sum of the other two sides, then the sides do not form a triangle.
	{
		System.out.println("You entered sides that do not form a triangle.");
	}
	
	System.out.println();
	System.out.print("Try again? (0=no, 1=yes): ");
	repeat = input.nextInt(); //Input to determine if the user wants to loop the program
	System.out.println();
	
	} while (repeat == 1);
	
	}
}

/*

Output:

Triangle
Enter a first side: 4
Enter a second side: 4
Enter a third side: 4
You entered three sides that form a triangle.
Your triangle is an equilateral triangle.

Try again? (0=no, 1=yes): 1

Triangle
Enter a first side: 

*/ 
