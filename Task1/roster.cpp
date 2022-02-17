////////////////////////////////////////////////////////////////////////////////
//  roster.cpp
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include "network.h"
#include "security.h"
#include "software.h"
#include "roster.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////
// function definitions
bool emailisok(string email) {

	bool
		checkForAtSign,
		checkForDot,
		checkForAnySpaces;

	// check for the @ symbol in the email provided
	if (email.find('@') > 0 && email.find('@') < email.length())
		checkForAtSign = true;
	else
		checkForAtSign = false;
	// check for the . 
	if (email.find('.') > 0 && email.find('.') < email.length())
		checkForDot = true;
	else
		checkForDot = false;
	//check for spaces
	if (email.find(' ') > 0 && email.find(' ') < email.length())
		checkForAnySpaces = true;
	else
		checkForAnySpaces = false;
	
	// return true if the email is ok
	return (checkForAtSign && checkForDot && !checkForAnySpaces);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree deg) {

	int days[3] = { 
		daysInCourse1, 
		daysInCourse2, 
		daysInCourse3 
	};

	for (int i = 0; i < sizeOfRoster; ++i) {//loop through and find containers to fill
		//cout << deg << endl;

		if (classRosterArray[i] == nullptr) {//if we equal null, fill it with someting
			switch (deg) {
			case SOFTWARE:
				classRosterArray[i] = new Software(studentID, firstName, lastName, emailAddress, age, days, deg);
				break;
			case SECURITY:
				classRosterArray[i] = new Security(studentID, firstName, lastName, emailAddress, age, days, deg);
				break;
			case NETWORK:
				classRosterArray[i] = new Network(studentID, firstName, lastName, emailAddress, age, days, deg);
				break;
			}//end switch
			break;//break out if needed, otherwise we could overwrite our work
		}//end nullptr check
	}//end roster loop

}//end of add function


void Roster::printAll() {
	cout << "Student ID\t"
		<< "First Name\t"
		<< "Last Name\t"
		<< "Email Address\t\t"
		<< "Age\t"
		<< "Days In Course\t"
		<< "Degree\t" << endl;

	for (int i = 0; i < sizeOfRoster; ++i) {
		//if container is full, print.
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();
		}
	}
}


void Roster::printInvalidEmails() {
	cout << "Student ID\tEmail Address" << endl;

	for (int i = 0; i < sizeOfRoster; ++i) {
		if (classRosterArray[i] != nullptr) {
			//print results that come back as not true
			if (!emailisok(classRosterArray[i]->getEmail())) {
				cout << setw(8) << classRosterArray[i]->getId() 
					<< "\t" << setw(25) 
					<< classRosterArray[i]->getEmail() << endl;
			}

		}
		else {
			cout << "Your search returned no results. " << endl;
		}
	}
	cout << left;
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < sizeOfRoster; ++i) {
		if (classRosterArray[i]->getId() == studentID) {
			cout << setw(8) << classRosterArray[i]->getId() << "\t\t" 
				<< (classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2])/3 
				<< endl;
		}
	}
	cout << left;
}

void Roster::printByDegreeProgram(int deg) {
	// print our header
	cout << "-> Results Students By Degree " << endl
		<< "(" << degreeTypeString[deg] << "): " << endl;
	
	// print the students info based on degree type
	for (int recPtr = 0; recPtr < sizeOfRoster; ++recPtr) {
		if (classRosterArray[recPtr] != nullptr) {
			if (classRosterArray[recPtr]->getDegreeProgram() == deg) {
				classRosterArray[recPtr]->print();
			}
		}
	}
	cout << endl;
}

void Roster::remove(string studentID) {
	bool studentExist = false;

	// find of the student id passed on is in the roster
	for (int recPtr = 0; recPtr < sizeOfRoster; ++recPtr) {
		if (classRosterArray[recPtr] != nullptr && classRosterArray[recPtr]->getId() == studentID) {
			classRosterArray[recPtr] = nullptr;
			studentExist = true;
			break;
		}
	}

	// if it exists, whack it
	if (studentExist) {
		cout << "-> Student ID " << studentID << " has been removed...." << endl;
	}
	else {
		cout << "-> Student ID " << studentID << " does not exist..." << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////