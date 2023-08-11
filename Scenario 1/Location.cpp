#include "Yacht.h"
#include "Location.h"
#include <iostream>
#include <cctype>

// Function to retrieve and return individaul Location coordinates
Location Location::getpos() {
	Location tempLoc; // temp variable to return
	bool validLoc = false; // bool for input validation

	// 3 do-while loops for degrees, minutes and direction inputs with validation checks
	do {
		std::cout << "Input degrees between 0 and 180: ";
		std::cin >> tempLoc.degrees;
		if (tempLoc.degrees < 0 || tempLoc.degrees > 180) {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
		}
		else {
			validLoc = true;
		}
	} while (!validLoc);

	do {
		std::cout << "Input minutes between 0 and 60: ";
		std::cin >> tempLoc.minutes;
		if (tempLoc.minutes < 0 || tempLoc.minutes > 60) {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
		}
		else {
			validLoc = true;
		}
	} while (!validLoc);

	do {
		std::cout << "Input direction (E/W/N/S): ";
		std::cin >> tempLoc.direction;
		tempLoc.direction = std::toupper(tempLoc.direction);
		if (tempLoc.direction != 'E' && tempLoc.direction != 'W' && tempLoc.direction != 'N' && tempLoc.direction != 'S') {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
		}
		else {
			validLoc = true;
		}
	} while (!validLoc);

	return tempLoc;
}