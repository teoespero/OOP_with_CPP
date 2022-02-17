////////////////////////////////////////////////////////////////////////////////
//  roster.h
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////


#pragma once

#include "student.h"

////////////////////////////////////////////////////////////////////////////////
// class Roster definition
class Roster {

	// function declarations
public:
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree deg);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int deg);
	int getRosterSize() {
		return sizeOfRoster;
	}

	// destructor
	~Roster() {
	}
private:
	int sizeOfRoster = sizeof(classRosterArray) / sizeof(classRosterArray[0]);
};
