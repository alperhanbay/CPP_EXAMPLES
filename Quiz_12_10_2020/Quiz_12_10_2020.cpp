#include <iostream>
#include <string>
#include"Movie.h"
using namespace std;


int main() {

	Movie movie1(" Matrix ", "PG-13"), movie2("Inception", "PG");
	movie1.addRating(3);
	movie1.addRating(2);
	movie1.addRating(3);
	movie1.addRating(5);
	movie1.addRating(4);
	float average1 = movie1.getAverage();


	movie2.addRating(5);
	movie2.addRating(4);
	movie2.addRating(2);
	movie2.addRating(5);
	movie2.addRating(4);
	float average2 = movie2.getAverage();

	cout << "Movie Name\t MPAA Rating\t Movie Rating\n";
	cout << movie1.moviename << "\t\t" << movie1.MPAARating << "\t\t" << average1 << "\n";
	cout << movie2.moviename << "\t\t" << movie2.MPAARating << "\t\t" << average2 << "\n";

	return 0;
}