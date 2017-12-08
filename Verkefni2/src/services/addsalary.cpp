//
//  Addsalary.cpp
//  Staff
//
//

#include "Addsalary.h"
#include "Salaryrepo.h"
AddSalary::AddSalary()
{
    //ctor
}
void AddSalary::addinfo(const Employee& employee)
{
    SalaryRepo salary_repo;
    salary_repo.addInfo(employee);
}
void AddSalary::get_Info(const Employee& employee)
{
    SalaryRepo salary_repo;
    salary_repo.getInfo(employee);
}
