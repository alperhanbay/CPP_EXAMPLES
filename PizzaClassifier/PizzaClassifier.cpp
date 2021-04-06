// PizzaClassifier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"PizzaClassifierLibrary.h"
using namespace std;
int main()
{
    char pizzaType, pizzaSize, topping, temp;
    int type = 0;
    int size = 0;
    Pizza pizza,bpizza;
    
    cout << "\b Pizza Order Menu" << endl;
    bpizza.outputDescription();
    cout << endl;
    cout << " Price : $" << bpizza.computePrice() << endl << endl;


    cout << " Sizes available are (s)mall, (m)edium"
        << "and (l)arge." << endl
        << "Enter the size (character in braceses) : ";
    cin >> pizzaSize;
    switch (pizzaSize)
    {
    case 'S':
    case 's':
        size = SMALL;
        break;
    case 'M':
    case 'm':
        size = MEDIUM;
        break;
    case 'L':
    case 'l':
        size = LARGE;
        break;
    }
    
    cout << " Types available are (D)eepdish, (H)and tossed"
        << "and (p)an." << endl
        << "Enter the type (character in braceses) : ";
    cin >> pizzaType;
    switch (pizzaType)
    {
    case 'D':
    case 'd':
        type = DEEPDISH;
        break;
    case 'H':
    case 'h':
        type = HANDTOSSED;
        break;
    case 'P':
    case 'p':
        type = PAN;
        break;
    }

    pizza.setSize(size);
    pizza.setType(type);

    cout << " Select toppings (c)heese, (p)epperoni "
        << "and (n) for no topping." << endl
        << "Enter the topping (character in braceses) : ";
    cin >> topping;
    switch (topping)
    {
    case 'C':
    case 'c':
        pizza.setCheese(true);
        break;
    case 'P':
    case 'p':
        pizza.setPepperoni(true);
        break;
    case 'N':
    case 'n':
        cout << " No topping on pizza!" << endl;
        break;
    }

    pizza.outputDescription();
    cout << endl;

    cout << "Price : $" << pizza.computePrice() << endl;
    

    system("Pause");
    return 0;



























}

