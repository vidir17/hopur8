#include "gagnasafn.h"
#include <fstream>
Gagnasafn::Gagnasafn()
{
    //ctor
}

void Gagnasafn::printfirst(){
    system("CLS");

     cout << "Matsedill" << endl;
     cout << "veldu pizzu" << endl;
     cout << "---------------" << endl;
     cout << endl;
     get_txt();
}
void Gagnasafn::get_txt(){

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
            while(counter < 7){ //7 l�nur
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
void Gagnasafn::insert_new_pizza(){
    ofstream fout;
    fout.open("out.txt", ios::app);
    string val;
    fout << endl;
    fout << endl;
    fout << "Nr." << endl;
    fout << "****" << endl;
    cout << "Pizza: ";
    cin >> val;
    fout << "Pizza: " << val << endl;
    cout << "Alegg: ";
    cin >> val;//getline(cin, val));
    fout << "Alegg: " << val << endl;
    cout << "Staerd: ";
    cin >> val;
    fout << "Staerd: " << val << endl;
    cout << "Verd: ";
    cin >> val;
    fout << "Verd: " << val << endl;
    fout << endl;
    //Write string to the file.


    fout.close();
}
