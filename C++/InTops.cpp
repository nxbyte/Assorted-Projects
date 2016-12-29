//============================================================================
// Name        : InTops.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   :
// Description : Adding, Subtracting, Mutiplying, and Dividing two numbers.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare

	int num1;
	int num2;
 	int sum;
	int sub;
	int muti;
	int divi;
	
	//initalize 

	num1 = 10;
	num2 = 5;
	sum = num1 + num2;
	sub = num1 - num2;
	muti = num1 * num2;
	divi = num1 / num2;
	
	cout << "When you add "<<num1<<" and "<<num2<<", together you get "<<sum<<" as your answer."<< endl;
	cout << "When you subtract "<<num1<<" and "<<num2<<", together you get "<<sub<<" as your answer."<< endl;
	cout << "When you mutiply "<<num1<<" and "<<num2<<", together you get "<<muti<<" as your answer."<< endl;
	cout << "When you divide "<<num1<<" and "<<num2<<", together you get "<<divi<<" as your answer."<< endl;
	
	
	return 0;
}
