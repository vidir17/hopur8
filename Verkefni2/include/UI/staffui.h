//samskipti við notanda
//  valmöguleikar gefnir og kannað hvort rétt hafi verið valið
//


#ifndef UI_hpp
#define UI_hpp
#include "Employee.h"
#include "Addsalary.h"
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
