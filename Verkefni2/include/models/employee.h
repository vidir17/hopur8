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
//the model of the program
class Employee
{
public:
    Employee();
    Employee(string name, string socialSecurity, double wages, int month, int year);
    string getName()const;
    string getSSN()const;
    double getWages()const;
    int getMonth()const;
    int getYear()const;
    void setName(string newname);
    void setSNN(string ssn);
    //void setWages(double wages);
    //void setMonth(int month);
    //void setYear(int year);

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
