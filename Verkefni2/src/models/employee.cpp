//
//  Employee.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//
//

#include "Employee.h"
//#include <stdlib.h>
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
    return name;

}
string Employee::getSSN(){
    return socialSecurity;
}
double Employee::getWages(){
    return wages;

}
int Employee::getMonth(){
    return month;
}
int Employee::getYear(){
    return year;
}
ostream& operator << (ostream& out, const Employee& employee){

    out << employee.name << "," << employee.socialSecurity << "," << employee.wages << "," << employee.month << "," << employee.year << endl;

    return out;
}

istream& operator >> (istream& in, Employee& employee){

    cout << "Name: " << endl;
    in >> ws;
    getline(in, employee.name);//in >> employee.name;

    //secondname


    cout << "Social security number: " << endl;
    in >> employee.socialSecurity;

    cout << "Wages: " << endl;
    in >> employee.wages;
    //cin >> wages;

    cout << "Month: " << endl;

    in >> employee.month;
    cout << "Year: " << endl;
    in >> employee.year;
    //cin >> year;*/



    return in;
}

void Employee::setName(string newname){
    name = newname;
}
