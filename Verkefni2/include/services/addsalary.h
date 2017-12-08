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
#include <iostream>

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

private:

};

#endif /* Addsalary_hpp */
