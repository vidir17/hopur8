#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "addsalary.h"

using namespace std;


class Employee
{
    public:
        Employee();
        Employee(string name, string socialSecurity, double wages, int month, int year);
        string getName();
        string getSSN();
        double getWages();
        int getMonth();
        int getYear();

        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);




    private:
        string name;
        string socialSecurity;
        double wages;
        int month;
        int year;

};

#endif // EMPLOYEE_H
