//============================================================================
// Name        : Juggle.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare
	
	char num[5];
	int count, sum = 0;
    	
	//This loop that handels input and checking if the letter inputted is a vowel
	
	for (count = 1; count <= 6; count++)
	{
		cout << "Enter a letter: "; //Input statement
		cin >> num[count];
		
			if ((num[count] == 'a') || (num[count] == 'e') || (num[count] == 'i') || (num[count] == 'o') || (num[count] == 'u') || (num[count] == 'A') || (num[count] == 'E') || (num[count] == 'I') || (num[count] == 'O') || (num[count] == 'U'))
			//This will check if the letter being inputted is a vowel
			{
				sum = sum + 1; //If it is, allow a tally to be made
			}
		}

	cout << "Letters in order: "; //Part of Ouput, outputted the letters being inputted, in order of input 
	
	//This loop will order the numbers in order of input
	
	for (count = 1; count <= 6; count++)
	{
		cout << num[count] << " ";
	}
	
	cout << endl;
	
	//Part of input, this will output the letter backwards

	cout << "Backwords: ";
	
	for (count = 6; count >= 1; count--) //This loop will output the letters, but backwords
	{
		cout << num[count] << " ";
	}
	
	cout << endl;
	
	//Part of Ouput, ouputting the number of vowels and constants
	
	cout << "Number of vowels: " << sum << endl;
	            
	cout << "Number of constants: " << (6 - sum) << endl; //By subtracting 6 by the tally, it will find if the number of constants
	
	return 0;
}
