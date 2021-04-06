// GasPumpAutomobileServiceStation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"GasCalc.h"
using namespace std;

int main()
{
	GasPump p;
	double liter = 100;

	for (double capacity = 80; capacity >= 0;)
	{
		p.behaviour(liter, capacity);
		cout << " Enter amount of gas dispenced in liters : ";
		double disp;
		cin >> disp;
		p.amountCharged(disp, liter, capacity);
		capacity = capacity - disp;
		p.reset(disp);
		cout << "Enter amount of gas dispenced in liters : ";
		double dispp;
		cin >> dispp,
			p.amountCharged(dispp, liter, capacity);
		capacity = capacity - disp;
		p.reset(disp);




		while (capacity >= 0)
		{
			cout << "Enter amount in :";
			double lit;
			cin >> lit;
			p.amount(lit, capacity);
			double total = (double)(1000 * lit / liter) / 1000;
			capacity = capacity - total;
		}



	}

	return 0;











}


