//
//  Salerepo.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "Salerepo.hpp"
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
    char ch;
    ifstream fin;
    fin.open("Salary.txt", ios::app);
    if(fin.is_open()){
         while(!fin.eof())
         {
             fin.get(ch);
             cout << ch << endl;
         }
     }
    else
    {
        cout << "404" << endl;
    }
        fin.close();
}
