#pragma once
#ifndef TEMPCALC_H_
#define TEMPCALC_H
#include<iostream>
using namespace std;

class Temperature
{
private:
	double KelvinTemperature;

public:
	Temperature();
	double getCelcius();
	double getFahrenheit();
	double getKelvin();
	

	void setTempCelcius(double temp);
	void setTempFahrenheit(double temp);
	void setTempKelvin(double temp);
	
};
























#endif





















