//============================================================================
// Name        : Nim.cpp
// Author      : Warren Seto
// Version     : period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare

	int count, takenum, total, max;
	int seta = 8;
	int setb = 5;
	int setc = 3;
	char takeset;
	
	cout << "Nim Game." << endl;
	cout << endl;
	
	//A loop that controls the entire game:
	
	for (count = 1; total != 1; count++)
	{
		if (count % 2 == 0) //When it is an even round, then Player 2 plays.
		{
			cout << "Player 2's Turn." << endl;
		}
		
		else //When it is an odd round, then Player 1 plays.
		{
			cout << "Player 1's Turn." << endl;
		}	
		
		//This outputs the remaining stones in each pile
		
		cout << "Set A: " << seta << endl;
		cout << "Set B: " << setb << endl;
		cout << "Set C: " << setc << endl;
		
		do //This loops checks if the user's input is vaild.
		{
			cout << "Enter the set you want to take from, (enter: 'a', 'b', or 'c'): ";
			cin >> takeset;
			
			if (takeset == 'a' || takeset == 'A')
			{
				max = seta;
			}
		
			if (takeset == 'b' || takeset == 'B')
			{
				max = setb;
			}
			
			if (takeset == 'c' || takeset == 'C')
			{
				max = setc;
			}
			
			cout << "Enter the amount of stones you would like to take, (enter up to a maximum amount of stones in a pile): ";
			cin >> takenum;
			
			cout << endl;
			
			if (takenum > max || takenum < 1)
			{
				cout << "Error. Please re-enter a VALID amount you would like to take from a pile." << endl;
				cout << endl;
			}	
		}
		while (takenum > max || takenum < 1); 
		//The loop will loop again if the number is greater than what is in a pile, or when the user types less than one.
		
		//The 'if' statements below control the amounts taken from each pile
		
		if (takeset == 'a')
		{
			seta = seta - takenum;
		}
		
		if (takeset == 'b')
		{
			setb = setb - takenum;
		}
		
		if (takeset == 'c')
		{
			setc = setc - takenum;
		}		
			
		total = seta + setb + setc; //This gives a total, so the loop 'for' loop can end the game.
			
		if (total == 0) //When the total is zero, then:
		{
			total = 1; //Give a warning to the 'for' loop to end the game
			count = count - 1; //This will make the player that takes the last 'stone' loose.
		}
	}
	
	//The 'if' statements detects the winner and the looser of the game
	
	if (count % 2 == 0) 
	{
		cout << "Player 1 wins!" << endl;
		cout << "Player 2 lose." << endl;
	}
	
	else
	{
		cout << "Player 1 lose." << endl;
		cout << "Player 2 wins!" << endl;
	}
	
	return 0;
}
