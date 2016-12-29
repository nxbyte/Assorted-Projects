//============================================================================
// Name        : HangM.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//Declaring
	
	const int type = 6; //It will keep the amount of spaces for an array
	char word[type] = {'s', 'i', 'm', 'p', 'l', 'e'}; //This is the preset word that will be guessed
	char body[6] = {'0', '/', '|', '\\', '/', '\\'}; //This array is the collection of body parts
	char blank[6] = {'_', '_', '_', '_', '_', '_'}; //This array holds blank spaces, each space will be overwriten if the user type a correct letter
	char wrong[6]; //This will hold wrong letters
	char enter;
	int make = 0, no = 0, counter = 0;
	int count, count2, numx, reset;
	//The variable 'reset', controls when the loop. It will govern if the user types in either a right letter or a wrong letter. 

	//"Body" of the code, has input and output functions
	
	for (count = 0; (make < 6 && no < 6); count++) 
	//The loop will stop when the user guesses the word right, or when the user enters six incorrect letter
	{
		cout << "Enter a letter: ";
		cin >> enter;
		
		numx = 0; //This will reset a placeholder for determining if the inputted letter is wrong or right 

		for (count2 = 0; count2 <= 5; count2++)
		//This counter will loop and search for correct letters between the preset word and the user input
		{
			if (word[count2] == enter) //If the user enters a correct letter, then:
			{
				cout << word[count2] << " "; //Output the correct letter
				blank[count2] = word[count2]; //The correct letter will be reassigned to save the correct letter
				make = make + 1; //This will tally the number of correct guesses. (When 'make' reaches six, the loop will stop)
			}
			
			else //If the user types an incorrect letter, then:
			{
				cout << blank[count2] << " "; //Output the current guesses and blanks
				numx = numx + 1; //This will tally the number of wrong guesses. (When 'numx' reaches six, it will activate the if statement below)
			}
		}
		
		if (numx == 6) //If 'numx' reaches six, this means the letter inputted is not in the word, which will then:
		{
			wrong[counter] = enter; //Reassign the incorrect letter into the 'wrong' array,
			no = no + 1; //Tally the number of incorrect guesses,
			counter = counter + 1; //and will keep a seperate tally that will keep a contant counter for when the letter the user inputs is wrong.
			
			if (reset == 1) //This will rest the main loop if reset is one
			{
				count = 0;
			}	
				reset = 0; //Then it will reassign so the program can keep track when to reset the main loop
		}
		
		else //If the user inputs a correct letter, then:
		{
			wrong[counter] = ' '; //Assign the 'wrong' array as a space, so the inputted letter will not show up as a dead letter
				
			if (reset == 0) //This will rest the main loop if reset is zero
			{
				count = 0; 
			}
				reset = 1; //Then it will reassign so the program can keep track when to reset the main loop
		}

		cout << endl;
		
		//The loop below controls the output for the dead letters
		
		cout << "Wrong letters: ";
		
		for (count2 = 0; count2 < no; count2++)
		{
			if (wrong[count2] != ' ')
			{
				cout << wrong[count2] << " "; //Output the selected dead letters
			}
		}
		
		cout << endl;
		cout << endl;
		
		//This loop controls the output of the hangman graphic 
		
		cout << "-|";
		
		for (count2 = 0; count2 < no; count2++)
		{
			if (count2 == 0 || count2 == 1 || count2 == 4)
			{
				cout << endl;
			}
			
			if (count2 == 0 || count2 == 5)
			{
				cout << " ";
			}	
				cout << body[count2];
		}
		
		cout << endl;
		cout << endl;
	}

	return 0;
}
