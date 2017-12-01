#include <iostream>
#include "matsedill.h"
#include "mainui.h"
using namespace std;
Matsedill::Matsedill()
{
    getChoice = 0;

}
Matsedill::Matsedill(int getChoice){
        this->getChoice = getChoice;

}
 ostream& operator << (ostream& out, Matsedill& matsedill){
     system("CLS");

     out << "Pizza med pepperoni og skinku" << endl;
     out << "Pizza margarita" << endl;
     out << "Press 8 to go back" << endl;
     return out;

 }

 istream& operator >> (istream& in, Matsedill& matsedill){
     in >> matsedill.getChoice;

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
