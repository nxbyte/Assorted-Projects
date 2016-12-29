//Warren Seto
//Period 2

import java.util.Random;

public class Lottery {
	
	public static void main(String[] args) {
		
		int num1, num2, num3, num4, num5, num6; //Declare (int)
		Random lottery = new Random(); //Initialize random class
		
		System.out.println("LOTTERY"); //Lottery Project
		
		//Generates six random number between 1~49 using the random class
		num1 = lottery.nextInt(49) + 1;
		num2 = lottery.nextInt(49) + 1;
		num3 = lottery.nextInt(49) + 1;
		num4 = lottery.nextInt(49) + 1;
		num5 = lottery.nextInt(49) + 1;
		num6 = lottery.nextInt(49) + 1;
		
		//Outputs the six random numbers
		System.out.print("Your Lottery numbers (from Random class): ");
		System.out.print(num1 + " " + num2 + " " + num3 + " " + num4 + " " + num5 + " " + num6);
		System.out.println(); //Space
		
		//Generates six random number between 1~49 using the math class
		num1 = (int) (Math.random() * 49 + 1);
		num2 = (int) (Math.random() * 49 + 1);
		num3 = (int) (Math.random() * 49 + 1);
		num4 = (int) (Math.random() * 49 + 1);
		num5 = (int) (Math.random() * 49 + 1);
		num6 = (int) (Math.random() * 49 + 1);
		
		//Outputs the six random numbers
		System.out.print("Your Lottery numbers (from Math class): ");
		System.out.print(num1 + " " + num2 + " " + num3 + " " + num4 + " " + num5 + " " + num6);
	}

}

/*
Output:

LOTTERY
Your Lottery numbers (from Random class): 11 35 10 34 13 34
Your Lottery numbers (from Math class): 4 42 17 23 1 40
*/