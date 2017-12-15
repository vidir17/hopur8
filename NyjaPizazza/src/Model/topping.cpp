#include "topping.h"
Topping::Topping()
{
    _name = "";
    _price = 0;
}
Topping::Topping(string name, int price){
<<<<<<< HEAD
    this->name = name;
    this->price = price;
=======

    setName(name);
    setPrice(price);
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
}
string Topping::getName(){
    return _name;
}
int Topping::getPrice(){
    return _price;
}
<<<<<<< HEAD
void Topping::setName(string newname){
    this->name= newname;
}
void Topping::setPrice(int newprice){
    this->price = newprice;
=======
void Topping::setName(string name){
    _name = name;
}
void Topping::setPrice(int price){
    _price = price;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
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

<<<<<<< HEAD
}
/*
istream& operator >>(istream& in, Topping& topping){
=======
istream& operator >>(istream& in, Topping topping){
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474

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
