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
 socialSecurity[0] = '\0';
 wages = 0.0;
 month = 0;
 year = 2017;
}

Employee::Employee(string name, char socialSecurity[10], double wages, int month, int year)
{
    this->name = name;
    for(int i = 0; i < 10; i++){
    this->socialSecurity[i] = socialSecurity[i];
    }
    this->wages = wages;
    this->month = month;
    this->year = year;
}

string Employee::getName(){
    return this->name;

}
char Employee::getSSN(){
    return this->socialSecurity[0];
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

    out << "Employee name: " << employee.name << ", " << "SSN: ";
    for(int i = 0; i < 10; i++){
    out << employee.socialSecurity[i];
    }

    out << ", " << "Salary: " << employee.wages << ", " << "Month: " << employee.month << ", " << "Year: " << employee.year << ", " << "----------------" << endl;


    return out;
}

istream& operator >> (istream& in, Employee& employee){

    cout << "Name: " << endl;
    in >> ws;
    getline(in, employee.name);//in >> employee.name;

    //secondname


    cout << "Social security number: " << endl;

    for(int i = 0; i < 10; i++){
    in >> employee.socialSecurity[i];
    }

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
