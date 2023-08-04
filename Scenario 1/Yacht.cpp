#include "Yacht.h"
#include "Location.h"
#include <iostream>

Yacht::Yacht(int number, Location latitude, Location longitude)
	: number(number), latitude(latitude), longitude(longitude) {}

void Yacht::get_pos(Yacht& yacht) {
	Location tempLoc = Location::getpos();


	if (tempLoc.direction == 'N' || tempLoc.direction == 'S') {
		yacht.latitude = tempLoc;
	}
}

void print(const Yacht&) {

}