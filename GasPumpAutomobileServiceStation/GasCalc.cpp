#include"GasCalc.h"
#include<iostream>
using namespace std;

void GasPump::behaviour(double liter, double capacity)
{
	cout << "Charge per liter is : " << liter << endl;
	cout << "Capacity of the GasPump tank is : " << capacity << endl;
	cout << endl;
}
void GasPump::amountCharged(double disp, double liter, double capacity)
{
	if (capacity >= disp)
	{
		cout << "Amount of Gas Dispenced : " << disp << endl;
		cout << "Amount charged for the amount dispenced : " << disp * liter << endl;
		cout << "Charge per liter : " << liter << endl;
		cout << endl;
	}
	else
	{
		cout << "Capacity of the GasPump tank is low:" << capacity << endl;
		cout << endl;
	}
}
void GasPump::reset(double disp)
{
	disp = 0;
	cout << "Reset : " << disp << endl;
	cout << endl;
}
void GasPump::charge(double disp, double liter, double capacity)
{
	if (capacity >= disp)
	{
		cout << "Amount charged for the amount dispenced " << disp * liter << endl;
		cout << endl;
	}
	else
	{
		cout << "Capacity of the GasPump tank is low :" << capacity << endl;
		cout << endl;
	}
}
void GasPump::amount(double lit, double capacity)
{
	double liter = 70;
	double total = (double)(1000 * lit / liter) / 1000;
	if (total > capacity)
	{
		cout << "Capacity of the GasPump tank is low : " << capacity << endl;
		cout << "GasPump Overload" << endl;
		cout << endl;
	}
	else
	{
		cout << "Amount of gas for " << lit << " is :" << total << "lt" << endl;
		cout << endl;
	}
}












































