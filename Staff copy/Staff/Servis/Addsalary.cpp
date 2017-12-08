//
//  Addsalary.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "Addsalary.hpp"
#include "Salerepo.hpp"
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
