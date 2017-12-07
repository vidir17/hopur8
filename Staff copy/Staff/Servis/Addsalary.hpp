//
//  Addsalary.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef Addsalary_hpp
#define Addsalary_hpp

#include <stdio.h>
#include "Employee.hpp"
#include "Salerepo.hpp"
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
     
private:
   
};

#endif /* Addsalary_hpp */
