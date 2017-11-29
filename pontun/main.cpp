//
//  main.cpp
//  Matseðill
//
//  Created by Hlynur Víðisson on 29/11/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[])
{
    string input;
    ofstream fout;
    ifstream fin;
    int menuItemz = 0;
    double price[menuItemz];
    fout.open("pontun.txt", ios::app);

    if(fout.is_open())
    {
        cout << "How much into menu?" << endl;
        cin >> menuItemz;
        fout << "Pizza \t \tPrice" << endl;
        for(int i = 0; i < menuItemz; i++)
        {
            cin >> input;
            cin >> price[i];
            fout << input << " \t ";
            fout << price[i] << endl;

        }
            cout << "Pizza \t Price" << endl;
        for(int i = 0; i < menuItemz; i++)
        {
                cout << input << "\t " << price[i] << endl;
        }
    }
    else
    {
        cout << "ERROR, YOU FUCKED UP, YOU LITTLE SHIT" << endl;
    }

    fout.close();
    return 0;
}
