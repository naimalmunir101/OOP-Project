#ifndef SEDAN_H
#define SEDAN_H

#include "SportsCar.h"

class Sedan : public Vehicle
{
protected:
    int airBags;
    string powerLocks;
    string powerWindows;
public:
    Sedan()
    {
        airBags = 0;
        powerLocks = "";
        powerWindows = "";
        vehicleType = "Sedan";
    }

    void vehicleReturn();
    Sedan dataReading(string temp);
    void dataRecord();

    friend void removeSedan(string, string, int);
    friend void sedanEdit(Sedan*, int, int);


    friend istream& operator >> (istream&, Sedan&);
    friend ostream& operator << (ostream&, const Sedan&);

};




#endif 
