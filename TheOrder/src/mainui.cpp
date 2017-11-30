#include <iostream>
#include "mainui.h"
#include "matsedill.h"
using namespace std;
MainUI::MainUI()
{
    choice = 0;
}
MainUI::MainUI(int choice){
        this->choice = choice;
}

istream& operator >> (istream& in, MainUI& mainUI){
        in >> mainUI.choice;
        if(mainUI.choice == 1){
        system ("CLS");
        cout << "1. Matsedill\n2. Bua til pizzu" << endl;
        in >> mainUI.choice;
        if(mainUI.choice == 1){
            Matsedill matsedill;
            cout << matsedill << endl;
            in >> matsedill;
            return in;
        }
        }
        if(mainUI.choice == 2){
        system ("CLS");

        }
        return in;
    }
    ostream& operator << (ostream& out, MainUI& mainUI){
        out << "Velkomin/n a Pizza Menntavegi 1" << endl;
        out << endl;
        out << "       ##############" << endl;
        out << "       #PANTA PITSU?#" << endl;
        out << "       ##############" << endl;
        out << "          Yttu a 1" << endl;

        out << endl;
        out << endl;
        out << "Fyrir starfsfolk yttu a 0";
        out << endl;
        out << "1 eda 0: ";
        return out;
    }

