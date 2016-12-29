//============================================================================
// Name        : Perfect.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int count, count2, ans, num, chk;
	
	//Input
	
	cout << "Enter a positive number: ";
	cin >> num;
	
	cout << "Would you like to check if " << num << " is perfect (Enter 0). Or find perfect numbers below " << num << " (Enter 1)?: ";
	cin >> chk;
	
	//Output statements / loops
	
	if (chk == 1)
	{
		cout << "Perfect number: ";
	}
	
	for (count = 1; count <= num; count++)
	//The loop above controls the overall functions of generating the perfect numbers
	{
		ans = 0; //ans will reset to 0, this will prevent the ans to become to high
		
		for (count2 = 1; count2 < count; count2++) //This will generate another number to add onto the total
		{
			if (count % count2 == 0) //This will check if the number generated is divisable
			{
				ans = ans + count2; // If it is, then add the generating number to the total.
			}
		}
		
		if (chk == 1)
		{
			if (count == ans) 
			//This will ouput the perfect numbers below, if the ans and the inputed number are the same
			{	
				cout << count2 << " ";
			}
		}
	}
	
	if (chk == 0) //If the user inputs '0', then the answer will only output if the number is perfect or not
	{
		if (num == ans)
		{
			cout << num << " is a perfect number." << endl;
		}
		if (num > ans)
		{
			cout << num << " is a deficient number." << endl;
		}
		if (num < ans)
		{
			cout << num << " is a abundant number." << endl;
		}
	}
	
	return 0;
}
