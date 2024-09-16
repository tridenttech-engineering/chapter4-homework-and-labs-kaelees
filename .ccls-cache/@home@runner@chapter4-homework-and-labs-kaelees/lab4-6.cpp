//Lab4-6.cpp - displays the area of a triangle
//Created/revised by kaelee storozuk on 9/16/24

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double base = 0.0;
	double height = 0.0;
	double area = 0.0;

	cout << "base: ";
	cin >> base;
	cout << "height: ";
	cin >> height;

	//calculate and display area
	area = base * height / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function