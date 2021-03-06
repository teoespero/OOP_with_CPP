#pragma once
////////////////////////////////////////////////////////////////////////////////
//  CircleObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#include "circle.h"

using namespace std;

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
