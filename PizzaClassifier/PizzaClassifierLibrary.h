#pragma once
#ifndef PIZZACLASSIFIERLIBRARY_H
#define PIZZACLASSIFIERLIBRARY_H

#include<iostream>
using namespace std;


const int DEEPDISH = 1;
const int HANDTOSSED = 2;
const int PAN = 3;
const int SMALL = 1;
const int MEDIUM = 2;
const int LARGE = 3;


class Pizza
{
private:
	int type;
	int size;
	bool cheeeseTopping;
	bool pepperoniTopping;

public:
	Pizza();
	
	int getType();
	int getSize();
	bool getCheese();
	bool getPepperoni();
	void setType(int t);
	void setSize(int s);
	void setCheese(bool choice);
	void setPepperoni(bool choice);
	void outputDescription();
	double computePrice();


};






























#endif // !PIZZACLASSIFIERLIBRARY_H
