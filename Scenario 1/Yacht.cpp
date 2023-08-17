// Albie Ng
// Scenario 1

#include "Yacht.h"
#include "Location.h"
#include <iostream>

Yacht::Yacht(const int serialNumber) : serialNumber(serialNumber) {}

void Yacht::get_pos(Yacht& yacht) {
	Location tempLoc = Location::getpos();
	bool isValid = false;
	
	if (tempLoc.direction == 'N' || tempLoc.direction == 'S') {
		yacht.latitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'E' && tempLoc.direction != 'W') {
				std::cout << "Longitude must be 'E' or 'W'\nPlease enter longitude again..." << std::endl <<std::endl;
				isValid = false;
			}
			else {
				yacht.longitude = tempLoc;
				isValid = true;
			}
		} while (isValid == false);
	}
	else {
		yacht.longitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'N' && tempLoc.direction != 'S') {
				std::cout << "Latitude must be 'N' or 'S'\nPlease enter latitude again..." << std::endl << std::endl;
				isValid = false;
			}
			else {
				yacht.latitude = tempLoc;
				isValid = true;
			}
		} while (isValid == false);
	}
}

void Yacht::print(const Yacht&) {
	std::cout << "The ship serial number is : " << this->serialNumber << std::endl;
	std::cout << "and it's position is : " << this->latitude.degrees << "\xF8" << this->latitude.minutes << " " << this->latitude.direction << " Latitude ";
	std::cout << this->longitude.degrees << "\xF8" << this->longitude.minutes << " " << this->longitude.direction << " Longitude " << std::endl << std::endl;
}

int Yacht::yachtCount() {
	int count = 0;
	return ++count;
}