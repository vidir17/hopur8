#ifndef STAFFUI_H
#define STAFFUI_H

#include <iostream>
#include <string>
using namespace std;

#include "employee.h"
#include "addsalary.h"

<<<<<<< HEAD
class AddSalary;
class Employee;
class SalaryRepo;
=======
using namespace std;
>>>>>>> af4cb3065bbe33d6907de8833fd1a99533bc34ad

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
<<<<<<< HEAD
        Employee addInfo();
        AddSalary addsalary;
        Employee createEmployee();
        //Employee employee;


=======
        AddSalary addInfo();
        AddSalary addsalary();
        Employee createEmployee();
>>>>>>> af4cb3065bbe33d6907de8833fd1a99533bc34ad

};

#endif // STAFFUI_H
