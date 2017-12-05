#include <iostream>
#include "staff.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    Staff input;
    cin >> input;
    ofstream fout;
    fout.open("binary.dat", ios::binary|ios::app); //opnar dat skra
    fout.write((char*)(&input), sizeof(Staff)); //gerir kleift ad setja inn a binary format
    fout.close();//lokar skranni


    fin.open("binary.dat", ios::binary|ios::app);

    fin.seekg(0,fin.end);
    int length = fin.tellg()/sizeof(Staff);
    fin.seekg(0,fin.beg);
    Staff *data = new Staff[length];

     if(fin.is_open()){

     fin.read((char*)data, sizeof(Staff)*length);
     for(int i = 0; i < length; i++){
        cout << data[i] << endl;


     }


    }else{
        cout << "could not open file" << endl;
    }


    fin.close();

    delete[] data;

    return 0;
}
