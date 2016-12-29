//============================================================================
// Name        : Average.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   :
// Description : Getting the average from five real numbers.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare
	
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float avg;
	
	//input 
	
	cout << "Please enter five real numbers, (put spaces between the numbers). Then press enter: ";
	cin >> num1 >> num2 >>num3 >> num4 >> num5; 
	
	avg = (num1+num2+num3+num4+num5) / 5; 
	
	//output
	
	cout << "Your average from your numbers is: "<<avg<<"."<<endl;
	
	
	return 0;
}
