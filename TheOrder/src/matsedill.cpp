#include <iostream>
#include "matsedill.h"
#include "mainui.h"
#include "controller1.h"
#include <fstream>//taka ut ef faert i class
using namespace std;
Matsedill::Matsedill()
{

}
istream& operator >> (istream& in, Matsedill& matsedill){

    Controller1 controller1;
    controller1.prenta();
    return in;
}
ostream& operator << (ostream& out, Matsedill& matsedill){
    return out;

}

