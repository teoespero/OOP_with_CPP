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
// this is a demonstration of all the classes that have been
// defined in this application
int main(){

	//	StudentTable defined in the project 
	//	Note that the last string value contains
	//	my student information
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Teodulfo,Espero,tespero@wgu.edu,44,14,15,16,SOFTWARE"
	};

	//	print our header
	cout << "Scripting and Programming-Applications-C867" << endl
		<< "Language: C++" << endl
		<< "StudentID: 000891230" << endl
		<< "Name: Teodulfo Espero" << endl 
		<< endl << endl;

	Roster studentRoster;
	Degree degree;

	//	determine the size of data we will be dealing with
	int sizeOfStudentDataArray = sizeof(studentData) / sizeof(studentData[0]);

	// parse through the string data delimited by a comma
	for (int rowPtr = 0; rowPtr < sizeOfStudentDataArray; ++rowPtr) {
		string placeholder[9] = {}, pieceofinfo = "";
		int column = 0;
		for (int fieldPtr = 0; fieldPtr < studentData[rowPtr].length(); ++fieldPtr) {
			if (studentData[rowPtr][fieldPtr] == ',') {
				placeholder[column] = pieceofinfo;
				pieceofinfo = "";
				column++;
				continue;
			}
			if (studentData[rowPtr][fieldPtr] != ',')
				pieceofinfo += studentData[rowPtr][fieldPtr];
			if (fieldPtr < studentData[rowPtr].length()) 
				placeholder[column] = pieceofinfo;
		}

		// determine the student's degree 
		if (placeholder[8] == "NETWORK") 
			degree = NETWORK;
		if (placeholder[8] == "SECURITY") 
			degree = SECURITY;
		if (placeholder[8] == "SOFTWARE")
			degree = SOFTWARE;

		// after parsing the data, we will now add it to the roster
		studentRoster.add(placeholder[0], 
			placeholder[1], 
			placeholder[2], 
			placeholder[3], 
			(stoi(placeholder[4])), 
			(stoi(placeholder[5])), 
			(stoi(placeholder[6])), 
			(stoi(placeholder[7])), 
			degree);
	}

	// print all the student info
	cout << "-> Print the student roster..." << endl;
	studentRoster.printAll();
	cout << endl << endl;

	// print students that provided an invalid email
	cout << "->  Students with invalid email addresses..." << endl;
	studentRoster.printInvalidEmails();
	cout << endl << endl;

	// print the average days 
	int tempSize = studentRoster.getRosterSize();
	cout << "->  Print average days on courses..." << endl;
	cout << "Student ID:\t\tAvg. Days in Course:" << endl;

	for (int i = 0; i < tempSize; ++i)
		studentRoster.printAverageDaysInCourse(studentRoster.classRosterArray[i]->getId());

	// print student infos grouped by degree
	cout << endl << endl;
	studentRoster.printByDegreeProgram(NETWORK);
	studentRoster.printByDegreeProgram(SECURITY);
	studentRoster.printByDegreeProgram(SOFTWARE);

	// demo on removing a student from the roster
	cout << endl << endl;
	cout << "->  Removing a student...ID (A3)..." << endl;
	studentRoster.remove("A3");

	// we will re-attempt removing the same student
	// in this case, we expect that the student is no longer
	// in the roster, therefore nothing is deleted
	cout << endl << endl;
	cout << "->  Re-attempt removing a student...ID (A3)..." << endl;
	studentRoster.remove("A3");

	// cleanup
	cout << endl << endl;
	studentRoster.~Roster();

	return 0;

}
////////////////////////////////////////////////////////////////////////////////