#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <vector>
#include <stddef.h>


using namespace std;

#include "topping.h"

class Pizza
{
    public:
        Pizza();
        Pizza(string name, int price, vector<Topping> vecT);
        string getName();
        int getPrice();
        vector<Topping> getpizzaTopping();
        //void getToppings();
        void setName(string newname);
        void setPrice(int newprice);
        //vector<Topping> getpizzaTopping();
        void setVec(vector<Topping> pizzaTopping);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza);



    private:
        string name;
        int price;
        vector<Topping> pizzaTopping;
};

#endif // PIZZA_H
