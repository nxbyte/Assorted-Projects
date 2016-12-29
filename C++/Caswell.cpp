//============================================================================
// Name        : Caswell.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Symbolic Meanings
	
	//ad = Adult Non-Desserts
	//dess = Dessert Cost
	//rm = Room Fee
	//taxa = Tax and Tip Sum 
	//afd = Adult Food
	//all = Sum of Child and Adult meals
	//cd = Children Non-Dessert
	//ta = Total Adult Food Cost
	//tc = Total Children Food Cost
	//td = Total Dessert Cost
	//t = Total without deposit
	//ptt = Tax and tip Rate (%)
	//dpt = Deposit
	//bal = Balance
	
	//declaring
	
	int adult, child;
	float ad, dess, rm, cd, ta, taxa, tc, td, t, ptt, all, dpt, bal;
	
	//inputing
	
	cout << "For every number you input, press [ENTER] when done with what each line is asking." << endl;
	
	cout << endl;
	
	cout << "How many adults are attending: ";
	cin >> adult;
	
	cout << "How many children are attending: ";
	cin >> child;
	
	cout << "What is the cost of an adult without dessert: ";
	cin >> ad;
	
	cout << "What is the cost per dessert: ";
	cin >> dess;
	
	cout << "What is the room fee: ";
	cin >> rm;
	
	cout << "What is the tip and tax rate? (With the decimal): ";
	cin >> ptt;
	
	cout << "How much did you deposit: ";
	cin >> dpt;
	
	//formulas
	
	cd = .6 * ad; // Finding Children Non-Dessert Cost
	ta = adult * ad; // Finding Adult Total Cost
	tc = cd * child; // Finding Children Total Cost
	td = dess * (adult + child); // Total cost for dessert (Isolated)
	all = ta + tc + td; //Sum of total adult and child meals (without dessert)
	taxa = all * ptt; // Tax added to amount
	t = rm + taxa + all; //Total without tax and tip
	bal = t - dpt; // Balance after deposit
	
	//Decimal Places for Money
		
		cout.setf(ios::showpoint);
		cout << fixed << setprecision(2);
	
	//output
	
	cout << endl;

	cout << setw(15) << "Caswell Catering and Covention Service" << endl;
	
	cout << setw(20) << "Final Bill" << endl;
	
	cout << endl;

	cout << setw(31) << "Number of adults:" << setw(12) << adult << endl;
	
	cout << setw(31) << "Number of children:" << setw(12)<< child << endl;
	
	cout << "Cost per adult without dessert:" << setw(5) << "$ " << setw(8) << ad << endl;
	
	cout << "Cost per child without dessert:" << setw(5) << "$ " << setw(8) << cd << endl;
	
	cout << setw(31) << "Cost per dessert:" << setw(5) << "$ " << setw(8) << dess << endl; 
	
	cout << setw(31) << "Room Fee:" << setw(5) << "$ " << setw(8) << rm << endl;
	
	cout << setw(31) << "Tip and Tax rate:" << setw(5) << "% " << setw(8) << ptt << endl; 
	
	cout << endl;
	
	cout << setw(31) << "Total cost for adult meals:" << setw(5) << "$ " << setw(8) << ta << endl;
	
	cout << setw(31) << "Total cost for child meals:" << setw(5) << "$ " << setw(8) << tc << endl;
	
	cout << setw(31) << "Total cost for dessert:" << setw(5) << "$ " << setw(8) << td << endl; 
	
	cout << setw(31) << "Total food cost:" << setw(5) << "$ " << setw(8) << all << setw(8) << endl;
	
	cout << setw(31) << "Plus tip and tax:" << setw(5) << "$ " << setw(8) << taxa << endl;
	
	cout << setw(31) << "Plus room fee:" << setw(5) << "$ " << setw(8) << rm << endl;
	
	cout << setw(36) << "$ " << setw(8) << t << endl;
	
	cout << setw(44) << "----------" << endl;
	
	cout << setw(36) << "$ " << setw(8) << t << endl;
	
	cout << endl;
	
	cout << setw(31) << "Less deposit:" << setw(5) << "$ " << setw(8) << dpt << endl;
	
	cout << setw(44) << "----------" << endl;
	
	cout << setw(31) << "Balance Due:" << setw(5) << "$ " << setw(8) << bal << endl;

	return 0;
}