//  Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

enum Gender {
	Undefined,
	Male,
	Female
};

class Person {


	string Name;
	Gender Sex;
public:

	// constructor
	Person() : Name(""), Sex(Undefined) {
		cout << "Person object being created..." << endl;
	}

	// destructor
	~Person() {
		cout << "Person object being destroyed..." << endl;
	}

	// setters
	void setpersoninfo(string fullname, Gender sex) {
		Name = fullname;
		Sex = sex;
	}

	// accessors
	string getname() {
		return Name;
	}

	string getgender() {
		if (Sex == 0)
			return "Undefined";
		else if (Sex == 1)
			return "Male";
		if (Sex == 2)
			return "Female";
	}
};

// inheritor
class Employee: Person {
private:
	string 
		jobtitle, 
		department, 
		manager;

	double salary;
public:

	// constructor
	Employee() :jobtitle(""), department(""), manager(""), salary(0.00) {
		cout << "Employee object being created..." << endl << endl;
	}

	//destroctor
	~Employee(){
		cout << endl << "Employee object being destroyed..." << endl;
	}

	// setter
	void setemployeeinfo(string fname, Gender sex, string job, string dept, string mgr, double pay) {
		setpersoninfo(fname, sex);
		jobtitle = job;
		department = dept;
		manager = mgr;
		salary = pay;
	}

	// accessor
	void showempinfo() {

		cout << setprecision(2);
		cout << "Employee information" << endl
			<< "----------------------------" << endl
			<< "Name: " << getname() << endl
			<< "Gender: " << getgender() << endl
			<< "Job title: " << jobtitle << endl
			<< "Department: " << department << endl
			<< "Manager: " << manager << endl
			<< "Salary info: " << fixed << salary << endl;
	}

};


using namespace std;

int main(){

	// object 1
	Employee thisperson;

	thisperson.setemployeeinfo("T Espero", Male, "IT Administrator", "Admin", "J Ybanez", 125000.00);
	thisperson.showempinfo();

	cout << endl;

	// object 2
	Employee nextperson;

	nextperson.setemployeeinfo("M Espero", Female, "Family horse", "Living Room", "T Espero", 0.00);
	nextperson.showempinfo();
}