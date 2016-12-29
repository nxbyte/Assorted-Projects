//============================================================================
// Name        : Caswell3.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

		//Declaring

		int adult, child;
		char ds; 
		char room; 
		char day; 
		float adult$, child$, taxa, sum, depo, t, bal, sur, meal$, cmeal$, fee, surp, sur$;
		float ptt = .18; 
		float bal1, bal2, bal3, bal4, bal5;
		char y_n;
		
		//Inputing
		
	do
	{	
		cout << "For everything you input, press [ENTER] when you finish." << endl;
		
		cout << endl;
		
		cout << "How many adults are attending: ";
		cin >> adult;
		
		cout << "How many children are attending: ";
		cin >> child;
		
		cout << endl;
		
		cout << "Do you want the Deluxe meal or the Standard meal, (with Dessert)?" << endl;
		cout << "Type 'd' for dexluxe meal, and 's' for standard meal: ";
		cin >> ds;
		
		//For the Deluxe and/or the Standard meal
		
		{	
		if (ds == 'd') 
			{
			meal$ = 15.8;
			}
		if (ds == 's')
			{
			meal$ = 11.75;
			}
		}

		//Continue the questions
		
		cout << endl;
		
		cout << "Select the room you will use below:" << endl; 

		cout << "Type: 'a' for Room A." << endl;
		cout << "Type: 'b' for room B." << endl;
		cout << "Type: 'c' for room C." << endl;
		cout << "Type: 'd' for room D." << endl;
		cout << "Type: 'e' for room E." << endl;
		
		cout << "Input the room you will like to use: ";
		cin >> room;
		
		//Swtiches for the rooms (a~e)
		
		switch (room)

		{
			case 'a':
					fee = 55;
					break;
			
			case 'b':
					fee = 75;  
					break;
					
			case 'c':
					fee = 85; 
					break;
					
			case 'd':
					fee = 100; 
					break;
					
			case 'e':
					fee = 130; 
					break;
			
		}
		
		cout << endl;
		
		cout << "How much did you deposit: ";
		cin >> depo;
		
		cout << "Is this going to be on a weekday or weekend? Type 0 for a Weekday, and 1 for a Weekend: ";
		cin >> day;
		
		//For Monday~Thursday and Friday through Sunday
			
			{	
			if (day == '0')
				{
				sur = 0;
				}
			
			if (day == '1')
				{
				sur = 7;
				}
			}
		
		//formulas
		
		adult$ = adult * meal$;
		cmeal$ = meal$	* .6;
		child$ = child * cmeal$;
		sum = child$ + adult$; 
		taxa = ptt * sum;
		t = (taxa + sum + fee);
		surp = (t * (sur / 100));
		sur$ = t + surp;
		bal = sur$ - depo;
		
		//Decimal Places for Money
			
			cout.setf(ios::showpoint);
			cout << fixed << setprecision(2);
		
		//The Entire Output (Reciept)
		
		cout << endl;

		cout << setw(15) << "Caswell Catering and Covention Service" << endl;
		
		cout << setw(20) << "Final Bill" << endl;
		
		cout << endl;

		cout << setw(31) << "Number of adults:" << setw(11) << adult << endl;
		
		cout << setw(31) << "Number of children:" << setw(11)<< child << endl;
		
		cout << setw(31) << "Cost per adult:" << setw(5) << "$ " << setw(8) << meal$ << endl;
		
		cout << setw(31) << "Cost per child:" << setw(5) << "$ " << setw(8) << cmeal$ << endl;
		
		cout << setw(31) << "Room Fee:" << setw(5) << "$ " << setw(8) << fee << endl;
		
		cout << setw(31) << "Tip and Tax rate:" << setw(5) << "% " << setw(8) << ptt << endl; 
		
		cout << endl;
		
		cout << setw(31) << "Total cost for adult meals:" << setw(5) << "$ " << setw(8) << adult$ << endl;
		
		cout << setw(31) << "Total cost for child meals:" << setw(5) << "$ " << setw(8) << child$ << endl;
		
		cout << setw(31) << "Total food cost:" << setw(5) << "$ " << setw(8) << sum << setw(8) << endl;
		
		cout << setw(31) << "Plus tip and tax:" << setw(5) << "$ " << setw(8) << taxa << endl;
		
		cout << setw(31) << "Plus room fee:" << setw(5) << "$ " << setw(8) << fee << endl;
		
		cout << setw(44) << "----------" << endl;
		
		cout << setw(36) << "$ " << setw(8) << t << endl;
		
		cout << setw(31) << "Weekend Surcharge:" << setw(5) << "$ " << setw(8) << surp << endl;
		
		cout << setw(44) << "----------" << endl;
		
		cout << setw(36) << "$ " << setw(8) << sur$ << endl;
		
		cout << endl;
		
		cout << setw(31) << "Less deposit:" << setw(5) << "$ " << setw(8) << depo << endl;
		
		cout << setw(44) << "----------" << endl;
		
		cout << setw(31) << "Balance Due:" << setw(5) << "$ " << setw(8) << bal << endl;

		//Discounts for the Subtotal
			
			cout << endl;
			
			if (bal < 100)
				{
				bal1 = (sur$ * 0.995) - depo; //Formula 
				cout << "If you pay within 10 days, then you will only pay $" << bal1 << " for a 0.5% Discount." << endl;
				}
			
			if ((bal >= 100) && (bal < 200))
				{
				bal2 = (sur$ * 0.985) - depo; //Formula
				cout << "If you pay within 10 days, then you will only pay $" << bal2 << " for a 1.5% Discount." << endl;
				}
			
			if ((bal >= 200) && (bal < 400))
				{
				bal3 = (sur$ * 0.97) - depo; //Formula
				cout << "If you pay within 10 days, then you will only pay $" << bal3 << " for a 3.0% Discount." << endl;
				}
			
			if ((bal >= 400) && (bal < 800))
				{
				bal4 = (sur$ * 0.96) - depo; //Formula
				cout << "If you pay within 10 days, then you will only pay $" << bal4 << " for a 4.0% Discount." << endl;
				}
			
			if (bal >= 800)
				{
				bal5 = (sur$ * 0.95) - depo; //Formula
				cout << "If you pay within 10 days, then you will only pay $" << bal5 << " for a 5.0% Discount." << endl;
				}
	
			cout << endl;
			
			//Asking for Loop
			cout << "Do you want another customer y=yes, n=no? : ";
			cin >> y_n;	
			
			cout << endl;	
		}
		while (y_n == 'y');
	
		// If they type 'n'(No) or anything other than 'y'(Yes), then it will end with the statementt below.
		{
			cout << "Good Bye." << endl;
		}
		while (y_n == 'n');

	return 0;
}