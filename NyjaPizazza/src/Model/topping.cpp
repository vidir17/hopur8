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
    this->name= newname;
}
void Topping::setPrice(int newprice){
    this->price = newprice;
}
/*
void Topping::write(ofstream& fout) const {

    int stringLength = name.length() + 1;

    fout.write((char*) (&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);

    fout.write((char*) (&price), sizeof(double));

}*/
void Topping::read(){
    /*
    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char [stringLength];

    fin.read((char*)(&price), sizeof(double));

    delete [] str;*/

}
/*
istream& operator >>(istream& in, Topping& topping){

    cout << "Name: ";
    in >> ws;
    getline(in, topping.name);

    cout << "Price: ";
    in >> topping.price;

    return in;
}
*/

ostream& operator << (ostream& out, const Topping& topping){

    out << "Topping: " << topping.name << endl;
    out << "Price: " << topping.price << endl;

    return out;
}
