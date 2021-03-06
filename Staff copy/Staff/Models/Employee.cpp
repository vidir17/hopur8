//
//  Employee.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee(){
 name = "";
 socialSecurity = "";
 wages = 0.0;
 month = 0;
 year = 2017;
}

Employee::Employee(string name, string socialSecurity, double wages, int month, int year)
{
    this->name = name;
    this->socialSecurity = socialSecurity;
    this->wages = wages;
    this->month = month;
    this->year = year;
}

string Employee::getName(){
    return this->name;
    
}
string Employee::getSSN(){
    return this->socialSecurity;
}
double Employee::getWages(){
    return this->wages;
    
}
int Employee::getMonth(){
    return this->month;
}
int Employee::getYear(){
    return this->year;
}
ostream& operator << (ostream& out, const Employee& employee){
    out << employee.socialSecurity << ", " << employee.name << ", " << employee.wages << ", " << employee.month << ", " << employee.year << endl;
    
    return out;
}

istream& operator >> (istream& in, Employee& employee){
    in >> employee.name >> employee.socialSecurity >> employee.wages >> employee.month >> employee.year;
    
    return in;
}
