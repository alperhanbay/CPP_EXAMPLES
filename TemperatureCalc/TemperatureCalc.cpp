// TemperatureCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"TempCalc.h"
using namespace std;
int main()
{
    double Celcius;
    double Fahrenheit;
    double Kelvin;
    Temperature t;
    char scale;

    cout << " Choose Temperature scale to enter temperature ...." << endl;
    cout << " \t C for Celcius" << endl;
    cout << " \t F for Fahrenheit" << endl;
    cout << " \t K for Kelvin" << endl;
    cout << " Enter your choice : " << endl;
    cin >> scale;
    cout << endl;
    

    if (scale == 'C' || scale == 'c')
    {
        cout << " Enter Temperature in Celcius : ";
        cin >> Celcius;
        cout << endl;

        t.setTempCelcius(Celcius);
        cout << "Temperature in Celcius : " << t.getCelcius() << endl;
        cout << "Temperature in Fahrenheit : " << t.getFahrenheit() << endl;
        cout << "Temperature in Kelvin : " << t.getKelvin() << endl;
    }
    else if(scale == 'F' || scale == 'f')
    {
        cout << " Enter Temperature in Fahrenheit : ";
        cin >> Fahrenheit;
        cout << endl;

        t.setTempFahrenheit(Fahrenheit);
        cout << "Temperature in Celcius : " << t.getCelcius() << endl;
        cout << "Temperature in Fahrenheit : " << t.getFahrenheit() << endl;
        cout << "Temperature in Kelvin : " << t.getKelvin() << endl;
    }
    else if (scale == 'K' || scale == 'k')
    {
        cout << " Enter Temperature in Kelvin : ";
        cin >> Kelvin;
        cout << endl;

        t.setTempKelvin(Kelvin);
        cout << "Temperature in Celcius : " << t.getCelcius() << endl;
        cout << "Temperature in Fahrenheit : " << t.getFahrenheit() << endl;
        cout << "Temperature in Kelvin : " << t.getKelvin() << endl;
    }
    else
    {
        cout << "Incorrect Temperature scale ...."<<endl;
    }

    system("pause");
        return 0;

























}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
