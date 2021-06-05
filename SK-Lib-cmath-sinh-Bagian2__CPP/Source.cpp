// C++ program to demonstrate the
// sinh() function

#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS19*/

using namespace std;

int main() {
	double x = 4.1;

	double result = sinh(x);
	cout << "sinh(4.1) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = sinh(x);
	cout << "sinh(90 degrees) = " << result << endl;

	_getch();
	return 0;
}
