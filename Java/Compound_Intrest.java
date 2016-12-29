//Warren Seto
//Period 2

import java.util.Scanner;
import java.text.NumberFormat;

public class Compound_Intrest {

	public static void main(String[] args) {

		int P, t, n; //Declare (int)
		double r, A; //Declare (double)
		Scanner input = new Scanner (System.in); //Input stream
		NumberFormat money = NumberFormat.getCurrencyInstance(); //Format to money
		
		System.out.println("COMPOUND INTEREST"); //Compound Interest Project
		
		System.out.print("Amount of deposit: ");
		P = input.nextInt(); //Input deposit
		
		System.out.print("How many year(s): ");
		t = input.nextInt(); //Input year(s)
		
		System.out.print("Percent of interest: ");
		r = input.nextInt(); //Input interest
		r = r / 100;
		
		System.out.print("Compound time: (If Quartely, Enter 4). (If Half-Yearly, Enter 2). (Yearly, Enter 1): ");
		n = input.nextInt(); //Input if quarterly, half-yearly, or yearly
		
		//Compound interest formula
		A = (1 + (r/n));
		A = (Math.pow(A, (n * t)));
		A = A * P;

		System.out.println("Accumulated amount: " + money.format(A)); //Output final amount		
	}
}

/*
Output:

COMPOUND INTEREST
Amount of deposit: 10000
How many year(s): 10
Percent of interest: 4
Compound time: (If Quartely, Enter 4). (If Half-Yearly, Enter 2). (Yearly, Enter 1): 4
Accumulated amount: $14,888.64

 */