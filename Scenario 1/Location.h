#ifndef LOCATION_H
#define LOCATION_H

class Location
{
public: // Variables are public due to use of the 'tempLoc' variable in Yacht::get_pos()
    int degrees;
    float minutes;
    char direction;
    Location(int degrees = 0, float minutes = 0.0f, char direction = 'X')
        : degrees(degrees), minutes(minutes), direction(direction) {}
    Location getpos();
};

#endif