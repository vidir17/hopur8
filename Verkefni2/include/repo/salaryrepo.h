#ifndef SALARYREPO_H
#define SALARYREPO_H
#include <fstream>

#include "employee.h"

class SalaryRepo
{
    public:
        SalaryRepo();
        void addInfo(const Employee& employee);

    private:
};

#endif // SALARYREPO_H
