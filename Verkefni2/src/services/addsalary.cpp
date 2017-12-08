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
    if(validateName(employee) && validateSSN(employee) && validateWages(employee) && validateMonth(employee) && validateYear(employee)){

        salary_repo.addInfo(employee);
    }

}
void AddSalary::get_Info(const Employee& employee)
{
    SalaryRepo salary_repo;
    salary_repo.getInfo();
}

vector<Employee> AddSalary::withSameSSN(string ssn){
    return salary.withSameSSN(ssn);
}

bool AddSalary::validateName(const Employee& employee){
    string name = employee.getName();

    for(unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i]))
            throw InvalidName();
    }

    return true;
}
bool AddSalary::validateSSN(const Employee& employee){
     string ssn = employee.getSSN();

    for(unsigned int i = 0; i < ssn.length(); i++){
        if(isdigit(ssn[i]))
            throw InvalidSSN();
    }

    return true;

}

bool AddSalary::validateWages(const Employee& employee){
    double wage = employee.getWages();

    if(wage < 0 || wage > 5000000){
            throw InvalidWages();
    }
    return true;
}
bool AddSalary::validateMonth(const Employee& employee){
    int mon = employee.getMonth();

    if(mon < 1 || mon > 12){
            throw InvalidMonth();
    }
    return true;

}
bool AddSalary::validateYear(const Employee& employee){
    int y = employee.getYear();
    if(y != 2017){
        throw InvalidYear();
    }
    return true;
    }
