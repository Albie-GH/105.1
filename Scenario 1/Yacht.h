#ifndef YACHT_H
#define YACHT_H

#include "Location.h"

class Yacht : public Location
{
private:
    int serialNumber;
    Location latitude;
    Location longitude;

public:
    Yacht(const int);
    void get_pos(Yacht&);
    void print(const Yacht&);
};

#endif
