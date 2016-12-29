//============================================================================
// Name        : IsPrime.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int num, count, ans;
	
	//Input
	
	cout << "Enter a positive number: ";
	cin >> num;
	
	//For loop for computation
	
	for (count = 2; (count < num && ans != 0); count++) 
		//The boolean will keep running until any of the below requirements are not met:
		//1. Stops before it reaches the inputed number.
		//2. When the remainder reaches 0.
	{
		ans = num % count; //This will check if the number has a remainder or not.
	}
		
	//If/Else statements for output
	
	if (ans != 0)
	{
		cout << "The number " << num << ", is a prime number." << endl;
	}
	
	else //(ans == 0)
	{
		cout << "The number " << num << ", is a not prime number." << endl;
	}
		
	return 0;
}
