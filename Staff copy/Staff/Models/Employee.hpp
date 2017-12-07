//
//  Employee.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Addsalary.hpp"

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
    
    
    string name;
    string socialSecurity;
    double wages;
    int month;
    int year;
    
private:
    
    
};
#endif /* Employee_hpp */
