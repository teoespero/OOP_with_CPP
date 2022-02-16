#pragma once
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
