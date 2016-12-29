//============================================================================
// Name        : FIB.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare

	int seq, count;
	int ans = 1;
	int num = 1;
	int num1;
	
	//Input:
	
	cout << "Enter what number you would like in the Fibonacci Sequence: ";
	cin >> seq;

	//Computation:

	if (seq > 2)
{
	// Starting to count at 3, will make the code stop when counter reaches the inputted number
	for (count = 3; count <= seq; count++) 
	{
		num1 = num + ans; 
		num = ans; 
		ans = num1;
	}
}

	//If the user enters 2 or less for the fibonacci sequence, the answer will always be 1


	//Output:

	cout << "Your answer is: " << ans << endl;

	return 0;
}
