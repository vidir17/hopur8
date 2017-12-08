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
void SalaryRepo::getInfo(){
    allemployees.clear();
    string ch;
    ifstream fin;
    string file;
    fin.open("Salary.txt", ios::app);
    if(fin.is_open()){
         while(!fin.eof())
         {
             fin >> file;
             int counter = 0;
             stringstream stream(file);
             string item;
             string name = "";
             string ssn = "";
             double wages = 0.0;
             int month = 0;
             int year = 0;

             while(getline(stream, item, ',')){
                if (counter == 0){
                    //E.setName(item); Svona mundið þið kalla á set föllin
                    name = item;
                }
                else if (counter == 1){
                    ssn = item;
                }
                else if (counter == 2){
                    stringstream testing(item);
                    testing >> wages;
                }
                else if (counter == 3){
                    stringstream testing(item);
                    testing >> month;
                }
                else if (counter == 4){
                    stringstream testing(item);
                    testing >> year;
                }
                counter++;
             }
             Employee E(name, ssn, wages, month, year);
             allemployees.push_back(E);
         }
         //cout << "Lenght of vector now is: " << allemployees.size() << endl;
     }
    else
    {
        cout << "404" << endl;
    }
        fin.close();
}

vector<Employee> SalaryRepo::withSameSSN(string ssn){
    onlyWithSameSSN.clear();
    getInfo();

    cout << "is size of vector bigger than 0: " << allemployees.size() << endl;

    for (unsigned int i = 0; i < allemployees.size(); i++){
        if (allemployees[i].getSSN() == ssn){

            onlyWithSameSSN.push_back(allemployees[i]);
        }
    }
    return onlyWithSameSSN;
}
