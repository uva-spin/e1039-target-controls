#pragma once
#define EXPORTDLL __declspec(dllexport)

#ifndef position_tracker_h
#define position_tracker_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

EXPORTDLL double PositionTracker(double motor_position, const char *file_path) {

	// *************************************************************
	//  'file_path' is the path to the position log file. The 
	// path must be written with escape sequences or else windows 
	//  cannot find the file.
	// *************************************************************

	// *************************************************************
	//  Read in file with position/frequency measurement data
	// *************************************************************

	std::fstream file;

	std::vector <double> position;
	
	file.open(file_path, std::fstream::in | std::fstream::out);
	if (!file.is_open()) {
		std::cerr << "File not opened." << std::endl;
		exit(1);
	}
	

	// *************************************************************
	//  Simply write out the position to the file and 
	//  wait 100um before existing. The delay is to set 
	//  the monitoring resolution.
	// *************************************************************
	
	file << motor_position;
	Sleep(100);
	file.close();

	return(motor_position);
}
#endif