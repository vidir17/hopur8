#include "controller2.h"
#include "gagnasafn.h"
Controller2::Controller2()
{
    //ctor
}

void Controller2::New_pizza(){
    Gagnasafn gagnasafn;
    gagnasafn.insert_new_pizza();
}
void Controller2::New_toppings(){
    Gagnasafn gagnasafn;
    gagnasafn.insert_new_topping();
}
/*
istream& operator >> (istream& in, Controller2& controller2)
{
    Gagnasafn gagnasafn;
    //gagnasafn.insert_new_pizza();
    return in;
}
ostream& operator << (ostream& out, Controller2& controller2)
{
    out << "kominn i gagnagrunninn";
    return out;
}
*/
