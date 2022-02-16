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
	//	function declarations 
	Circle();
	~Circle();
	double getRadius();
	double getArea();
	double getPerimeter();
	void setRadius(double theradius);
};

////////////////////////////////////////////////////////////////////////////////
//	function definitions

//	constructor
Circle::Circle() :radius(0) {
}

//	destructor
Circle::~Circle() {
}

//	getRadius member function
double Circle::getRadius() {
	return radius;
}

//	getArea member function
double Circle::getArea() {
	return (PI * radius * radius);
}

//	getPerimeter member function
double Circle::getPerimeter() {
	return (2 * PI * radius);
}

//	setRadius member function
void Circle::setRadius(double theradius) {
	radius = theradius;
}


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
