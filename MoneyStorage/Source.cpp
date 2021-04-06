#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money obj1;
	obj1.setCents(55);
	obj1.setDollars(4);

	cout << "Details of the first object account" << endl;
	cout << "\t Dollars : " << obj1.getDollars() << endl;
	cout << "\t Cents : " << obj1.getCents() << endl;
	cout << " \tMonetary amount :$ " << obj1.monetaryAmount() << endl;

	Money obj2;
	obj2.setCents(43);
	obj2.setDollars(9);

	cout << "Details of the second object account" << endl;
	cout << "\t Dollars : " << obj2.getDollars() << endl;
	cout << "\t Cents : " << obj2.getCents() << endl;
	cout << " \tMonetary amount :$ " << obj2.monetaryAmount() << endl;

	Money obj3;
	obj3.setCents(13);
	obj3.setDollars(49);

	cout << "Details of the third object account" << endl;
	cout << "\t Dollars : " << obj3.getDollars() << endl;
	cout << "\t Cents : " << obj3.getCents() << endl;
	cout << " \tMonetary amount :$ " << obj3.monetaryAmount() << endl;

	Money obj4;
	obj4.setCents(78);
	obj4.setDollars(50);

	cout << "Details of the fourth object account" << endl;
	cout << "\t Dollars : " << obj4.getDollars() << endl;
	cout << "\t Cents : " << obj4.getCents() << endl;
	cout << " \tMonetary amount :$ " << obj4.monetaryAmount() << endl;



	return 0;





















}