////////////////////////////////////////////////////////////////////////////////
//  network.h
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "student.h"

using namespace std;

// Network class definition
class Network : public Student {
	using Student::Student;
public:

	// virtual function declaration
	virtual Degree getDegreeProgram() override;

private:
	Degree degreeType = NETWORK;
};
