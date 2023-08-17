// Albie Ng
// Scenario 1

#include "Yacht.h"
#include "Location.h"
#include <iostream>

// Function to input the two locations into the Yacht object
void Yacht::get_pos(Yacht&) {
	Location tempLoc = Location::getpos(); // uses a temporary location variable before assigning to latitude or longitude
	bool isValid = false; // bool for input validation
	
	// determines if a latitude or longitude coordinate has been received then prompts the user for the other
	if (tempLoc.direction == 'N' || tempLoc.direction == 'S') {
		this->latitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'E' && tempLoc.direction != 'W') {
				std::cout << "Longitude must be 'E' or 'W'\nPlease enter longitude again..." << std::endl <<std::endl;
				isValid = false;
			}
			else {
				this->longitude = tempLoc;
				isValid = true;
			}
		} while (isValid == false);
	}
	else {
		this->longitude = tempLoc;
		do {
			tempLoc = Location::getpos();
			if (tempLoc.direction != 'N' && tempLoc.direction != 'S') {
				std::cout << "Latitude must be 'N' or 'S'\nPlease enter latitude again..." << std::endl << std::endl;
				isValid = false;
			}
			else {
				this->latitude = tempLoc;
				isValid = true;
			}
		} while (isValid == false);
	}
}

// simple print function
void Yacht::print(const Yacht&) {
	std::cout << "\nThe ship serial number is : " << this->serialNumber << std::endl;
	std::cout << "and it's position is : " << this->latitude.degrees << "\xF8" << this->latitude.minutes << " " << this->latitude.direction << " Latitude ";
	std::cout << this->longitude.degrees << "\xF8" << this->longitude.minutes << " " << this->longitude.direction << " Longitude " << std::endl << std::endl;
}

// returns static member variable Yacht Count
int Yacht::getYachtCount() {
	return yachtCount;
}