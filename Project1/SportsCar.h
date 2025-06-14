#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Vehicle.h"

class SportsCar :public Vehicle
{
    string turboType;
    string spoilerType;
public:
    SportsCar()
    {
        turboType = "";
        spoilerType = "";
        vehicleType = "SportsCar";
    }

    void vehicleReturn();

    void dataRecord();

    SportsCar dataReading(string temp);

    friend void removeSportsCar(string regNum, string numPlateChange, int);
    friend void sportsCarEdit(SportsCar*, int, int);

    friend ostream& operator << (ostream&, const SportsCar&);
    friend istream& operator >> (istream&, SportsCar&);

};


#endif 