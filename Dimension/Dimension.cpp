//  Dimension.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// define the shape object along with 
// 4 basic infos
//	- name
//	- measurements
class Dimension {
private:
	float
		measurement01,
		measurement02,
		measurement03,
		measurement04;
	string
		shapename,
		name01,
		name02,
		name03,
		name04;

public:
	// constructor with initialization
	Dimension() : measurement01(0), measurement02(0), measurement03(0), measurement04(0), shapename(""), name01(""), name02(""), name03(""),name04(""){
		cout << "Dimension is being created...." << endl;
	}

	// destructor
	~Dimension(void) {
		cout << endl << "Dimension is being deleted...." << endl;
	}

	// overloaded methods to show the measurements
	void setmeasurements(string shname, string name01, float meas01) {
		shapename = shname;
		
		this->name01 = name01;
		measurement01 = meas01;
	}

	void setmeasurements(string shname, string name01, float meas01, string name02, float meas02) {
		shapename = shname;

		this->name01 = name01;
		measurement01 = meas01;

		this->name02 = name02;
		measurement02 = meas02;
	}

	void setmeasurements(string shname, string name01, float meas01, string name02, float meas02, string name03, float meas03) {
		shapename = shname;
		
		this->name01 = name01;
		measurement01 = meas01;
		
		this->name02 = name02;
		measurement02 = meas02;
		
		this->name03 = name03;
		measurement03 = meas03;
	}

	void setmeasurements(string shname, string name01, float meas01, string name02, float meas02, string name03, float meas03, string name04, float meas04) {
		shapename = shname;
		
		this->name01 = name01;
		measurement01 = meas01;
		
		this->name02 = name02;
		measurement02 = meas02;
		
		this->name03 = name03;
		measurement03 = meas03;
		
		this->name04 = name04;
		measurement04 = meas04;
	}

	void showshapedimensions() {
		
		cout << setprecision(2);
		if (name01.length() > 0) {
			cout << endl << "Shape: " << shapename << endl
				<< name01 << ": " << fixed << measurement01 << endl;
		}
		if (name02.length() > 0)
			cout << name02 << ": " << fixed << measurement02 << endl;
		if (name03.length() > 0)
			cout << name03 << ": " << fixed << measurement03 << endl;
		if (name04.length())
			cout << name04 << ": " << fixed << measurement04 << endl;
	}
};

int main(){
	// define our class instance
	Dimension Shape01;

	// circle
	Shape01.setmeasurements("Circle", "Radius",10.0, "Diameter", 5.25);
	Shape01.showshapedimensions();

	// square
	Shape01.setmeasurements("Square", "Length", 10.0, "Width", 10.0);
	Shape01.showshapedimensions();

	// cube
	Shape01.setmeasurements("Cube", "Length", 10.0, "Width", 10.0, "Height", 15.50);
	Shape01.showshapedimensions();

	// triangle
	Shape01.setmeasurements("Triangle", "Side A", 5.0, "Side B", 10.0, "Hypotenuse", 15.0, "Height", 30.0);
	Shape01.showshapedimensions();

	Shape01.setmeasurements("Cone", "Slant", 23.0, "Altituide", 30.00, "Radius", 15.00);
	Shape01.showshapedimensions();
}