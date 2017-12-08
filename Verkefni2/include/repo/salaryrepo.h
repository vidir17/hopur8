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
#include "Employee.h"
#include <vector>
#include <sstream>

using namespace std;

class SalaryRepo
{
public:
    void addInfo(const Employee& employee);
    void getInfo();
    //void addInfo(const Employee& employee);
    vector<Employee> withSameSSN(string ssn);
private:
    vector<Employee> allemployees;
    vector<Employee> onlyWithSameSSN;
};

#endif /* Salerepo_hpp */
