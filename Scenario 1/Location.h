#ifndef LOCATION_H
#define LOCATION_H

class Location
{
protected:
    int degrees;
    float minutes;
    char direction;

public:
    Location getpos();
};

#endif