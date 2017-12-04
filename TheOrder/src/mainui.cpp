#include <iostream>
#include "mainui.h"
<<<<<<< HEAD
#include "matsedill.h"

using namespace std;
=======
//#include "matsedill.h"
#include "vidskiptavinur.h"

>>>>>>> 4c2ff8d71bb0cafe2694fef5b6d5963f6c69ee98
MainUI::MainUI()
{
  choice = 0;
    password = "";
}
MainUI::MainUI(int choice, string password){
        this->choice = choice;
        this->password = password;
}

istream& operator >> (istream& in, MainUI& mainUI){
        in >> mainUI.choice;
        if(mainUI.choice == 1){ //Panta pitsu user valinn
        system ("CLS");
        cout << "1. Matsedill\n2. Bua til pizzu" << endl;
        in >> mainUI.choice;
        if(mainUI.choice == 1){
            Vidskiptavinur vidskiptavin; //Vidskiptavinur breyta , Matsedill matsedill
            //cout << vidskiptavin << endl;
            in >> vidskiptavin;

        }
        }
        if(mainUI.choice == 2){ //Umsjonarmadur valinn
        system ("CLS");
        cout << "Enter your password" << endl;
        cout << "Password: ";
        while(mainUI.password != "azziP"){

            cin >> mainUI.password;
            if(mainUI.password == "azziP"){
                cout << "correct";//inn i klasa
            }else{
                system("CLS");
                cout << "wrong password" << endl;
                cout << "Please try again: ";
            }
            //////////////////////////////////klasifyrir umsjon
        }

        }
        if(mainUI.choice == 3){ //Bakari
        system ("CLS");
        cout << "Enter your password" << endl;
        cout << "Password: ";
        while(mainUI.password != "azziP"){

            cin >> mainUI.password;
            if(mainUI.password == "azziP"){
                cout << "correct";//inn i klasa
            }else{
                system("CLS");
                cout << "wrong password" << endl;
                cout << "Please try again: ";
            }
            //////////////////////////////////klasifyrir bakari
        }

        }
        if(mainUI.choice == 4){ //Solumadur afgreidslu
        system ("CLS");
        cout << "Enter your password" << endl;
        cout << "Password: ";
        while(mainUI.password != "azziP"){

            cin >> mainUI.password;
            if(mainUI.password == "azziP"){
                cout << "correct";//inn i klasa
            }else{
                system("CLS");
                cout << "wrong password" << endl;
                cout << "Please try again: ";
            }
            //////////////////////////////////klasifyrir solumadur afgreidslu
        }

        }
        return in;
    }
    ostream& operator << (ostream& out, MainUI& mainUI){
        out << "Velkomin/n a Pizza Menntavegi 1" << endl;
        out << endl;
        out << "       ###############" << endl;
        out << "       #PONTUNARKERFI#" << endl;
        out << "       ###############" << endl;
        out << "1. Panta pizzu" << endl;
        out << "2. Umsjonarmadur" << endl;
        out << "3. Bakarar" << endl;
        out << "4. Starfsfolk afgreidslu" << endl;
        out << endl;
        out << "Type number: ";
        return out;
    }

