#pragma once
#ifndef MONEY_H
#define MONEY_H
#include<iostream>
using namespace std;

class Money
{
private:
	int dollars;
	int cents;
public:
	void setDollars(int dollars);
	int getDollars();
	void setCents(int cents);
	int getCents();

	double monetaryAmount();

};



#endif