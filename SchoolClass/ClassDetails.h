#pragma once
#ifndef CLASSDEATAILS_H_
#define CLASSDETAILS_H_
#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
public:
	Student(); 
	Student(const Student& studentObj);
	string getName() const;
	int getNumClasses() const;
	void inputValue();
	void Reset();
	void Display();
	Student& operator = (const Student & rValue);
	~Student();
	
private:
	string name;
	int numClasses;
	string* classList;
};























#endif // !CLASSDEATAILS_H_



















