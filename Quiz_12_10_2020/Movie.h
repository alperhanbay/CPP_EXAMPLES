#pragma once
#ifndef MOVIE_H_
#define MOVIE_H_
#include <iostream>
#include <cstring>
#include <string.h>
#include<cstdlib>

using namespace std;

class Movie {
public:
	string moviename, MPAARating;
	int ratingOne, ratingTwo, ratingThree, ratingFour, ratingFive;
	Movie(string name, string rating);
	void addRating(int rating);
	float getAverage();
};
#endif