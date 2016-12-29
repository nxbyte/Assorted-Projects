//Warren Seto
//Period 2

import java.util.Scanner;

public class Quote {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in); //Input Stream
		String quote, check; //Quote, and each letter in the string
		int length, count; //Length of string, controls "for" loops
		int A = 0, E = 0, I = 0, O = 0, U = 0; //Vowels
		int space = 0, con = 0, pun = 0; //Everything else
		
		System.out.println("Project: Quote");
		
		System.out.print("Enter a quote: ");
		quote = input.nextLine(); //Input a quote
		System.out.println(); //Space
		
		length = quote.length(); //Determines the length of the string
		
		//Finds the amount of (a)
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals("a")) //Checks the letter from the string with a vowel
			{
				A++;
			}	
		}
		
		//Finds the amount of (e)
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals("e")) //Checks the letter from the string with a vowel
			{
				E++;
			}	
		}
		
		//Finds the amount of (i)
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals("i")) //Checks the letter from the string with a vowel
			{
				I++;
			}	
		}
		
		//Finds the amount of (o)
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals("o")) //Checks the letter from the string with a vowel
			{
				O++;
			}	
		}
		
		//Finds the amount of (u)
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals("u"))
			{
				U++;
			}	
		}
		
		//Finds everything else
		for (count = 0; count < length; count++)
		{			
			check = quote.substring(count, (count + 1)); //Sets a letter from the string
			
			if (check.equals(" "))
			{
				space++;
			}	
			
			if (check.equals("."))
			{
				pun++;
			}
			
			if (check.equals(","))
			{
				
				
				
				
				
				
				
				
				pun++;
			}
			
			if (check.equals("!"))
			{
				pun++;
			}
			
			if (check.equals("?"))
			{
				pun++;
			}
			
			if (check.equals("'"))
			{
				pun++;
			}
		}

		con = length - (A + E + I + O + U + space + pun); //Determines the consonants 
		
		//Outputs the information
		System.out.println("Number of lowercase 'a': " + A);
		System.out.println("Number of lowercase 'e': " + E);
		System.out.println("Number of lowercase 'i': " + I);
		System.out.println("Number of lowercase 'o': " + O);
		System.out.println("Number of lowercase 'u': " + U);
		System.out.println("Number of consonants: " + con);
		System.out.println("Number of spaces: " + space);
		System.out.println("Number of punctuation marks: " + pun);

	}
}

/*
Output:

Project: Quote
Enter a quote: The quick brown fox jumped over the lazy dog.

Number of lowercase 'a': 1
Number of lowercase 'e': 4
Number of lowercase 'i': 1
Number of lowercase 'o': 4
Number of lowercase 'u': 2
Number of consonants: 24
Number of spaces: 8
Number of punctuation marks: 1


*/