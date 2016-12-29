//============================================================================
// Name        : Fahrenheit and Celsius Conversion.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	float u, fa, ca; 
	char f_c;
	
	//input	
	
	cout << "Please enter a number to be converted: ";
	cin >> u;
	
	cout << "To convert " << u << " degrees, please enter 'f' for Fahrenheit, and 'c' for Celsius: ";
	cin >> f_c;
	
	cout << endl;
	
	//formula	
	
	fa = ((9.0/5.0)*u) + 32;
	ca = (u - 32) * (9.0/5.0);
	
	//output
	
	if (f_c == 'c') // Uses the input from the user to determine which to convert to. In this case, the user has to type 'c' to get Celsius. 
	{
		cout << u << " degrees Fahrenheit, is " << ca << " degrees Celsius." << endl;
	}
	
	else 
	{
		cout << u << " degrees Celsius, is " << fa << " degrees Fahrenheit.";
	}

	return 0;
}
