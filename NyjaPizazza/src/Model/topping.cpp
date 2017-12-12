#include <fstream>
#include "topping.h"

Topping::Topping()
{
    //ctor
}

Topping::Topping(string name, double price){

    this->name = name;
    this->price = price;
}

Topping::~Topping()
{
    //dtor
}

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

istream& operator >>(istream& in, Topping& topping){

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
}
