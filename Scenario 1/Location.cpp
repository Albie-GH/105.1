// Albie Ng
// Scenario 1

#include "Yacht.h"
#include "Location.h"
#include <iostream>
#include <cctype>

// Function to retrieve and return individaul Location coordinates
Location Location::getpos() {
	Location tempLoc; // temp variable to return
	bool validLoc = false; // bool for input validation

	// 3 while loops for degrees, minutes and direction inputs with validation checks
	while (!validLoc) {
		std::cout << "Input degrees between 0 and 180: ";
		std::cin >> tempLoc.degrees;
		if (tempLoc.degrees >= 0 && tempLoc.degrees <= 180 && !std::cin.fail()) {
			validLoc = true;
		}
		else {
			std::cout << "Invalid input. . ." << std::endl << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	validLoc = false;

	while (!validLoc) {
		std::cout << "Input minutes between 0 and 60: ";
		std::cin >> tempLoc.minutes;
		if (tempLoc.minutes >= 0 && tempLoc.minutes <= 60 && !std::cin.fail()) {
			validLoc = true;
		}
		else {
			std::cout << "Invalid input. . ." << std::endl << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	validLoc = false;

	while (!validLoc) {
		std::cout << "Input direction (E/W/N/S): ";
		std::cin >> tempLoc.direction;
		tempLoc.direction = std::toupper(tempLoc.direction);
		if (tempLoc.direction == 'E' || tempLoc.direction == 'W' || tempLoc.direction == 'N' || tempLoc.direction == 'S') {
			validLoc = true;
		}
		else {
			std::cout << "Invalid input. . ." << std::endl << std::endl;
		}
	}

	return tempLoc;
}