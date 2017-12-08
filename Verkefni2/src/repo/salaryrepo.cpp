//
//  Salerepo.cpp
//  Staff
//
//
//
//

#include "Salaryrepo.h"
#include <fstream>
#include <iostream>
void SalaryRepo::addInfo(const Employee& employee){

    ofstream fout;
    fout.open("Salary.txt", ios::app);
    if(fout.is_open())
    {
        fout << employee;
        fout.close();
    }
    else {
        cout << "404" << endl;
    }
 }
void SalaryRepo::getInfo(const Employee& employee){
    string ch;
    ifstream fin;
    fin.open("Salary.txt", ios::app);
    if(fin.is_open()){
         while(!fin.eof())
         {
             //fin.get(ch);
             getline(fin, ch, ',');

             cout << ch << endl;
         }
     }
    else
    {
        cout << "404" << endl;
    }
        fin.close();
}
