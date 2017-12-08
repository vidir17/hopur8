//
//  UI.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef UI_hpp
#define UI_hpp
#include "Employee.hpp"
#include "Addsalary.hpp"
#include "Salerepo.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class StaffUI
{
public:
    void mainMenu();
    AddSalary addsalary();
    Employee createEmployee();
    
    
private:
    void validateInput(char input);
};

#endif /* UI_hpp */
