//============================================================================
// Name        : DOB.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int m, d, y, sum;
	
	//Input
	
	cout << "Enter the month of your birthday: ";
	cin >> m;
	
	cout << "Enter the day of your birthday: ";
	cin >> d;
	
	cout << "Enter the year of your birthday: ";
	cin >> y;
	
	//Formula
	
	//To get sum, you need to subtract the year by 1900, then dividing it by 4. 
	//Which is then added when the year is subtracted by 1900, lastly the day is added to the sum.

	sum = (((y - 1900) / 4) + (y - 1900)) + d;
	
	//Switches, some will have mutiple answers
	
	switch (m)
	
	{
		case 1:
		case 10:	
				m = 1;
				break;
			
		case 5:
				m = 2;
				break;
		
		case 8:
				m = 3;
				break;
		
		case 2:
		case 3:
		case 11:	
				m = 4;
				break;
			
		case 6:
				m = 5;
				break;
				
		case 9:
		case 12:
				m = 6;
				break;
				
		case 4:
		case 7:
				m = 0; 
				break;
	}
	
	//Adding the 'month number' to the current sum, then reassigning it
	
	sum = sum + m;
	
	// If the year is not 1900 and has a remainder of 4, and the months are Janurary or February
	
	if ((((y != 1900) && (y % 4 == 0))) && ((m == 1) || (m == 2)))
	
	//Then execute the statement below	
	{
		sum = sum - 1;
	}
	
	//If the statements above is not true, the excute the statement below
	
	else
	{
		sum = sum;
	}
	
	//If statements which tell which day it is:
	
	//If the sum divide by 7 has a remained of 0~6, then cout the specific day of the week
	
	if (sum % 7 == 1)
	{
		cout << "You were born on a Sunday!" << endl;
	}
	
	if (sum % 7 == 2)
		{
			cout << "You were born on a Monday!" << endl;
		}
	
	if (sum % 7 == 3)
		{
			cout << "You were born on a Tuesday!" << endl;
		}
	
	if (sum % 7 == 4)
		{
			cout << "You were born on a Wednesday!" << endl;
		}
	
	if (sum % 7 == 5)
		{
			cout << "You were born on a Thursday!" << endl;
		}
	
	if (sum % 7 == 6)
		{
			cout << "You were born on a Friday!" << endl;
		}
	
	if (sum % 7 == 0)
		{
			cout << "You were born on a Saturday!" << endl;
		}

	return 0;
}
