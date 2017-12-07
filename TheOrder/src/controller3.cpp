#include "controller3.h"

Controller3::Controller3()
{
    //ctor
}

istream& operator >> (istream& in, Controller3& controller3)
{
    Gagnasafn gagnasafn;
    //gagnasafn.insert_new_pizza();
    gagnasafn.open_bakerlist();
    return in;
}
ostream& operator << (ostream& out, Controller3& controller3)
{
    out << "kominn i gagnagrunninn";
    return out;
}
