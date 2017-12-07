//
//  Salerepo.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef Salerepo_hpp
#define Salerepo_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include "Employee.hpp"
using namespace std;
class Employee;
class AddSalary;


class SalaryRepo
{
public:
    SalaryRepo();
    void addInfo(const Employee& employee);
    void getInfo(const Employee& employee);
    //        void addInfo(const Employee& employee);
    
private:
    //SalaryRepo salary_repo;
};

#endif /* Salerepo_hpp */
