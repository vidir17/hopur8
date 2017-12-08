//
//  Addsalary.hpp
//  Staff
//
//
//

#ifndef Addsalary_hpp
#define Addsalary_hpp

#include <stdio.h>
#include "Employee.h"
#include "salaryrepo.h"
#include "InvalidName.h"
#include "InvalidSSN.h"
#include "InvalidWages.h"
#include "InvalidMonth.h"
#include "InvalidYear.h"
#include <iostream>
#include <vector>
#include <string>

//controller of the program

using namespace std;

class Employee;
class SalaryRepo;
class StaffUI;

class AddSalary
{
public:
    AddSalary();
    void addinfo(const Employee& employee);
    void get_Info(const Employee& employee);
    vector<Employee> withSameSSN(string ssn);
    bool validateName(const Employee& employee);
    bool validateSSN(const Employee& employee);
    bool validateWages(const Employee& employee);
    bool validateMonth(const Employee& employee);
    bool validateYear(const Employee& employee);

private:
    SalaryRepo salary;
};

#endif /* Addsalary_hpp */
