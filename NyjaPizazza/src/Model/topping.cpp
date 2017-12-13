#include "topping.h"

Topping::Topping()
{
    _name = "";
    _price = 0;
}

Topping::Topping(string name, int price){

    setName(name);
    setPrice(price);
}

string Topping::getName(){
    return _name;
}
int Topping::getPrice(){
    return _price;
}
void Topping::setName(string name){
    _name = name;
}
void Topping::setPrice(int price){
    _price = price;
}

/*
void Topping::write(ofstream& fout) const {

    int stringLength = name.length() + 1;

    fout.write((char*) (&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);

    fout.write((char*) (&price), sizeof(double));

}
void Topping::read(ifstream& fin){

    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char [stringLength];

    fin.read((char*)(&price), sizeof(double));

    delete [] str;
}

istream& operator >>(istream& in, Topping topping){

    cout << "Name: ";
    in >> ws;
    getline(in, topping.name);

    cout << "Price: ";
    in >> topping.price;

    return in;
}

ostream& operator << (ostream& out, const Topping& topping){

    out << "Topping: " << topping.name << " ";
    out << "Price: " << topping.price;

    return out;
}*/
