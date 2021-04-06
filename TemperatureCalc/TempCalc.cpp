#include"TempCalc.h"
#include<iostream>
using namespace std;

Temperature::Temperature()
{
	KelvinTemperature = 0;
}
double Temperature::getCelcius()
{
	return KelvinTemperature - 273.15;
}
double Temperature::getFahrenheit()
{
	return 9.0*getCelcius()/5.0 +32.0;
}
double Temperature::getKelvin()
{
	return KelvinTemperature;
}
void Temperature::setTempCelcius(double temp)
{
	KelvinTemperature = temp + 273.15;
}
void Temperature::setTempFahrenheit(double temp)
{
	KelvinTemperature = 273.15 + (5.0 * (temp - 32) / 9);
}
void Temperature::setTempKelvin(double temp)
{
	KelvinTemperature = temp;
}


