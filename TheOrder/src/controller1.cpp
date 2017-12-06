#include "controller1.h"
#include <iostream>
#include "gagnasafn.h"
#include <fstream>
#include "matsedill.h"
Controller1::Controller1()
{
    //ctor
    menu = 0;

}
Controller1::Controller1(int menu)
{
    this->menu = menu;
}

istream& operator >> (istream& in, Controller1& controller1)
{
    Gagnasafn gagnasafn;
    gagnasafn.printfirst();
    return in;
}
ostream& operator << (ostream& out, Controller1& controller1)
{
    out << "kominn i gagnagrunninn";
    return out;
}

