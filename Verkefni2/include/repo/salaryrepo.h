#ifndef SALARYREPO_H
#define SALARYREPO_H
#include <fstream>

#include "employee.h"

using namespace std;
class Employee;
class AddSalary;


#include <iostream>
using namespace std;

class SalaryRepo
{
    public:
        SalaryRepo();

        void addInfo(const Employee& employee);
        //void getInfo(const Employee& employee);

//        void addInfo(const Employee& employee);


    private:

};

#endif // SALARYREPO_H
