#include "Yacht.h"
#include "Location.h"
#include <iostream>

Location Location::getpos() {
	Location tempLoc;
	bool validLoc = true;
	do {
		std::cout << "Input degrees between 0 and 180: ";
		std::cin >> tempLoc.degrees;
		if (tempLoc.degrees < 0 || tempLoc.degrees > 180) {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
			break;
		}

	} while (!validLoc);

	do {
		std::cout << "Input minutes between 0 and 60: ";
		std::cin >> tempLoc.minutes;
		if (tempLoc.minutes < 0 || tempLoc.minutes > 60) {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
			break;
		}
	} while (!validLoc);

	do {
		std::cout << "Input direction (E/W/N/S): ";
		std::cin >> tempLoc.direction;
		if (tempLoc.direction != 'E' || tempLoc.direction != 'W' || tempLoc.direction != 'N' || tempLoc.direction != 'S') {
			validLoc = false;
			std::cout << "Invalid input. . ." << std::endl << std::endl;
			break;
		}
	} while (!validLoc);

	return tempLoc;
}