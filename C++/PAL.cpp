//============================================================================
// Name        : PAL.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare

	char enter[15], compare[15];
	int count = 0;
	int count2 = 0;
	int tally = 0;
	int set;

	//Entering a word

	cout << "When you are finished entering your word, enter a '.' right after to indicate that you are done typing in your word, then type 'enter'." << endl;
	cout << "Enter a word: ";
	cin >> enter;

	//The loop below finds out how many letters the are inside the entered word-
	
	do
	{
		//If the loop does not detect a period, then:
		if (enter[count] != '.') 
		{
			count = count + 1; //Keep a running tally. This tally holds the number of letters in the word
		}
	}
	while (enter[count] != '.');
	//The loop above will stop when it detects a '.'
		
	set = count; //This will reassign the tally to another variable. 'count' will be reused in the next for-loops
	
	//This loops detects if the word is a palindrome
	
	for (count = set - 1; count >= 0; count--) 
	//The loop will start one minus the total letters, and stop when 'count' hits 0	
	{
		compare[count2] = enter[count]; //This will assign the reverse letters of the inputted word, into another array 
		
		if (compare[count2] == enter[count2]) //This will check if both arrays have matching letters
		{
			tally = tally + 1; //This will keep a tally of the number of similar letters between the two arrays 
		}
		
		count2 = count2 + 1; //This will run a seperate loop that will control the advancement of the other array 'compare'
	}
	
	if (tally == set)
	{
		cout << "The word above is a palindrome" << endl;
	}
	
	else
	{
		cout << "The word above is not a palindrome" << endl;
	}
	
	return 0;
}
