#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Employee : public Person
{
    double salary;

public:
    Employee()
    {
        salary = 0;
    }

    void writeToFile();
    friend void readFromFileEmployee();
    friend Employee searchEmployee();
    friend void removeEmployee(int mode);
    friend void employeeEdit(Employee*, int, int);

    friend istream& operator >> (istream& input, Employee& person);
    friend ostream& operator << (ostream& output, const Employee& person);
};

void readFromFileEmployee();

#endif 


