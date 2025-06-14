#ifndef HATCHBACK_H
#define HATCHBACK_H

#include "Sedan.h"
class Hatchback : public Vehicle
{
protected:
    int airBags;
    string powerLocks;

public:
    Hatchback()
    {
        airBags = 0;
        powerLocks = " ";
        vehicleType = "HatchBack";

    }


    void vehicleReturn();
    void dataRecord();
    Hatchback dataReading(string temp);
    friend void removeHatchBack(string regNum, string numPlateChange, int);
    friend void hatchBackEdit(Hatchback*, int, int);


    friend ostream& operator << (ostream&, const Hatchback&);
    friend istream& operator >> (istream&, Hatchback&);

};


#endif 


