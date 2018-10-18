// MotorTestDll.cpp : Defines the exported functions for the DLL application.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "MotorTracker.h"


int main(int argc, char *argv[])
{
	double position = atof(argv[1]);
	char *file = argv[2];

	MotorTracker(position, file);

	return 0;
}