#include"Movie.h"
#include<iostream>
#include <string>
#include<cstdlib>

using namespace std;

Movie::Movie(string name, string rating) {
	moviename = name;
	MPAARating = rating;
	ratingOne = 0;
	ratingTwo = 0;
	ratingThree = 0;
	ratingFour = 0;
	ratingFive = 0;
}

void Movie :: addRating(int rating) {
	if (rating < 1 || rating>5) {
		cout << "Invalid Rating\n";
		return;
	}
	if (rating == 1)
		ratingOne += 1;
	else if (rating == 2)
		ratingTwo += 1;
	else if (rating == 3)
		ratingThree += 1;
	else if (rating == 4)
		ratingFour += 1;
	else
		ratingFive += 1;
}
float Movie :: getAverage() {
	float average = ((float)(ratingOne + 2 * ratingTwo + 3 * ratingThree + 4 * ratingFour + 5 * ratingFive) / (float)(ratingOne + ratingTwo + ratingThree + ratingFour + ratingFive));
	return average;
}
