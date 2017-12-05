#include <iostream>
#include "matsedill.h"
#include "mainui.h"
#include <fstream>//taka ut ef faert i class
using namespace std;
Matsedill::Matsedill()
{
    getChoice = 0;
}
void Matsedill::get_txt(){

    ofstream fout;
    fout.open("out.txt", ios::app); //opna out.txt til ad skrifa
    //fout.write("hello");
    fout << ""; //skrifar inn i textaskjalid out.txt
    fout.close();
    ifstream fin;
    fin.open("out.txt");
    string ch;
    char ch1[100];
    int counter = 0;
    int input;
    int counter2 = 0;
    int teljari = 1;

    while(fin.getline(ch1, 100))
    {
      cout << ch1 << endl;
    }
    fin.close();
    cin >> input;
        fin.open("out.txt");
        if(input == 1){

            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << endl;
            while(counter < 7){ //7 línur
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        }
        counter = 0;
        if(input > 1){
        while(input > teljari){
            counter2 += 7;
            while(counter < counter2){ //10 linur i einu

            getline(fin, ch); //naer i linu

             //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        teljari++;
        }
            counter = 0;
            counter2 = 7;
            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << endl;
            while(counter < counter2){ //10 linur i einu
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
            if(fin.eof()){
                break;
            }
        }
        }
    fin.close();
}
 ostream& operator << (ostream& out, Matsedill& matsedill){
     system("CLS");
     out << "Matsedill" << endl;
     out << "veldu pizzu" << endl;
     out << "---------------" << endl;
     out << endl;
     matsedill.get_txt();
     return out;
 }
 istream& operator >> (istream& in, Matsedill& matsedill){
     cout << matsedill;
     return in;
 }
