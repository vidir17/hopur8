#ifndef ADDSALARY_H
#define ADDSALARY_H
#include "employee.h"
#include "salaryrepo.h"



class AddSalary
{
    public:
        AddSalary();
        void addInfo(const Employee& employee);

    private:
        SalaryRepo salary_repo;

};

#endif // ADDSALARY_H
