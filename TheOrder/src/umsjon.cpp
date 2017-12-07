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
        in >> controller2;
   }
   return in;
}
ostream& operator << (ostream& out, Umsjon& umsjon){
    out << "1. Add pizza to matsedill" << endl;
    return out;
}
