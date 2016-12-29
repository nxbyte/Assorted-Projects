//============================================================================
// Name        : Array.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int count;
	float enter = 0;
	float num[10];
	
	for (count = 0; count < 10; count++)
	//Loops to control adding the numbers being inputted
	{
		if (count <= 10)
		{
			cout << "Enter a grade: "; // Input Grades
			cin >> num[count];
				
			enter = enter + num[count]; //This will reassign the sum so it can keep a running average total
		}
	}	
	
			//Output Grades
		
			cout << "Inputed Grades: ";
			
			for (count = 0; count < 10; count++)
			{	
				//This will control if the output will have either a comma or just end with a % at the end
				if (count == 9)
				{
					cout << num[count] << "%";
				}
				
				else
				{
					cout << num[count] << "%, ";
				}
			}
		
	cout << endl;
	enter = enter / 10; //Finding the average
	
	//Output the average
	
	cout << "Average grades is: " << enter << "%" << endl;
	
	return 0;
}
