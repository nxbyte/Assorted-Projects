//============================================================================
// Name        : Scores.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int count = 0, set; 
	float enter, num[10], ans = 0, small, big; 
	
	//A do/while to control which determine the user input
	
	do
	{
		cout << "Enter a score: ";
		cin >> enter;
		
		if (enter >= 0) //If the inputted number is not a negitive, then:
		{
			num[count] = enter; //Assign to the array
			count = count + 1; //Keep a tally so the next letter will assign into the next array space
		}
	}
	while (enter >= 0 && count < 10); //The loop will stop when the user types in ten numbers, or if the user types a negitive number
		
	set = count; //This will reassign to another value so count can be reused in later loops
	
	cout << endl;
	cout << "Order: ";
	
	small = num[0]; //This will set the first array so the below can check the biggest number later on
	big = num[0]; //This will set the first array so the below can check the smallest number later on
	
	for (count = 0; count < set; count++)
	{
		cout << num[count] << " "; //Part of output
		ans = ans + num[count]; //This adds the numbers
		
		if (small > num[count]) //If a number in the array is smaller than the assigned number, then:
		{
			small = num[count]; //Reassign to the 'small' variable
		}
		
		if (big < num[count]) //If a number in the array is bigger than the assigned number, then: 
		{
			big = num[count]; //Reassign to the 'big' variable
		}
	}
	
	cout << endl;
	cout << "Big: " << big << endl;
	cout << "Small: " << small << endl;
	
	ans = ans / set;
	cout << "Average: " << ans << endl;
	
	return 0;
}
