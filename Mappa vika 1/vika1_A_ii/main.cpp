#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string input;

    bool run = true;
    fout.open("Data.txt", ios::app); //ios::app leyfir ad baeta aftan vid

        if(fout.is_open()){
        while(run){

            getline(cin, input); //thetta er i raun cin fyrir input og haegt ad skrifa i heila linu adur en ytt er a enter
            if (input.compare(0,1,"\\") == 0) {  //utaf string include .compare
                break; //ef thad er skrifad "backslash" sem er "\" tha endar forritid
            }else{
            fout << input << endl;
            }

    }
        }else{
            cout << "File could not be opened!" << endl;
            run = false;
        }
        fout.close();



    return 0;
}
