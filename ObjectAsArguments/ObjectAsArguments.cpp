//  ObjectAsArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Trips {
private:
	string tripname;
	double distance;

	string retrievetripname() { return tripname; }
	double retrievetripdistance() { return distance; }



public:
	// constructor
	Trips() :tripname(""), distance(0) {	}

	// destructor
	~Trips() {	}

	// setter
	void gettripinfos() {
		cout << "Trip name: ";
		cin >> tripname;

		cout << "Distance (in km): ";
		cin >> distance;
	}

	// getter
	void showtripticket() {
		if (retrievetripname().length() > 0) {
			cout << "Tripname: " << retrievetripname() << endl
				<< "Distance traveled (km): " << retrievetripdistance() << endl;
		}
		else {
			cout << "You did no go anywhere..." << endl;
		}
	}

	// add trips from object (overloaded)
	void addtours(Trips d1) {
		double totdistance = 0;
		int tottrips = 0;

		if (d1.tripname.length() > 0 && d1.distance > 0) {
			tottrips += 1;
			totdistance += d1.distance;
			distance = totdistance;
			tripname = d1.tripname;
		}
	}

	void addtours(Trips d1, Trips d2) {
		double totdistance = 0;
		int tottrips = 0;

		if (d1.tripname.length() > 0 && d1.distance > 0) {
			tottrips += 1;
			totdistance += d1.distance;
		}
		if (d2.tripname.length() > 0 && d2.distance > 0) {
			tottrips += 1;
			totdistance += d2.distance;
			distance = totdistance;
			tripname = d1.tripname + ", " + d2.tripname;
		}
	}

	void addtours(Trips d1, Trips d2, Trips d3) {
		double totdistance = 0;
		int tottrips = 0;

		if (d1.tripname.length() > 0 && d1.distance > 0) {
			tottrips += 1;
			totdistance += d1.distance;
		}
		if (d2.tripname.length() > 0 && d2.distance > 0) {
			tottrips += 1;
			totdistance += d2.distance;
		}
		if (d3.tripname.length() > 0 && d3.distance > 0) {
			tottrips += 1;
			totdistance += d3.distance;
			distance = totdistance;
			tripname = d1.tripname + ", " + d2.tripname + ", " + d3.tripname;
		}
	}

};


int main(){
	Trips Tour1, Tour2, Tour3, TotalTour;

	Tour1.gettripinfos();
	Tour2.gettripinfos();
	Tour3.gettripinfos();

	TotalTour.addtours(Tour1, Tour2, Tour3);
	TotalTour.showtripticket();
}