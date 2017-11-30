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
     out << "hallo";
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
