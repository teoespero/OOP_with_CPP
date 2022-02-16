////////////////////////////////////////////////////////////////////////////////
//  CircleObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;


////////////////////////////////////////////////////////////////////////////////
//	Circle class definition
class Circle {
private:
	const double PI = 3.1416;
	double radius;
public:
	///////////////////////////////////////////////////////////////////////////
	//	function declarations and definitions
	Circle() :radius(0) {
	}

	~Circle() {
	}

	double getRadius() {
		return radius;
	}

	double getArea() {
		return (PI * radius * radius);
	}

	double getPerimeter() {
		return (2 * PI * radius);
	}

	void setRadius(double theradius) {
		radius = theradius;
	}
};


////////////////////////////////////////////////////////////////////////////////
//	creating the Circle object instance
int main() {
	Circle circle1;
	circle1.setRadius(10); 
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl;

	Circle circle2;
	circle2.setRadius(20);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl;
	return 0;

}
