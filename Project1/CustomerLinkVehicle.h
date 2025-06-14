#ifndef CUSTOMERLINKVEHICLE_H
#define CUSTOMERLINKVEHICLE_H

#include "Hatchback.h"
#include "Bus.h"

template<typename T>
class CusVeh
{ //This class will be used for association and aggregation
    Customer* customer;
    T* vehicle;
public:
    CusVeh()
    {
        customer = nullptr;
        vehicle = nullptr;
    }
    explicit CusVeh(Customer* temp, T* temp2)
    {
        customer = temp;
        vehicle = temp2;
    }

    void setCustomer(Customer* temp)
    {
        customer = temp;
    }

    void setVehicle(T* temp)
    {
        vehicle = temp;
    }

    void filing()
    {
        customer->setVehicleType(vehicle->getVehicleType());
        customer->writeToFile();
        vehicle->setNumPlate(customer->getNumberPlate());
        vehicle->dataRecord();
    }
};

#endif 
