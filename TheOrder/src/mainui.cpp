#include <iostream>
#include "mainui.h"
#include "matsedill.h"
#include "vidskiptavinur.h"
#include "umsjon.h"
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
            Matsedill matsedill; //Vidskiptavinur breyta , Matsedill matsedill
            //cout << vidskiptavin << endl;
            in >> matsedill;

        }
        }
        if(mainUI.choice == 2){ //Umsjonarmadur valinn
        system ("CLS");
        cout << "Enter your password" << endl;
        cout << "Password: ";
        while(mainUI.password != "azziP"){

            cin >> mainUI.password; ////////////////////////breyta i char??? thegar ein char er skradur, prentast ut stjarna, option til ad eyda?

            if(mainUI.password == "azziP"){

                Umsjon umsjon;
                cout << umsjon;
                in >> umsjon;
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
       // out << "       ###############" << endl;
        //out << "       #PONTUNARKERFI#" << endl;
       // out << "       ###############" << endl;
        out << "1. Panta pizzu" << endl;
        out << "2. Umsjonarmadur" << endl;
        out << "3. Bakarar" << endl;
        out << "4. Starfsfolk afgreidslu" << endl;
        out << endl;
        out << "             88" << endl;
        out << endl;

        out << " 8b,dPPYba,  88 888888888 888888888 ,adPPYYba, " << endl;       //credit fyrir pizza art http://ascii.co.uk/art/pizza
        out << " 88P'     8a 88      a8P       a8P  ""       `Y8 " << endl;
        out << " 88       d8 88   ,d8P'     ,d8P'   ,adPPPPP88" << endl;
        out << " 88b,   ,a8  88 ,d8       ,d8       88,    ,88" << endl;
        out << " 88`YbbdP '  88 888888888 888888888  `8bbdP Y8  " << endl;
        out << " 88" << endl;
        out << " 88" << endl;
        out << endl;
        out << "Type number: ";
        return out;
}
