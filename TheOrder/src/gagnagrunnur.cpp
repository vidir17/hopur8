#include "gagnagrunnur.h"
#include <iostream>

Gagnagrunnur::Gagnagrunnur()
{
    //ctor
    menu = 0;

}
Gagnagrunnur::Gagnagrunnur(int menu)
{
    this->menu = menu;
}

istream& operator >> (istream& in, Gagnagrunnur& gagnagrunnur)
{
    in >> gagnagrunnur.menu;
    return in;
}
ostream& operator << (ostream& out, Gagnagrunnur& gagnagrunnur)
{
    out << "kominn i gagnagrunninn";
    return out;
}

