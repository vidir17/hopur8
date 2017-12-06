#ifndef STAFFUI_H
#define STAFFUI_H

#include <iostream>
#include <string>

#include "employee.h"
#include "addsalary.h"



class StaffUI
{
    public:
        StaffUI();
        //StaffUI(char choice);
        //char getChoice();
        void mainMenu();

    private:
        //char choice;
        void validateInput(char input);
        AddSalary addInfo();
        AddSalary addsalary();
        //Employee createEmployee();

};

#endif // STAFFUI_H
