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
        Pizza(string name, int sizee, int base);
        string getName();
        int getSize();
        int getBase();
        //void getToppings();
        void setName(string name);
        void setSize(int sizee);
        void setBase(int base);
        vector<Topping> getpizzaTopping();
        void setVec(vector<Topping> pizzaTopping);
        friend istream& operator >> (istream& in, Pizza& pizza);
<<<<<<< HEAD
        friend ostream& operator << (ostream& out, const Pizza& pizza);
    private:
        string name;
        int sizee;
        int base;
=======
        friend ostream& operator << (ostream& out, const Pizza& pizza); faera i repo*/



    private:
        Topping *topping;
        string _name;
        int _sizee;
        int _base;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
        vector<Topping> pizzaTopping;
};

#endif // PIZZA_H
