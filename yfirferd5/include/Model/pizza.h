#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <vector>
#include <stddef.h>
#include <fstream>

using namespace std;

#include "topping.h"

class Pizza
{
    public:
        Pizza();
        Pizza(int get);
        Pizza(string name, string alegg, int sizee, int base);
        string getName();
        string getAlegg();
        int getSize();
        int setGet();
        int getGet();
        int getBase();
        void setGet(int newget);
        void setName(string newname);
        void setSize(int newsizee);
        void setBase(int newbase);
        void setAlegg(string newalegg);
        vector<Topping> getpizzaTopping();
        void setVec(vector<Topping> pizzaTopping);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza);
    private:
        Topping *topping;
        string name, alegg;
        int sizee;
        int get;
        int base;
        vector<Topping> pizzaTopping;
};

#endif // PIZZA_H
