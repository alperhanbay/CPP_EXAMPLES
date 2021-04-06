#include<iostream>
#include"PizzaClassifierLibrary.h"
using namespace std;

Pizza::Pizza()
{
	type = DEEPDISH;
	size = SMALL;
	cheeeseTopping = pepperoniTopping = false;

}

int Pizza::getType()
{
	return type;
}
int Pizza::getSize()
{
	return size;
}

bool Pizza::getCheese()
{
	return cheeeseTopping;
}

bool Pizza :: getPepperoni()
{
	return pepperoniTopping;
}

void Pizza::setType(int t)
{
	type = t;
}
void Pizza::setSize(int s)
{
	size = s;
}

void Pizza::setCheese(bool choice)
{
	cheeeseTopping = choice;
}

void Pizza::setPepperoni(bool choice)
{
	pepperoniTopping = choice;
}

void Pizza::outputDescription()
{
	cout << "\n The pizza ordered is \"";
	switch (size)
	{
	case SMALL:
		cout << " Small ";
		break;
	case MEDIUM:
		cout << " Medium ";
		break;

	case LARGE:
		cout << " Large ";
		break;
	default:
		cout << "Unkown sized";
	}
	switch (type)
	{
	case DEEPDISH:
		cout << " Deepdish ";
		break;
	case HANDTOSSED:
		cout << " Hand tossed ";
		break;

	case PAN:
		cout << " pan ";
		break;
	default:
		cout << "Unkown type";
	}
	cout << "\"pizza.";
}




















double Pizza::computePrice()
{
	double cost = 0.0;
	switch (size)
	{
	case SMALL:
		cost = cost + 10;
			break;
	case MEDIUM:
		cost = cost + 14;
		break;
	case LARGE:
		cost = cost + 17;
		break;
	}
	if (cheeeseTopping)
		cost = cost + 2.0;
	if (pepperoniTopping)
		cost = cost + 2.0;
	return cost;
}









































