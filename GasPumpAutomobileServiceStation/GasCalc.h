#pragma once
#ifndef GASCALC_H_
#define GASCALC_H
#include<iostream>
using namespace std;

class GasPump
{
	public:
		void behaviour(double liter, double capacity);
		void amountCharged(double disp, double liter, double capacity);
		void reset(double disp);
		void charge(double disp, double liter, double capacity);
		void amount(double lit, double capacity);
};























#endif






















