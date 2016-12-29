//Period 2
//Warren Seto

import java.util.Scanner;
import java.text.DecimalFormat;

public class Chapter2Set2 {

	public static void main(String[] args) {
		
		//declaration
		int num1, num2, num3, num4, ans; //Variables
		double num5, num6; //Variables (double)
		Scanner input = new Scanner (System.in); //Input Stream
		DecimalFormat money = new DecimalFormat("0.0000"); //Decimal to the ten thousandth
		
		System.out.println("Assignment 2.6");//Beginning Assignment 2.6
		
		//Input Hours
		System.out.print("Enter hours: "); 
		num1 = input.nextInt();
		
		//Input Minutes
		System.out.print("Enter minutes: "); 
		num2 = input.nextInt();
		
		//Input Seconds
		System.out.print("Enter seconds: "); 
		num3 = input.nextInt();
		
		//Conversion to seconds
		num1 = num1 * 3600;
		num2 = num2 * 60;
		
		ans = num1 + num2 + num3; //Adds the seconds into a total
		
		//Output the amount of seconds
		System.out.println("Number of seconds: " + ans);
		System.out.println("");

		System.out.println("Assignment 2.7");//Beginning Assignment 2.7
		
		//Input Seconds
		System.out.print("Enter Seconds: ");
		num1 = input.nextInt();
		
		num2 = num1 / 3600; //Finds the number of hours
		num3 = (num1 - (num2 * 3600))/60; //Finds the number of minutes
		num4 = num1 - (num2 * 3600) - (num3 * 60); //Finds the number of seconds
		
		//Output the hours/minutes/seconds
		System.out.println("Hours: " + num2 + ", Minutes: " + num3 + ", Seconds: " + num4);
		System.out.println();
		
		System.out.println("Assignment 2.8");//Beginning Assignment 2.8
		
		//Input first 'x' coordinate
		System.out.print("Enter the first 'x' coordinate: "); 
		num1 = input.nextInt();
		
		//Input first 'y' coordinate
		System.out.print("Enter the first 'y' coordinate: "); 
		num2 = input.nextInt();
		
		//Input second 'x' coordinate
		System.out.print("Enter the second 'x' coordinate: "); 
		num3 = input.nextInt();
		
		//Input first 'x' coordinate
		System.out.print("Enter the second 'y' coordinate: "); 
		num4 = input.nextInt();
		
		//Find the difference of the two numbers
		num5 = num3 - num1; //(x)
		num6 = num4 - num2; //(y)
		
		//Find the square of the the difference
		num5 = Math.pow(num5, 2);
		num6 = Math.pow(num6, 2);
		
		num5 = Math.sqrt(num5 + num6); //Find the square root of the sum	
		
		//Output the distance of the two coordinates
		System.out.println("The distance of (" + num1 + "," + num2 +") and (" + num3 + "," + num4 + ") is " + (money.format(num5)));
		System.out.println("");

		System.out.println("Assignment 2.9");//Beginning Assignment 2.9
		
		System.out.print("Radius of Sphere: ");
		num5 = input.nextFloat();
		
		//Formula for Volume
		num6 = (Math.pow(num5, 3));
		num6 = (4.0/3.0) * num6 * Math.PI;
		
		System.out.println("Volume of the Sphere: " + (money.format(num6)));
		
		//Formula for Surface Area
		num6 = (Math.pow(num5, 2));
		num6 = (num6 * 4.0) * Math.PI;
		
		System.out.println("Surface Area of the Sphere: " + (money.format(num6)));
	}

}
/*//Output
 
Assignment 2.6
Enter hours: 1
Enter minutes: 28
Enter seconds: 42
Number of seconds: 5322

Assignment 2.7
Enter Seconds: 9999
Hours: 2, Minutes: 46, Seconds: 39

Assignment 2.8
Enter the first 'x' coordinate: 1
Enter the first 'y' coordinate: 2
Enter the second 'x' coordinate: 3
Enter the second 'y' coordinate: 4
The distance of (1,2) and (3,4) is 2.8284

Assignment 2.9
Radius of Sphere: 5
Volume of the Sphere: 523.5988
Surface Area of the Sphere: 314.1593
 
 */
