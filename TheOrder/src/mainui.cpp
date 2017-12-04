#include <iostream>
#include "mainui.h"
#include "matsedill.h"
#include "vidskiptavinur.h"


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

         out << "                        ___" << endl;
         out << "                 |  ~~--." << endl;
         out << "                 |%=@%%/" << endl;
         out << "                 |o%%%/" << endl;
         out << "              __ |%%o/" << endl;
         out << "        _,--~~ | |(_/ ._" << endl;
         out << "     ,/'  m%%%%| |o/ /  `\." << endl;
         out << "    /' m%%o(_)%| |/ /o%%m `\ " << endl;
         out << "  /' %%@=%o%%%o|   /(_)o%%% `\ " << endl;                  //credit fyrir pizza art http://ascii.co.uk/art/pizza
         out << " /  %o%%%%%=@%%|  /%%o%%@=%%  \ " << endl;
         out << "|  (_)%(_)%%o%%| /%%%=@(_)%%%  |" << endl;
         out << "| %%o%%%%o%%%(_|/%o%%o%%%%o%%% |" << endl;
         out << "| %%o%(_)%%%%%o%(_)%%%o%%o%o%% |" << endl;
         out << "|  (_)%%=@%(_)%o%o%%(_)%o(_)%  |" << endl;
         out << " \ ~%%o%%%%%o%o%=@%%o%%@%%o%~ /" << endl;
         out << "  \. ~o%%(_)%%%o%(_)%%(_)o~ ,/" << endl;
         out << "    \_ ~o%=@%(_)%o%%(_)%~ _/" << endl;
         out << "      `\_~~o%%%o%%%%%~~_/'" << endl;
         out << "         `--..____,,--'" << endl;

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
        out << "             11" << endl;

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

