//
//  Salerepo.hpp
//  Staff
//
//  Created by Hlynur V��isson on 07/12/2017.
//  Copyright � 2017 Hlynur V��isson. All rights reserved.
//

#ifndef Salerepo_hpp
#define Salerepo_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;
#include "Employee.h"
class Employee;
class SalaryRepo
{
public:
    void addInfo(const Employee& employee);
    void getInfo(const Employee& employee);
    //void addInfo(const Employee& employee);
private:

};

#endif /* Salerepo_hpp */
