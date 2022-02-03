////////////////////////////////////////////////////////////////////////////////
//  ArrayTripObject.cpp 
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;
////////////////////////////////////////////////////////////////////////////////
//	the Travels class is defined to test out the 
//	static declarations...
//	we will use them to accumulate the number of
//	trips and the total distance travelled
class Travels {
private:

	//	these are our accumulators
	static int tottrip;
	static int totdistance;

	//	these store the travel infos for
	//	each object.
	int tripdistance;
	string travelname;

public:

	//	constructior
	Travels():tripdistance(0), travelname("") { 
		tottrip++; 
		cout << tottrip << " object created..." << endl;
	}

	//	destructor
	~Travels(){
		cout << tottrip << " object destroyed..." << endl;
		tottrip--;
	}

	//	accessors
	void totaltravel() { totdistance += tripdistance; }

	//	we have declared these functions as const
	//	since they only return and not modify the
	//	data in the object
	int showtotaldis() const { return totdistance; }
	string showtravellocations() const { return travelname; }
	int showtotaltrip() const { return tottrip; }

	// setters
	void gettravelinfo() {
		cout << "travel name...";
		cin >> travelname;

		cout << "distance (mi)...";
		cin >> tripdistance;
	}
};
////////////////////////////////////////////////////////////////////////////////
//	defining the static vars
//	we are using
int Travels::tottrip = 0;
int Travels::totdistance = 0;

////////////////////////////////////////////////////////////////////////////////
int main(){

	//	set a limit to our array
	const int MAXTRAVEL = 3;

	//	list delimiter
	string comma = ", ";

	//	declare our array of objects
	Travels trips[MAXTRAVEL];

	//	fill it up with trvale info
	for (int ptr = 0; ptr < MAXTRAVEL; ptr++) {
		trips[ptr].gettravelinfo();
		trips[ptr].totaltravel();
	}

	//	flex our travel stats
	cout << endl << "You had a total of " 
		<< trips->showtotaltrip() 
		<< " trips and travelled a total distance of " 
		<< trips->showtotaldis() 
		<< " miles." << endl;

	cout << "You travelled in ";
	for (int ptr2 = 0; ptr2 < MAXTRAVEL; ptr2++) {
		cout << trips[ptr2].showtravellocations();
		if (ptr2 < MAXTRAVEL - 2)
			cout << ", ";
		else if (ptr2 < MAXTRAVEL - 1)
			cout << ", and ";
		else
			cout << "." << endl;
	}
	
}
////////////////////////////////////////////////////////////////////////////////