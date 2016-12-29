//============================================================================
// Name        : Circumference.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : Finding a circumference from a radius from a circle
//============================================================================

#include <iostream>
using namespace std;

int main() {

//declare-(Setting the value of Pi)

	const float Pi= 3.14159;
	float radius,circumference;

	//intilize- Defining the radius and the formula)
	
	radius=10;	

	circumference= 2*radius*Pi; 

	cout << "The circumference of your circle, from the radius of"<<radius<<" is "<<circumference<<"."<< endl; 
	
	return 0;
}
