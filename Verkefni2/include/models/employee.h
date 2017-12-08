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
    void setName(string newname);

    friend ostream& operator << (ostream& out, const Employee& employee);
    friend istream& operator >> (istream& in, Employee& employee);

private:
    string name;
    string socialSecurity;
    double wages;
    int month;
    int year;


};
#endif /* Employee_hpp */
