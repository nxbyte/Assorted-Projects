//============================================================================
// Name        : Power.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int base, exp;
	int count; 
	int total = 1;
	
	//Input
	
	cout << "Enter a Base: ";
	cin >> base;

	cout << "Enter an exponent: ";
	cin >> exp;
	
	//Loop Statement
	
	for (count = 1; count <= exp; count++)
	{
		total = total * base;
	}
	
	//Output

	cout << "Your answer is: " << total << endl;
	
	return 0;
}
