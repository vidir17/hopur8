#include "controller1.h"
#include <iostream>

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
    in >> controller1.menu;
    return in;
}
ostream& operator << (ostream& out, Controller1& controller1)
{
    out << "kominn i gagnagrunninn";
    return out;
}

