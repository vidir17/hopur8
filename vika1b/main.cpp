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

            getline(cin, input);
            if (input.compare(0,1,"\\") == 0) {  //utaf string include .compare
                break;
            }else{
            fout << input << endl;
            }
            fout.close();
    }
        }else{
            cout << "File could not be opened!" << endl;
            run = false;
        }


    return 0;
}
