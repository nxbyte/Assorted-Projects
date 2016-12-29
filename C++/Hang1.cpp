//============================================================================
// Name        : Hang1.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare:
	
	const int type = 6;
	char name[type] = {'p', 'e', 'o', 'p', 'l', 'e'};
	char enter;
	int count, make = 0;

	//Input a letter:
	
	cout << "Enter letter: ";
	cin >> enter;
	
	//Loop controls checks if the inputted letter is in the word, it also controls the output
	
	for (count = 0; count < type; count++) 
	//This loop has a special properties, (type will have 2 subtracted because one of the spaces in memory is occupied by the letter being inputted)
	{	
		if (name[count] != enter)
		//The below will run when the inputted letter is not the same as the word that was declared in name[type]
		{
			name[count] = '_'; // This will reassign the placement of the letter if the letter inputted is not the same as what is declared	
			make = make + 1; // This will tally if the letter is not right
		}	
			cout << name[count] << " "; //This will output the altered statement or it is the letter
	}
	
	cout << endl;
	
	if (make == 6) //This will activate when (make) tallys to 3.
	//This will output when none of the letters that are inputted are in the word
	{
		cout << "Try again, please re-run to enter another letter." << endl;
	}
	
	return 0;
}
