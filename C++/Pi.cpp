//============================================================================
// Name        : Pi.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare
	
	long double pi = 0, count2 = 1;
	int count;

	//Loop and part of Output

	for (count = 1; count <= 200; count++)
	{
		if (count % 2 == 0) //If count is divisable by 2...
		{
			pi = pi - (1/count2);
		}
		
		else
		{
			pi = pi + (1/count2);
		}
		
		count2 = count2 + 2; //Finding the odd number
	}
	
	//Mutiply by 4

	pi = pi * 4;
	
	//Part of Output
	
	cout << pi;
	
	return 0;
}
