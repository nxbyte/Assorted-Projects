//============================================================================
// Name        : Average2.cpp
// Author      : Warrem Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//declare
	
	int num, count, count2 = 0;
	float ans = 0;
	
	//Part of input

	cout << "How many numbers are you going to input?: ";
	cin >> count;
	
	//Looping for inputting more than one number
	
	do
	{
		//Input the grades
		cout << "Enter a number: ";
		cin >> num;
	
		ans = num + ans; //Will add up the numbers
		count2 = count2 + 1; //Will caculate the amount of times this loop will run

	}
	while (count > count2); //It will loop until count is greater than count2

	ans = ans / count; //Dividing the total by number inputted
	
	//Percision of decimal place to the tenths place

	cout.setf(ios::showpoint);
	cout << fixed << setprecision(1);

	//Part of output, (the number)

	cout << "Grade: " << ans << "%";
	
	//Part of outputing, (letter grade)
	
	if (ans >= 97)
	{
		cout << " (A+)";
	}
	if ((ans >= 93) && (ans <= 96.9))
	{
		cout << " (A)";
	}
	if ((ans >= 90) && (ans <= 92.9))
	{
		cout << " (A-)";	
	}
	if ((ans >= 87) && (ans <= 89.9))
	{
		cout << " (B+)";		
	}
	if ((ans >= 83) && (ans <= 86.9))
	{
		cout << " (B)";		
	}
	if ((ans >= 80) && (ans <= 82.9))
	{
		cout << " (B-)";
	}
	if ((ans >= 77) && (ans <= 79.9))
	{
		cout << " (C+)";	
	}
	if ((ans >= 73) && (ans <= 76.9))
	{
		cout << " (C)";	
	}
	if ((ans >= 70) && (ans <= 72.9))
	{
		cout << " (C-)";		
	}
	if ((ans >= 65) && (ans <= 69.9))
	{
		cout << " (D)";
	}
	if (ans <= 64)
	{
		cout << " (F)";
	}
	
	return 0;
}
