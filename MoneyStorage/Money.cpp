#pragma once
#include"Money.h"
#include<iostream>
using namespace std;

void Money::setDollars(int d)
{
	dollars = d;
}

void Money::setCents(int c)
{
	cents = c;
}

int Money::getDollars()
{
	return dollars;
}

int Money::getCents()
{
	return cents;
}

double Money::monetaryAmount()
{
	double c = (double)cents / 100; //casting
	return dollars + c;
}

















