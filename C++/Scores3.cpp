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
	
	float num[10], enter, avg = 0, middle;
	int count = 0, set, count2, control = 1;
	
	//Do/while to control the input of numbers
	
	do
	{
		cout << "Enter a score: ";
		cin >> enter;
		
		if (enter >= 0) //If the input number is greater than 0, then:
		{
			num[count] = enter; //Assigns the number to the array space
			avg = avg + num[count]; //Adds up the numbers to find the total average
			count = count + 1;
		}
	}
	while (enter >= 0 && count < 10); //The loop stops when the user types in 10 numbers or enter a negative number
	
	set = count; //Reassigns to another variable, 'count' will be reused later on
	avg = avg / set;
	
	cout << endl;
	cout << "Scores, from greatest to smallest: ";
	
	//Loop controls the bubble sort
	
	for (count = 0; control; count++) //This loop will stop when 'control becomes false'
	{
		control = 0; //This will set 'control' to 0, just in case the if statement in the inner loop does not run
		
		for (count2 = 0; count2 < set - 1; count2++) //The loop sorts the numbers from greatest to least order
		{
			if (num[count2 + 1] > num[count2]) //If one array number is greater than the other, then:
			{
				enter = num[count2]; //Put the lesser number into a temporary place to reassign for later
				num[count2] = num[count2 + 1]; //The greater number takes the lesser number's place
				num[count2 + 1] = enter; //Put the temporary number back one array space
				control = 1; //This tells will make the loop run again
			}
			
			//If the 'if' statement above does not run, the program will stop because control will become 0
		}
	}
	
	//Output:
	
	for (count = 0; count < set; count++)
	{
		cout << num[count] << " ";
	}

	cout << endl;
	
	cout << "Smallest number: " << num[set - 1] << endl;
	
	cout << "Biggest number: " << num[0] << endl;
	
	cout << "Average: " << avg << endl;
	
	//The swtich statement below finds the median:
	
		switch (set)
		{
		//If the user inputs:
		//An odd number, then directly reassign the inputted number into 'middle'
		//An even number, then add two of the numbers and divide by 2
		
			case 1:
							middle = num[0];
							break;
			case 2:				
							middle = ((num[0] + num[1]) / 2);
							break;
			case 3:
							middle = num[1];
							break;
			case 4:		
							middle = ((num[1] + num[2]) / 2);
				 			break;
			case 5:
							middle = num[2];
							break;
			case 6:
							middle = ((num[2] + num[3]) / 2);
							break;
			case 7:
							middle = num[3];
				 			break;
			case 8:
							middle = ((num[3] + num[4]) / 2);
							break;
			case 9:
							middle = num[4];
							break;
			case 10:			
							middle = ((num[4] + num[5]) / 2);
							break;
		}
		
		cout << "The Middle Number: " << middle << endl;	
	
	return 0;
}
