//
//  UI.hpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#ifndef UI_hpp
#define UI_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#include "Employee.hpp"
#include "Addsalary.hpp"

class AddSalary;
class Employee;
class SalaryRepo;
using namespace std;

class StaffUI
{
public:
    StaffUI();
    //StaffUI(char choice);
    //char getChoice();
    void mainMenu();
    
    
    Employee addInfo();
    AddSalary addsalary();
    Employee createEmployee();
    
    
private:
    //char choice;
    void validateInput(char input);
    //Employee employee;

    
};

#endif /* UI_hpp */
