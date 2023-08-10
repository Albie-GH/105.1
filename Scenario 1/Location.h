#ifndef LOCATION_H
#define LOCATION_H

class Location
{
public: // Public variables due to use of the 'tempLoc' variable in Yacht::get_pos()
    int degrees;
    float minutes;
    char direction;
    Location();
    Location getpos();
};

#endif