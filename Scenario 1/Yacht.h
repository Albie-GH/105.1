#ifndef YACHT_H
#define YACHT_H

#include "Location.h"

class Yacht : public Location
{
private:
    int number;
    Location latitude;
    Location longitude;

public:
    Yacht(int, Location, Location);
    void get_pos(Yacht&);
    void print(const Yacht&);
};

#endif
