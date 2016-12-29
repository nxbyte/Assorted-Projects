//============================================================================
// Name        : Planet.cpp
// Author      : Warren Seto
// Version     : Period 12
// Copyright   : 
// Description : 
//============================================================================

#include <iostream>

using namespace std;

int main() {

	//declare
	
	float u, c; //User inputted Weight (u) and converted weight (c)
	int pnum; //Symbolizes the planets in number order
	
	//Input
	
	cout << "Please enter your desired weight: ";
	cin >> u;
	
	cout << "Please enter a planet you will like to convert into, type: ";
	cin >> pnum;
	
	cout << endl;
	
	//Listing the values for the planets:
	
	cout << "1 for Mercury" << endl;
	cout << "2 for Venus" << endl;
	cout << "3 for Earth" << endl;
	cout << "4 for Mars" << endl;
	cout << "5 for Jupiter" << endl;
	cout << "6 for Saturn" << endl;
	cout << "7 for Uranus" << endl;
	cout << "8 for Neptune" << endl;
	cout << "9 for Pluto" << endl;
	
	cout << endl;
	
	//Switches
	
	switch (pnum) //Planet Number (order)
	
	{
		case 1:
					c = u*0.38; 
					cout << "Your weight on Mercury is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Even though Mercury is the hottest planet, since the planet is nearest to the Sun, it has polar ice caps." << endl;
					cout << "Fun Fact (2)- It takes less than 88 Earth days for Mercury to orbit around the sun." << endl;
					break;
			
		case 2:
					c = u*0.78;
					cout << "Your weight on Venus is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Venus on the other hand is the hottest of the 9 planets." << endl;
					cout << "Fun Fact (2)- It takes 243 days for Venus to make a rotation." << endl;
					break;
					
		case 3:
					c = u*1;
					cout << "Your weight on Earth is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Earth is the only Known planet which can support life." << endl;
					cout << "Fun Fact (2)- The earth rotates on its axis more slowly in March than in September." << endl;
					break;
					
		case 4:
					c = u*0.39;
					cout << "Your weight on Mars is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Mars is subject to testing, after signs of water was found." << endl;
					cout << "Fun Fact (2) The Martian “day” is about half a hour longer than Earth." << endl;
					break;
					
		case 5:
					c = u*2.63;
					cout << "Your weight on Jupiter is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Jupiter is the fastest rotating planet, it takes 1 full 10 hours to make a complete spin."<< endl;
					cout << "Fun Fact (2)- You can fit 100 Earths into Jupiter's great red spot." << endl;
					break;
					
		case 6:
					c = u*1.17;
					cout << "Your weight on Saturn is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Saturn's rings are not real solid rings, but instead mutiple rocks." << endl;
					cout << "Fun Fact (2)- The atmosphere of Saturn comprises mostly of Hydrogen and Helium." << endl;
					break;
					
		case 7:
					c = u*1.05;
					cout << "Your weight on Uranus is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Uranus is the coldest place in the Solar system, of all the 9 other planet." << endl;
					cout << "Fun Fact (2)- Neptune is a sea blue color due to the methane gas in its atmosphere." << endl;
					break;
					
		case 8:
					c = u*1.23;
					cout << "Your weight on Neptune is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- Neptune has the fastest winds of all the other planets." << endl;
					cout << "Fun Facts (2)- Uranus has 27 known satellites." << endl;
					break;
					
		case 9:
					c = u*0.05;
					cout << "Your weight on Pluto is " << c << " pounds." << endl;
					cout << "Fun Fact (1)- It is known as of 2009, as a dwarf planet." << endl;
					cout << "Fun Fact (2)- Pluto was discovered in 1930 by Clyde Tombaugh." << endl;
					break;
	}
	return 0;
}
