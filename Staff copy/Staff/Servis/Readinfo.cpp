//
//  Readinfo.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "Readinfo.hpp"
#include "Addsalary.hpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ReadInfo::ReadInfo()
{
    //ctor
}

void ReadInfo::addinfo(const Employee& employee){
    ofstream fout ("employee.txt", ios::app);
    
    if(fout.is_open())
    {
        fout << employee;
        fout.close();
    }
    else
    {
        cout << "404" << endl;
    }
    
    
}
