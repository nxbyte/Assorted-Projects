//============================================================================
// Name        : Cal2.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//declare

	int days, start, space;
	int count;

	//Input
	
	cout << "(KEY: 1=Sun, 2=Mon, 3=Tue, 4=Wed, 5=Thu, 6=Fri, and 7=Sat)" << endl;
	cout << "Enter which day the month starts: ";
	cin >> start;
	
	cout << endl;
	
	cout << "Enter the amount of days in the month: ";
	cin >> days;

	cout << endl;
	
	//Markings for days
	
	cout << " Sun | Mon | Tue | Wed | Thu | Fri | Sat |" << endl;
	
	//The loop and the output
	
	for(count = 2 - start; count <= days; count++)
	//The counter will start froma negitive, by subtracting 2 off of start.
	{
		if (count < 1) //If counter finds a negitive, then it will space instead of showing the number.
		{
			cout << setw(6) << "|";
		}
		
		else //Otherwise, if the number is greater then 0, show the number.
		{
			cout << setw(4) << count << " |";
		}
		
		space = 2 + start; //This regulates the time when it needs to create a new week.
		
		if (count % 7 == space)
		{
			cout << endl;
		}
	}	
	
	return 0;
}
