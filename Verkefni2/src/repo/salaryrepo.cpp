#include "salaryrepo.h"

SalaryRepo::SalaryRepo(){
    //ctor
}

void SalaryRepo::addInfo(const Employee& employee){

    ofstream fout;
    fout.open("Salary.txt", ios::app);
    if(fout.is_open()){
        fout << employee;
        fout.close();
    }
    else {
        //throw error
    }
}
