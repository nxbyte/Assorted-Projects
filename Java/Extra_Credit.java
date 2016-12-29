//Warren Seto
//Period 2

import java.text.NumberFormat;
import java.util.Scanner;

public class Extra_Credit {
	
	public static void main(String[] args) {
	
	double l, n, c, preset, firstset, secondset, months, ans; //Declare (Double)
	Scanner input = new Scanner (System.in); //Input Stream
	NumberFormat money = NumberFormat.getCurrencyInstance(); //Money format
	
	System.out.println("Extra Credit");//Extra Credit Project
	
	System.out.print("Enter loan amount: ");
	l = input.nextDouble(); //Input Loan amount
	
	System.out.print("Enter amount of month(s): "); 
	n = input.nextDouble(); //Input month(s)
	
	System.out.print("Enter monthly interest rate: "); 
	c = input.nextDouble(); //Enter interest rate
	c = (c * 0.01); //Convert from whole number to a decimal for percentage
	c = c / 12.0;
	
	//Formula to calculate fixed monthly payment
	preset = (Math.pow((1 + c),n));	//Symbolizes (1+c)^2
	firstset = (preset * c);
	secondset = (preset - 1);
	ans = l * (firstset / secondset);
	
	System.out.println("Fixed Monthly Payment: " + money.format(ans)); //Output Monthly Payment
	
	System.out.print("After how many month(s): ");
	months = input.nextInt(); //Input the amount of month(s)
	
	firstset = Math.pow((1 + c), months); //Symbolizes (1+c)^months
	firstset = (preset - firstset);
	ans = l * (firstset / secondset);

	System.out.println("Remaining Total Balance: " +  money.format(ans)); //Output Balance
	}
}

/*
Output:

Extra Credit
Enter loan amount: 175000
Enter amount of month(s): 360
Enter monthly interest rate: 4.5
Fixed Monthly Payment: $886.70
After how many month(s): 180
Remaining Total Balance: $115,909.42


*/