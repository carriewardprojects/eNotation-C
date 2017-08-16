// eNotation.cpp : A simple C++ program that displays large values in E Notation
// Carrie Ward 08/16/17

#include <iostream>
using namespace std;


int main()
{
	float distance = 1.495979E11;
	double mass = 1.989E30;

	cout << "\nThe sun is " << distance << " meters away.\n";
	cout << "\nThe sun's mass is " << mass << " kilograms.\n" << endl;

	return 0;
}

