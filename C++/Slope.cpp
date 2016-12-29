//============================================================================
// Name        : Slope.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//declare
	
	float y2, y1, x2, x1;
	float y, x;
	
	//Input
	
	cout << "Please input a 'y' Coordinate: ";
	cin >> y2;
	cout << "Please input a second 'y' Coordinate: ";
	cin >> y1;
	cout << "Please input a 'x' Coordinate: ";
	cin >> x2;
	cout << "Please input a second 'x' Coordinate: ";
	cin >> x1;
	
	//Formula
	
	y = y2 - y1;
	x = x2 - x1;
	
	//Check if it is undefined
	
	cout << endl;
	
	if (x2 == x1)
	{
		cout << "Your slope is undefined.";
	}
	else 
		{
		cout << "Your slope is " << y << "/" << x << ".";
		}
	
	return 0;
}