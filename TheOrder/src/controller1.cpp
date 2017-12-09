#include "controller1.h"

Controller1::Controller1()
{
    //ctor
    menu = 0;

}
Controller1::Controller1(int menu)
{
    this->menu = menu;
}
void Controller1::prenta() //prenta matsedil
{
    Gagnasafn gagnasafn;
    gagnasafn.printfirst(); //prenta og velja

}
void Controller1::make() //bua til pizzu
{
    Gagnasafn gagnasafn;
    gagnasafn.makepizza(); //pusla saman pizzu
}
/*

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
*/
