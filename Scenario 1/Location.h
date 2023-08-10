#ifndef LOCATION_H
#define LOCATION_H

class Location
{
public:
    int degrees;
    float minutes;
    char direction;

public:
    Location(int, float, char);
    Location getpos();
};

#endif