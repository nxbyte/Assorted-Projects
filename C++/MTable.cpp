//============================================================================
// Name        : MTable.cpp
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

	int count1, count2;
	
	//(Computation): For every outer revolution, the inner loop will go 12 times

	for (count1 = 1; count1 <= 12; count1++) //(Outer loop)
	{
		for (count2 = 1; count2 <= 12; count2++) // (Inner loop)
		{
			
			//The outer loop times the inner loop creates the number

			cout << setw(4) << (count2 * count1) << setw(4) << "|";
			
		}
		cout << endl; //This allows another line to be made once the inner loop does a revolution
	}

	return 0;
}
