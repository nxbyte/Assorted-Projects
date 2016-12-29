//============================================================================
// Name        : Euclid.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare

	int num1, num2, num3;
	
	//Input and negative loop

	do 
	{
	cout << "Enter a positive number: ";
	cin >> num1;
	
	cout << "Enter another positive number: ";
	cin >> num2;
	
		if (num1 < 1 || num2 < 1) //This will show when any of the numbers are negative
		{
			cout << endl;
			cout << "Error. Please enter another set of POSITIVE numbers:" << endl;
		}
	
	}
	while (num1 < 1 || num2 < 1); //This will repeat if any of the two numbers are negative
	
	if (num1 < num2) 
	{
		num3 = num1; //This will set the lowest number automatically if the while statement below does not meet requirements
		
		while (num2 % num1 != 0) //This will run until the two numbers gets a remainder
		{
			num3 = num2 % num1; //This will find the remainder out of the two numbers
			num2 = num1; //This will reassign the lowest of the two numbers, and make it the greater number
			num1 = num3; //This will reassign the remainder found in the first statement and make it the lowest number
		}
	}
	
	else //(num1 > num2)
	{
		num3 = num2; //This will set the lowest number automatically if the while statement below does not meet requirements
		
		while (num1 % num2 != 0) //This will run until the two numbers gets a remainder
		{
			num3 = num1 % num2; //This will find the remainder out of the two numbers
			num1 = num2; //This will reassign the lowest of the two numbers, and make it the greater number
			num2 = num3; //This will reassign the remainder found in the first statement and make it the lowest number
		}
	}
	
	//Answer Output

	cout << "The GCD is: " << num3;
	
	return 0;
}
