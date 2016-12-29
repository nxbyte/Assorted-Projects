//Warren Seto
//Period 2
	
	import java.util.Scanner;
	import java.util.Random;

public class Guessing {

	public static void main(String[] args) {
	
	Scanner input = new Scanner (System.in); //Input Stream		
	Random random =  new Random(); //Random number generator
	
	int guess, again = 0;
	int ans, check, level, count;
	
	System.out.println("Guessing"); //Guessing Project
	
	do {

	System.out.print("Enter (1) for the EASY level, and (2) for the DIFFICULT level: ");
	level = input.nextInt(); //Input if the user wants easy or difficult level
	System.out.println(); //Skips a line
	
	if (level == 1) //If the user wants an easy level, then it generates a number between 1~100
	{
		ans = random.nextInt(100) + 1;
	}
	
	else //If the user wants a hard level, then it generates a number between 1~1000
	{
		ans = random.nextInt(1000) + 1;
	}
	
	guess = 0; //Resets the guess for the game
	
	for (count = 1; (guess != ans) && (guess >= 0); count++)
	{	
		System.out.println("Enter any negative number to quit the game, or enter a positive number to guess.");
		
		if (level == 1) //Easy levels input a value between 1~100
		{
			System.out.print("Enter a guess between 1~100, or quit: ");
			guess = input.nextInt();
		}
		
		else //Easy levels input a value between 1~1000
		{
			System.out.print("Enter a guess between 1~1000, or quit: ");
			guess = input.nextInt();
		}
		
		if (guess > 0) //If the guess is positive, then it checks the guess
		{
			if (guess == ans) //If the user guesses the random number, then it runs the bottom
			{
				System.out.println(); //Skips a line
				System.out.println("You guessed it right!");
				System.out.println("You guessed: " + count + " time(s)"); //Shows how many guesses
			}
		
			else
			{			
				check = guess - ans; //If the user guesses wrong, then it checks if the guess is higher or lower than the generated number
			
				if (check < 0) //If the difference is a negative number, then it says the guess was too low
				{
					System.out.println("You guessed to low.");
				}
			
				else //If the difference is positive number, then it says the guess was too high
				{
					System.out.println("You guessed to high.");
				}
			}
		}
		
		System.out.println(); //Skips a line
	}

	System.out.print("Would you like to play again? (0=no), (1=yes): ");
	again = input.nextInt(); //Input for, if the user wants to play again
	System.out.println(); //Skips a line
	
	} while (again != 0); //The do/while will loop if the user enters 1, and quits if the user enters 0
	
	}
}

/*
Output: 
 
Guessing
Enter (1) for the EASY level, and (2) for the DIFFICULT level: 1

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 50
You guessed to low.

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 70
You guessed to low.

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 90
You guessed to high.

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 85
You guessed to high.

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 83
You guessed to high.

Enter any negative number to quit the game, or enter a positive number to guess.
Enter a guess between 1~100, or quit: 82

You guessed it right!
You guessed: 6 time(s)

Would you like to play again? (0=no), (1=yes): 1

Enter (1) for the EASY level, and (2) for the DIFFICULT level: 

*/