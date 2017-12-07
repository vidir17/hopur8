//
//  Readinfo.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef Readinfo_hpp
#define Readinfo_hpp

#include <stdio.h>
#include "Employee.hpp"

using namespace std;

class Employee;
class ReadInfo
{
public:
    ReadInfo();
    void getInfo(const Employee& employee);
    void addinfo(const Employee& employee);
    
private:
    SalaryRepo salary;
};
#endif /* Readinfo_hpp */
