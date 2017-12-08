//
//  Employee.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Addsalary.h"

using namespace std;

class Employee
{
public:
    Employee();
    Employee(string name, char socialSecurity[10], double wages, int month, int year);
    string getName();
    char getSSN();
    double getWages();
    int getMonth();
    int getYear();

    friend ostream& operator << (ostream& out, const Employee& employee);
    friend istream& operator >> (istream& in, Employee& employee);

private:
    string name;
    char socialSecurity[10];
    double wages;
    int month;
    int year;


};
#endif /* Employee_hpp */
