#include "pizza.h"

///þarf að athuga með færibreytuconstructor

using namespace std;

Pizza::Pizza()
{
    name = "";
    //topping = 0;
    price = 0;
    vector<Topping> myVec;
}
Pizza::Pizza(string name, int price, vector<Topping> myVec){

    this->name = name;
    this->price = price;
    this->pizzaTopping = myVec;

}

string Pizza::getName(){
    return name;
}

int Pizza::getPrice(){
    return price;
}
vector<Topping> Pizza::getpizzaTopping(){
    return pizzaTopping;
}
void Pizza::setName(string newname){
    this->name = newname;
}
void Pizza::setPrice(int newprice){
    this->price = newprice;
}
void setVec(vector<Topping> pizzaTopping){
    pizzaTopping = pizzaTopping;
}

/*vector<Topping> Pizza::AllPizzaTopping(string topping){

    topping.push_back(AllPitopping);
    return topping;

    in >> ws;
    getline(in, topping.name);

    cout << "Price: ";
    in >> topping.price;
*/
istream& operator >> (istream& in, Pizza& pizza){

       in >> ws;
       getline(in, pizza.name);
       in >> pizza.price;


    return in;
}
ostream& operator << (ostream& out, const Pizza& pizza){

    out << pizza.name << "," << pizza.price;

    return out;
}
