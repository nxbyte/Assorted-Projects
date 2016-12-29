 //============================================================================
// Name        : Power2.cpp
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
	float total = 1;
	
	//Input
	
	cout << "Enter a Base: ";
	cin >> base;

	cout << "Enter an exponent: ";
	cin >> exp;
	
	//The 'if' statement below will work if the requirements are met:
	if ((((base < 0) && (exp > 0)) || (base > 0) && (exp > 0)))
		//1. If the base is a negitive and exponent is positive
		//2. If both numbers are postive
	{
		for (count = 1; count <= exp; count++)
			{
				total = total * base;
			}
		
		if (base < 0)
		{
			total = total * -1; //If base is negitive, then the answer will be negitive.
		}
	}

	else
		{
			for (count = -1; count >= exp; count--) 
				//Assigning count as -1, it will count the numbers down. 
				//Which will allow this statement to work when the exponent is negitive.
				{
					total = total / base;
				}
			
			if (base < 0) //If the base is negitive, then mutiply by -1
			{
				total = total * -1;
			}
		}
	
	//Output

	cout << "Your answer is: " << total << endl;
	
	return 0;
}
