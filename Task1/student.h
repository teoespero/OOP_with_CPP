////////////////////////////////////////////////////////////////////////////////
//  student.h
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "degree.h"
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//  this is where we define the Student class which is the base class for 
//	holding all the information we have in the program
class Student {

protected:
	string studentId{}, firstName{}, lastName{}, emailAddress{};
	int age{}, daysInCourse[3];
	Degree degreeType;

public:
	////////////////////////////////////////////////////////////////////////////
	// function definitions
	
	// constructors
	Student();
	Student(string, string, string, string, int, int days[], Degree);

	//deconstructor
	~Student();

	////////////////////////////////////////////////////////////////////////////
	// modifiers
	
	void setId(string);
	//Set first name
	
	void setFirstName(string);
	//Set last name
	
	void setLastName(string);
	//Set Email 
	
	void setEmail(string);
	//Set Age
	
	void setAge(int);
	//Set Number of days to complete each course
	
	void setDaysInCourse(int days[]);
	//Set Degree
	
	void setDegree(Degree);

	string getId();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getDaysInCourse();

	virtual void print() {
		string tab = "\t";
		int* p = this->getDaysInCourse();
		string tempVal{};

		if (this->getDegreeProgram() == NETWORK) {
			tempVal = "NETWORK";
		}
		else if (this->getDegreeProgram() == SECURITY) {
			tempVal = "SECURITY";
		}
		else if (this->getDegreeProgram() == SOFTWARE) {
			tempVal = "SOFTWARE";
		}
		cout << this->getId() << tab 
			<< setw(15) << this->getFirstName() << tab 
			<< setw(15) << this->getLastName() << tab 
			<< setw(25) << this->getEmail() << tab 
			<< setw(2) << this->getAge() << tab 
			<< p[0] << "," << p[1] << "," << p[2] << tab 
			<< setw(8) << tempVal << endl;
	}
	virtual Degree getDegreeProgram();
};