//============================================================================
// Name        : PrimeF.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
		//declare
		
		int num, count;
		
		//Input
		
		cout << "Enter a positive number, (greater then 1): ";
		cin >> num;
		
		cout << endl; //Spaces
		
		cout << "The prime factorization of " << num << ": "; //Part of the Output statement
		
		//"For" loop for finding the prime factors
	
		for (count = 2; count <= num; count++) //This will count from 2 to the inputted number
			{			
				while (num % count == 0) //It will check if the inputted number and count is divisible, then loop the statement if is true
				{
					num = num / count; //This will divide the number by count
						
					if (num / count >= 1) //This will add the time symbol, when the expression is greater to or equal to one
					{
						cout << count << " x "; //Part of the output statement
					}
						
					else //If, (num / count < 0) is true, then show the last number in the statement
					{
						cout << count; //Part of the output statement
					}
				}
			}
		
	return 0;
}
