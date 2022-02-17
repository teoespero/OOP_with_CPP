////////////////////////////////////////////////////////////////////////////////
//  Degree.h
//  Teodulfo Espero
//  BS Software Development
//  Western Governors University
////////////////////////////////////////////////////////////////////////////////
#pragma once

using namespace std;

////////////////////////////////////////////////////////////////////////////////
// This is where we define an enum that will define
// the type of major/degree that a student has
enum Degree {
	SECURITY, 
	NETWORK, 
	SOFTWARE
};

// this allows us to get the literal degree 
static const string degreeTypeString[] = {"SECURITY","NETWORK","SOFTWARE"};