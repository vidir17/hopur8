#include <iostream>
#include <fstream>
#include <string>
using namespace std;

///thetta er verkefni A) Textaskrar i)
//Ekki var bedid um ad utfaera i foll og heldur ekki klasa
int main()
{

    string c;
    ifstream fin;
    bool run = true;
    int counter = 0;
    char val;
    fin.open("dummyFile.txt"); //opna skra sem heitir dummyFile.txt

    if(fin.is_open()) //a medan skrain er opin
    {
        while(!fin.eof()){ //ef thad eru engar fleiri linur til ad birta tha breakar keyrslan a forritinu
        while(counter < 10){ //10 linur i einu
            getline(fin, c); //naer i linu
            cout << c << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        cout << "Do you wish to continue (y/n)?" << endl; //Thetta synir textan "Do you wish to continue (y/n)?" sem spyr notanda hvort
        //..hvort notandi vilji halda afram
        cin >> val; //Gefum notanda val um ad velja char til ad skra inn og yta svo a enter
        if(val == 'y' || val == 'Y'){ //Ef notandi velur y eda stort Y tha prentar ut naestu 10 linur (nema thad nai enda)
                counter = 0;

        }
        else if(val == 'n' || val == 'N'){ //Ef notandi velur n eda stort N tha beakar forritid
            run = false;
            break;
        }
        }
    fin.close();
    }
    else
    {
        cout << "Unable to read from file!" << endl; //ef skrain er ekki til tha kemur unable to read from file!
    }
    return 0; //Credit fyrir soguna ma finna i somu moppu og dummyFile.txt, credit skrain heitir dummyFileCredits.txt
}
