//  MachinePart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class MachinePart {
private:
	string
		partname;
	int
		modelnumber,
		partnumber;
	float
		cost;
public:
	void setpartinfo(string partname, int modnum, int partno, float partcost) {
		this -> partname = partname;
		modelnumber = modnum;
		partnumber = partno;
		cost = partcost;
	}

	void showpart() {
		cout << setprecision(2);
		cout << "Part Name: " << partname << endl
			<< "Model: " << fixed  << modelnumber << endl
			<< "Part No.: " << fixed << partnumber << endl
			<< "Cost: $" << fixed << cost << endl;
	}
};

int main(){
	MachinePart machine01;

	machine01.setpartinfo("Gear box",147852369,987654,12.50);
	machine01.showpart();

}