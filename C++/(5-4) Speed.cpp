//============================================================================
// Name        : (5-4)Speed.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   :
// Description : Create formula program
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare

	float mile;
	float ft;
	float hour;
	float sec;
	float ans;
	
	//input 

	ft = 5280;
	sec = 360;
	
	cout << "Please enter how many miles, then Press ENTER: ";
	cin>>mile;
	
	cout << "Please enter how much time (hours), then press ENTER: ";
	cin>>hour;
	
	//formula
	
	ans = (5280 * mile) / sec; 
	
	//output

	cout << "For " <<mile<< " mile(s), and " <<hour<< " hour(s). You get " <<ans<< " feet per second. ";
	
	return 0;
}