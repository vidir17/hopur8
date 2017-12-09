#include "umsjon.h"

Umsjon::Umsjon()
{
    //ctor
    umsjon_val = 0;
}


istream& operator >> (istream& in, Umsjon& umsjon){
    cout << "Input number: ";
   in >> umsjon.umsjon_val;
   if(umsjon.umsjon_val == 1){
        system("CLS");
        cout << "Add pizza to menu" << endl;
        cout << "-----------------" << endl;
        Controller2 controller2;
        controller2.New_pizza();
   }
   if(umsjon.umsjon_val == 2){
        system("CLS");
        cout << "Add toppings and price" << endl;
        cout << "----------------------" << endl;
        Controller2 controller2;
        controller2.New_toppings();
   }
   return in;
}
ostream& operator << (ostream& out, Umsjon& umsjon){
    out << "1. Add pizza to matsedill" << endl;
    out << "2. Add toppings and price" << endl;
    return out;
}
