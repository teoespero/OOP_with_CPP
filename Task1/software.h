////////////////////////////////////////////////////////////////////////////////
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "student.h"


class Software : public Student
{
	using Student::Student;

public:
	virtual Degree getDegreeProgram() override;

private:
	Degree degreeType = SOFTWARE;

};