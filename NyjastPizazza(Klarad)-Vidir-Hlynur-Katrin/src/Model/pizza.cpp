#include "pizza.h"

Pizza::Pizza()
{
    name = "";
    alegg = "";
    sizee = 0;
    base = 0;
}
Pizza::Pizza(int get)
{
    this->get = get;
}
Pizza::Pizza(string name, string alegg, int sizee, int base){

    this->name = name;
    this->alegg = alegg;
    this->sizee = sizee;
    this->base = base;

}
int Pizza::getGet(){
    return get;
}
void Pizza::setGet(int newget)
{
    this->get = newget;
}
string Pizza::getName(){
    return name;
}
string Pizza::getAlegg()
{
    return alegg;

}
void Pizza::setAlegg(string newalegg)
{
    this->alegg = newalegg;
}
int Pizza::getSize(){
    return sizee;
}
int Pizza::getBase(){
    return base;
}
vector<Topping> Pizza::getpizzaTopping(){
    return pizzaTopping;
}
void Pizza::setName(string newname){
    this->name = newname;
}
void Pizza::setSize(int newsizee){
    this->sizee = newsizee;
}
void Pizza::setBase(int newbase){
    this->base = newbase;
}
void setVec(vector<Topping> pizzaTopping){
    pizzaTopping = pizzaTopping;
}
istream& operator >> (istream& in, Pizza& pizza){

       in >> ws;
       getline(in, pizza.name);
       in >> ws;
       getline(in, pizza.alegg);
       in >> pizza.sizee >> pizza.base;


    return in;
}
ostream& operator << (ostream& out, const Pizza& pizza){

    out << "Pizza: " << pizza.name << "," << "Alegg: " << pizza.alegg << "," << "Size:" << pizza.sizee << "," << "Verd: " << pizza.base;

    return out;
}
