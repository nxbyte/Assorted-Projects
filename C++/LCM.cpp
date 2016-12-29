//============================================================================
// Name        : LCM.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare:
	
	int num1, num2, ans;
	int multi = 0;
	
	
	//Input and a loop for a negitive number

	do
	{
	cout << "Enter a positive number: ";
	cin >> num1;
	
	cout << "Enter another positive number: ";
	cin >> num2;
	
		if (num1 < 1 || num2 < 1) //This outputs a statement if any of the numbers are negitive:
		{
			cout << endl;
			cout << "The numbers you inputted are invaild numbers, please enter another set of POSITIVE numbers. " << endl;
		}
	}
	while (num1 < 1 || num2 < 1); //If the numbers are negitive, ask for the numbers again
	
	//Computation, finding the LCM of the two numbers:
	
		if (num1 < num2) //If the first number is less than the second number, run this block of code
		{
			do
			{
				multi = multi + 1;   //This will add 1 to the multiplier
				ans = num1 * multi; //This will find the products of the smaller number. It will multiply it together to get a value to be checked later
			}	
			while (ans % num2 != 0); //It will check the first number to see if it is divisiable by the greater orginal number, it will stop when it does not have a 0 as a remainder
						// If the number it is true, loop the computation again
		}
	
		else //Else, if the second number is greater than the first, then run this block of code
		{
			do
			{
				multi = multi + 1;  //This will add 1 to the multiplier
				ans = num2 * multi;//This will find the products of the smaller number. It will multiply it together to get a value to be checked later
			}
			while (ans % num1 != 0); //It will check the first number to see if it is divisiable by the greater orginal number, it will stop when it does not have a 0 as a remainder
						// If the number it is true, loop the computation again
		}
	
	//Output the answer
	
	cout << "The LCM is: " << ans << endl;
	
	return 0;
}
