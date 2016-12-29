//============================================================================
// Name        : Triangle.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//declare
	
	int a,b,c;
	
	//Input
	
	cout << "Please enter the first side of your triangle, then press ENTER: ";
	cin >> a;
	
	cout << "Please enter the second side of your triangle, then press ENTER: ";
	cin >> b;
	
	cout << "Please enter the third side of your triangle, then press ENTER: ";
	cin >> c;
	
	cout << endl; //Spacing
	
	//Decisions
	
	if (a+b>c && b+c>a && a+c>b) //Finding if the sides make a triangle

	//Which Triangle...
		
	{	
		
		if ((a == b)&& (b==c)&&(c==a)) // This checks if the sides make an Equilateral Triangle.
		{
		cout << "These sides make an Equilateral Triangle." << endl;
		}						
	
		else 
		{	
			if ((a != b)&&(b != c)&&(c != a)) // This checks if the sides make an Scalean Triangle.
			{
				if (((a*a + b*b) == c*c) || ((b*b + c*c) == a*a) || ((a*a + c*c) == b*b))// This checks if the sides make a right Scalean Triangle.
				
					
				{
					cout << "These sides make a right Scalean Triangle." << endl;
				}
				
				else 
				{
				cout << "These sides make a Scalean Triangle."<< endl; 
				}
			}
			else 
			{
				if (((a*a + b*b) == c*c) || ((b*b + c*c) == a*a) || ((a*a + c*c) == b*b)) // This checks if the sides make a right Isosceles Triangle.
				 
				
				{
					cout << "These sides make a Isosceles Triangle."<< endl;
				}
				
				else
				{
				cout << "These sides make an Isosceles Triangle." << endl;
				}		
			}
		}
	}
	
	// If it does not make a triangle, output this.
	
	else 
		{
		cout << "These sides do NOT make a triangle. If this is an error, please re-launch the program and try again." << endl;
		}  
	
	return 0;
}
