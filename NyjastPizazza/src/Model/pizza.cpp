#include "pizza.h"

///þarf að athuga með færibreytuconstructor

using namespace std;

Pizza::Pizza()
{
    name = "";
    sizee = 0;
    base = 0;
}
Pizza::Pizza(string name, int sizee, int base){

    this->name = name;
    this->sizee = sizee;
    this->base = base;

}

string Pizza::getName(){
    return name;
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

/*vector<Topping> Pizza::AllPizzaTopping(string topping){

    topping.push_back(AllPitopping);
    return topping;
}

cout << "Name: ";
    in >> ws;
    getline(in, topping.name);

    cout << "Price: ";
    in >> topping.price;
*/
istream& operator >> (istream& in, Pizza& pizza){

       in >> ws;
       getline(in, pizza.name);
       in >> pizza.sizee >> pizza.base;


    return in;
}
ostream& operator << (ostream& out, const Pizza& pizza){

    out << pizza.name << "," << pizza.sizee << "," << pizza.base;

    return out;
}
