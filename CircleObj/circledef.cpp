////////////////////////////////////////////////////////////////////////////////
//  CircleObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "circle.h"

using namespace std;

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
