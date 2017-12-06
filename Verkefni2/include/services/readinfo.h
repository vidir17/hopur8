#ifndef READINFO_H
#define READINFO_H
#include "employee.h"

using namespace std;

class Employee;
class ReadInfo
{
    public:
        ReadInfo();
        void getInfo(const Employee& employee);
        void ReadInfo(const Employee& employee);

    private:
        SalaryRepo salary;
};

#endif // READINFO_H
