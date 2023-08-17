// Albie Ng
// Scenario 1

#ifndef YACHT_H
#define YACHT_H

#include "Location.h"

class Yacht : public Location
{
private:
    int serialNumber;
    Location latitude;
    Location longitude;
    static int yachtCount;

public:
    Yacht(const int serialNumber = ++yachtCount) : Location(), serialNumber(serialNumber) {
    }
    void get_pos(Yacht&);
    void print(const Yacht&);
    static int getYachtCount();
};

#endif
