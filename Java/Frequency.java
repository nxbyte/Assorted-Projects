//Warren Seto
//Period 2
	
import java.util.Scanner;
	
	public class Frequency {
		public static void main(String[] args) {
			
		//Declare Variables:
		Scanner input = new Scanner(System.in);
		String quote; //Quote
		int count, count2, ignore, stars; //'ignore' is a variable that will used in two ways (see below), and stars outputs the amount of stars
		int outputA = 0; //Sets the "physical array" size for output
			
		System.out.println("FREQUENCY_HISTOGRAM");//FREQUENCY_HISTOGRAM project	
		
		//Input a quote:
		System.out.print("Enter a quote: ");
		quote = input.nextLine();
		quote = quote.toLowerCase(); //Converts the quote into lowercase
			
		//Declare the correct array size for the quote
		char[] letter = new char[quote.length()];
		int[] FREQ = new int[quote.length()];
			
		//Converts from string to char array of quote
		for (count = 0; count < quote.length(); count++)
		{
			letter[count] = quote.charAt(count); //String -> char[]
		}
			
		//Finds how frequent each letter appears in the quote:
		for (count = 0; count < quote.length(); count++)
		{
			for (count2 = 0; count2 < quote.length(); count2++)
			{
				if (letter[count] == letter[count2])
				{
					FREQ[count]++; //Finds the frequency of each letter in the char[] array
				}	
			}
		}
			
		//The next two loops will make 'ignore' act as a flag to detect repeated letters in the quote
		
		//Deletes repeats and cleans-up the array for formal output
		for (count = 0; count < quote.length(); count++)
		{
			ignore = 0; //Resets 
				
			//Loop that finds repeated letters in the 'letter' array
			for (count2 = (count + 1); count2 < quote.length(); count2++)
			{
				if (letter[count] == letter[count2]) //If the quote finds repeated letters, then do not put the letter into the array
				{
					ignore = 1; //When ignore = 1, the letter will NOT be in the revised array
				}
			}
				
			if (ignore == 0) //If the quote does not find repeated letters, then put the letter into the 'letter' array
			{
				letter[outputA] = letter[count]; //Reassigns the letters to format the letters for output
				FREQ[outputA] = FREQ[count]; //Reassigns the FREQ to match the reassignment of the letters
				outputA++; //Determines the placement of the array
			}
		}		
		
		//The rest of the program will make 'ignore' store the maximum value in the 'FREQ' array
		
		ignore = 0; //Resets 'ignore' so it can store the maximum value in the 'FREQ' array
		
		//Find the largest number in the 'FREQ' array
		for (count = 0; count < outputA; count++)
		{
			if (FREQ[count] > ignore) //Finds the largest number in the 'FREQ' array
				ignore = FREQ[count];
		}

		//Output:
		System.out.println();
		System.out.println("Frequency of letters in the quote: ");
		System.out.println();	

		//Counts from the maximum number in the 'FREQ' array to 0
		for (count = ignore; count > 0; count--)
		{
			for (count2 = 0; count2 < outputA; count2++)
			{
				if (count == FREQ[count2])
				{
					System.out.print("'" + letter[count2] + "'" + " : "); //Formats the output
							
					for (stars = 0; stars < FREQ[count2]; stars++) //Prints out the stars horizontally
					{
						System.out.print("*"); //Star output
					}
						System.out.println(); //New Line
				}
			}
		}
	}
}
	
/*
Output:

FREQUENCY_HISTOGRAM
Enter a quote: If I had eight hours to chop down a tree, I'd spend six hours sharpening my ax.

Frequency of letters in the quote: 

' ' : ****************
'h' : ******
'i' : ******
'o' : *****
's' : *****
'e' : *****
'd' : ****
'r' : ****
'n' : ****
'a' : ****
't' : ***
'p' : ***
'u' : **
'g' : **
'x' : **
'f' : *
'c' : *
'w' : *
',' : *
''' : *
'm' : *
'y' : *
'.' : *

 */