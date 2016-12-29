//============================================================================
// Name        : Calander.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int m;
	char y_n;
	
	//input
	
	cout << "What month would you like to use? (Example, for April, type in '4'): ";
	cin >> m;
	
	//For Leap years
	
		if (m==2) 
		{
		cout << "Is this Feburary part of a leap year? (Type Y for Yes) or ( N for No)";
		cin >> y_n;
		}
	
	if (y_n =='y') 
		{
		cout << "Your month has 29 days";
		}
	
	if (y_n =='n') 
		{
		cout << "Your month has 28 days";
		}
	
	//Decisions for other months
	
	cout << endl;
	
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) 
	{
		cout << "Your month has 31 days in total." << endl;
	}
	
	if (m==4 || m==6 || m==9 || m==11) 
		{
		cout << "Your month has 30 days." << endl;
		}
	
	return 0;
}

