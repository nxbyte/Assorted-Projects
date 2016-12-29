//Warren Seto
//Period 2
//Chapter 2 Set 3

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;

public class Chapter2Set3 {

	public static void main(String[] args) {
		
		//declare
		int num1, num2, num3; 
		double num4, num5, num6;
		float num7;
		Scanner input = new Scanner (System.in); //Input Stream
		DecimalFormat place = new DecimalFormat("0.000"); //Set the decimal place to the ten thousandth
		NumberFormat money = NumberFormat.getCurrencyInstance(); //Allows for proper formatting for money
		
		//Beginning Assignment 2.10
		System.out.println("Assignment 2.10");
		
		//Input the sides
		System.out.print("Enter one side of the triangle: ");
		num1 = input.nextInt();
		
		System.out.print("Enter second side of the triangle: ");
		num2 = input.nextInt();
		
		System.out.print("Enter third side of the triangle: ");
		num3 = input.nextInt();

		//Finding the area
		num4 = (num1 + num2 + num3)/2; //Find half the perimeter
		num4 = num4 * (num4 - num1) * (num4 - num2) * (num4 - num3); //Multiplies everything together 
		num4 = Math.sqrt(num4); //Root the product of the prior equation
		
		//Output
		System.out.println("Area of the triangle: " + (place.format(num4)));
		System.out.println();
		
		//Beginning Assignment 2.11
		System.out.println("Assignment 2.11");
		
		//Input the mileage and gallons
		System.out.print("First recorded mileage: "); 
		num4 = input.nextDouble();
		
		System.out.print("Second recorded mileage: ");
		num5 = input.nextDouble();
		
		System.out.print("Amount of gallons in the car: ");
		num7 = input.nextFloat();
		
		//Finding the miles per gallon
		num4 = num5 - num4;
		num4 = num4/num7;
		
		//Output
		System.out.println("Miles per gallon: " + num4);
		System.out.println();
		
		//Beginning Assignment 2.12
		System.out.println("Assignment 2.12");
		
		//Input the amount of coins
		System.out.print("Enter the number of quarters: ");
		num1 = input.nextInt();

		System.out.print("Enter the number of dimes: ");
		num2 = input.nextInt();
		
		System.out.print("Enter the number of nickels: ");
		num3 = input.nextInt();
		
		System.out.print("Enter the number of pennies: ");
		num4 = input.nextInt();
		
		//Finding the total amount of money 
		num4 = (num1 * 0.25) + (num2 * 0.1) + (num3 * 0.05) + (num4 * 0.01);
		
		//Output
		System.out.print("Total amount of money: " + money.format(num4));
	}
}

/*
Console:

Assignment 2.10
Enter one side of the triangle: 3
Enter second side of the triangle: 4
Enter third side of the triangle: 5
Area of the triangle: 6.000

Assignment 2.11
First recorded mileage: 0
Second recorded mileage: 200
Amount of gallons in the car: 10
Miles per gallon: 20.0

Assignment 2.12
Enter the number of quarters: 4
Enter the number of dimes: 10
Enter the number of nickels: 20
Enter the number of pennies: 100
Total amount of money: $4.00
*/
