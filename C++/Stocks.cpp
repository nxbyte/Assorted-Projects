//============================================================================
// Name        : Stock.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   :
// Description : 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//declare
	
	char stock_name [21];
	double open$, close$, gain_loss;
	int shares;
	
//input commands
	
	cout << "Enter the name of the stock: "; 
	cin.get(stock_name,21);
	cin.ignore(22,'\n');
	
	cout << "Enter the opening amount of the stock: ";
	cin >> open$;
	
	cout << "Enter the closing amount of the stock: ";
	cin >> close$;
	
	cout << "How many shares did you buy from: ";
	cin >> shares;
	
	gain_loss = (close$ - open$)*shares; //formula
	
	//Decimal Places for Money
	
	cout.setf(ios::showpoint);
	cout << fixed <<setprecision(2);
	
	//output
	
	cout << endl;
	
	cout << setw(20) << "Stock Name" << setw(15) <<"|" << "Opening" << setw(14) << "|" << "Closing" << setw(14) << "|" <<  "Shares" << setw(14) <<"|" << "Gain/Loss" << endl; 
	
	cout << setw(20) << stock_name << setw(16) << "$" <<open$ << setw(16) << "$" << close$ << setw(17) << shares << setw(18) << "$" << gain_loss << endl; 
	
	return 0;
}

