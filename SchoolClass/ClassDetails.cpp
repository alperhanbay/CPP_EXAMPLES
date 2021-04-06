#include<iostream>
#include"ClassDetails.h"
#include <string>
#include <cstdlib>

using namespace std;
class Student;


void Student::inputValue()
{
	cin.ignore(1000, '\n');
	cout << "Enter the name of a student : ";
	getline(cin, name);
	cout << endl;
	cout << "How many courses the student is currently enrolled in : ";
	cin >> numClasses;
	cin.ignore(1000, '\n');
	cout << "The name of the class that the student is enrolled in : ";
	for (int i = 0; i < numClasses; i++)
		getline(cin, classList[i]);
}
string Student::getName() const
{
	return name;
}
int Student::getNumClasses() const
{
	return numClasses;
}
void Student::Reset()
{
	for (int i = 0; i < numClasses; i++)
		classList[i] = '\0';
	numClasses = 0;
}
void Student::Display()
{
	cout << " The name of the student : " << name << endl;
	cout << "The number of class that student is currently enrolled in:" << numClasses << endl;
	cout << "List of classes is : " << endl;
	for (int i = 0;  i < numClasses; i++)
		cout << classList[i] << endl;
}
Student::Student()
{
	name = '\0';
	numClasses = 0;
	classList = new string[100];
}


Student::Student(const Student& studentObj):
name(studentObj.getName()), numClasses(studentObj.getNumClasses())
{
	classList = new string[numClasses];
	for (int i = 0; i < numClasses; i++)
		classList[i] = studentObj.classList[i];

}
Student& Student::operator=(const Student& rValue)
{
	if (numClasses != rValue.numClasses)
	{
		delete[] classList;
		classList = new string[rValue.numClasses];
	}

	name = rValue.name;
	numClasses = rValue.numClasses;

	for (int i = 0; i < numClasses; i++)
		classList[i] = rValue.classList[i];
	return *this;
}

Student::~Student()
{
	delete[] classList;
}




















