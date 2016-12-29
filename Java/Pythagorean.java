//Warren Seto
//Period 2

import java.util.Scanner;

public class Pythagorean{

	public static void main(String[] args) {
		
		int num1, num2, num3; //Declare
		Scanner input = new Scanner (System.in); //Input Stream
		
		System.out.println("PYTHAGOREAN"); //Pythagorean Project
		
		System.out.print("Enter the length of the hypotenuse: "); //Input hypotenuse
		num1 = input.nextInt();
		
		System.out.print("Enter the length of one of the sides: "); //Input one side
		num2 = input.nextInt();
			
		num1 = (int) (Math.pow(num1, 2)); //Square the hypotenuse
		num2 = (int) (Math.pow(num2, 2)); //Square one of the sides
		num3 = num1 - num2; //Subtract the hypotenuse with one of the sides
		num3 = (int) (Math.sqrt(num3)); //Find the square root of the subtracted total
		
		System.out.println("The length of the other leg of the triangle is: " + num3); //Output
	}

}

/*
Output:

PYTHAGOREAN
Enter the length of the hypotenuse: 5
Enter the length of one of the sides: 4
The length of the other leg of the triangle is: 3
*/