#include "pizza.h"

///þarf að athuga með færibreytuconstructor

using namespace std;

Pizza::Pizza()
{
<<<<<<< HEAD
    name = "";
    sizee = 0;
    base = 0;
}
Pizza::Pizza(string name, int sizee, int base){

    this->name = name;
    this->sizee = sizee;
    this->base = base;
=======
    _name = "";
    _sizee = 0;
    _base = 0;
}
Pizza::Pizza(string name, int sizee, int base){

    setName(name);
    setSize(sizee);
    setBase(base);
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474

}

string Pizza::getName(){
    return _name;
}
int Pizza::getSize(){
<<<<<<< HEAD
    return sizee;
=======
    return _sizee;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
}
int Pizza::getBase(){
    return _base;
}
vector<Topping> Pizza::getpizzaTopping(){
    return pizzaTopping;
}
void Pizza::setName(string name){
    _name = name;
}
<<<<<<< HEAD
void Pizza::setSize(){
    sizee = sizee;
=======
void Pizza::setSize(int sizee){
    _sizee = sizee;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
}
void Pizza::setBase(int base){
    _base = base;
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
