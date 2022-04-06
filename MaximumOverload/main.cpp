#include "maximum.h"
#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int main() {

	// INTEGER
	
	int int1, int2, int3;

	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

	cout << "\nThe maximum integer value is: "
		<< maximum(int1, int2, int3);
	
	// DOUBLE

	double double1, double2, double3;

	cout << "\n\nInput three double values: ";
	cin >> double1  >> double2 >> double3;

	cout << "\nThe maximum double value is: "
		<< maximum(double1, double2, double3);

	// CHAR

	char char1, char2, char3;

	cout << "\n\nInput three char values: ";
	cin >> char1 >> char2 >> char3;

	cout << "\nThe maximum integer value is: "
		<< maximum(char1, char2, char3);
}