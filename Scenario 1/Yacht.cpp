#include "Yacht.h"
#include "Location.h"
#include <iostream>

Yacht::Yacht(int serialNumber, Location latitude, Location longitude)
	: serialNumber(serialNumber), latitude(latitude), longitude(longitude) {}

void Yacht::get_pos(Yacht& yacht) {
	Location tempLoc = Location::getpos();
	bool isValid = false;


	if (tempLoc.direction == 'N' || tempLoc.direction == 'S') {
		yacht.latitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'E' && tempLoc.direction != 'W') {
				std::cout << "Longitude must be 'E' or 'W'\nPlease try again..." << std::endl;
				break;
			}
			yacht.longitude = tempLoc;
			isValid = true;
		} while (isValid = false);
	}
	else {
		yacht.longitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'N' && tempLoc.direction != 'S') {
				std::cout << "Latitude must be 'N' or 'S'\nPlease try again..." << std::endl;
				break;
			}
			yacht.latitude = tempLoc;
			isValid = true;
		} while (isValid = false);
	}
}

void Yacht::print(const Yacht&) {

}