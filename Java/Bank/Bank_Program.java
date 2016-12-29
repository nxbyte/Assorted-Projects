//Warren Seto
//Period 2

import java.util.Scanner;

public class Bank_Program {

	public static void main(String[] args) {
	
		Account warren = new Account ("Warren", 1777, 100);
		Account jon = new Account ("Jon", 6666, 900);
		Account other = new Account ("Kevin", 8913);

		System.out.println("Initial Account Info:");
		System.out.println();
		System.out.println(warren.toString());
		System.out.println(jon.toString());
		System.out.println(other.toString());
		System.out.println();
		
		jon.transfer(warren, jon, 100);
		
		System.out.println("Account Information after $100 transfer: ");
		System.out.println();
		System.out.println(warren.toString());
		System.out.println(jon.toString());		
	}
}
