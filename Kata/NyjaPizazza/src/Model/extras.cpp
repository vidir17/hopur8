#include "extras.h"

Extras::Extras()
{
    //ctor
}

string Extras::getSoda(){
    return soda;
}
string Extras::getMenuItem(){
    return menuItem;
}

int Extras::getPrice(){
    return price;
}

void Extras::setSoda(string newsoda){
    this->soda = newsoda;
}

void Extras::setMenuItem(string newmenuitem){
    this->menuItem = newmenuitem;
}

void Extras::setPrice(int newprice){
    this->price = newprice;

}

istream& operator >> (istream& in, Extras& extras){

}

ostream& operator << (ostream& out, const Extras& extras){

}
