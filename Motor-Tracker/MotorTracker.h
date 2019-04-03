#pragma once
#define EXPORTDLL __declspec(dllexport)

#ifndef motor_tracker_h
#define motor_tracker_h

void swap(std::vector <double> &pos, std::vector <double> &freq, int i, int j) {
	double temp_pos = 0;
	double temp_freq = 0;

	temp_pos = pos[i];
	temp_freq = freq[i];

	pos[i] = pos[j];
	freq[i] = freq[j];

	pos[j] = temp_pos;
	freq[j] = temp_freq;

	return;
}

EXPORTDLL double *MotorTracker(double motor_position, const char *file_path) {

	// *************************************************************
	//  'file_path' is the path to the map file that is used to 
	//  convert the motor position to EIO frequency. The path 
	//  must be written with escape sequences or else windows 
	//  cannot find the file.
	// *************************************************************

	// *************************************************************
	//  Read in file with position/frequency measurement data
	// *************************************************************

	std::string line;
	std::string sub1;
	std::string sub2;

	std::fstream file;

	std::vector <double> position;
	std::vector <double> frequency;

	bool fNotSorted = true;

	file.open(file_path, std::fstream::in | std::fstream::out);
	if (!file.is_open()) {
		std::cerr << "File not opened." << std::endl;
		exit(1);
	}
	while (file.good()) {
		std::getline(file, line);

		sub1 = line.substr(0, line.find("\t"));
		sub2 = line.substr(line.find("\t") + 1, line.length());

		position.push_back(atof(sub1.c_str()));
		frequency.push_back(atof(sub2.c_str()));

	}

	// *************************************************************
	//  Sort frequency/position data in numerical order
	// *************************************************************

	double temp_pos = 0;
	double temp_freq = 0;

	while (fNotSorted) {
		fNotSorted = false;
		for (int i = 0; i < position.size() - 1; i++) {
			if (position[i] > position[i + 1]) {
				swap(position, frequency, i, i + 1);
				fNotSorted = true;
			}
		}
	}
	file.close();

	// *************************************************************
	//  Find input positiona and extrapolate to determine frequency
	// *************************************************************

	double slope;
	double intercept;
	int lower;
	int upper;
	double fit[3];

	for (int i = 0; i < position.size(); i++) {
		if (position.at(i) > motor_position) {
			lower = i - 1;
			upper = i;
			break;
		}
	}

	slope = ((frequency.at(upper) - frequency.at(lower)) / (position.at(upper) - position.at(lower)));
	intercept = frequency.at(upper) - slope * position.at(upper);
	double freq_out = slope * motor_position + intercept;
	
	fit[0] = freq_out;
	fit[1] = slope;
	fit[2] = intercept;
	
//	return(freq_out);
	return(fit);
}
#endif