////////////////////////////////////////////////////////////////////////////////
//  student.h
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "student.h"

// class Security definition
class Security : public Student {
	using Student::Student;

public:

	// function declarations
	virtual Degree getDegreeProgram() override;

private:
	Degree degreeType = SECURITY;
};