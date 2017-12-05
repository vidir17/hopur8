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

    while(fin.getline(ch1, 100))
    {

        //for(int i = 0; i < 100; i++){
      cout << ch1 << endl;

    }
    fin.close();
    cin >> input;

         //if(fin.is_open()) //a medan skrain er opin
    //{
         //ef thad eru engar fleiri linur til ad birta tha breakar keyrslan a forritinu
        fin.open("out.txt");
        if(input == 1){

            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << endl;
            while(counter < 7){ //10 linur i einu
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        }
        if(input == 2){
                while(counter < 7){ //10 linur i einu
            getline(fin, ch); //naer i linu
             //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << endl;


            while(counter < 14){ //10 linur i einu
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        }



    //}
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
     //cout gagnagrunni






     return in;
 }


/*
istream& operator >> (istream& in, Matsedill& matsedill){
        in >> matsedill.choice;

        system ("CLS");

        }
        return in;
    }
    ostream& operator << (ostream& out, MainUI& mainUI){

        return out;
    }
*/
