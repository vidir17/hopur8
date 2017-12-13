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
void Pizza::setName(){
    name = name;
}
void Pizza::setSize(){
    sizee = sizee;
}
void Pizza::setBase(){
    base = base;
}
void setVec(vector<Topping> pizzaTopping){
    pizzaTopping = pizzaTopping;
}


/*vector<Topping> Pizza::AllPizzaTopping(string topping){

    topping.push_back(AllPitopping);
    return topping;
}

void Pizza::write(ofstream& fout) const {

    int tCount = toppings.size();

    fout.write((char*) (&tCount), sizeof(int));

    for(int i = 0; i < tCount; i++){
        toppings[i].write(fout);
    }
}
void Pizza::read(ifstream& fin) {

    int tCount;
    fin.read((char*)(&tCount), sizeof(int));

    Topping topping;
    for(int i = 0; i < tCount; i++){
        topping.read(fin);
        addTopping(topping);
    }
}
istream& operator >> (istream& in, Pizza& pizza){

    int toppingCount;
    in >> toppingCount;

    Topping topping;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        in >> topping;
        pizza.addTopping(topping);

    }
    return in;
}
ostream& operator << (ostream& out, const Pizza& pizza){

    out << "Pizza with toppings: " << endl;

    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << endl;
    }
    return out;
}*/
