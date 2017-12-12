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
        Pizza(string name, int size, int base);
        string getName();
        int getSize();
        int getBase();
        //void getToppings();
        void setName();
        void setSize();
        void setBase();
        vector<Topping> getpizzaTopping();
        void setVec(vector<Topping> pizzaTopping);




        /*void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza); faera i repo*/

    protected:

    private:
        string name;
        int size;
        int base;
        vector<Topping> pizzaTopping;
};

#endif // PIZZA_H
