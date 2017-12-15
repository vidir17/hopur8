#include "topping.h"

Topping::Topping()
{
    name = "";
    price = 0;
}

Topping::Topping(string name, int price){

    this->name = name;
    this->price = price;
}

string Topping::getName(){
    return name;
}
int Topping::getPrice(){
    return price;
}
void Topping::setName(string newname){
    this->name = newname;
}
void Topping::setPrice(int newprice){
    this->price = newprice;
}

ostream& operator << (ostream& out, const Topping& topping){

    out << topping.name << "," << topping.price;

    return out;
}

istream& operator >>(istream& in, Topping& topping){

    in >> ws;
    getline(in, topping.name);

    in >> topping.price;

    return in;
}

