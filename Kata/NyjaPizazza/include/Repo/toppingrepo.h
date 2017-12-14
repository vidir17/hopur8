#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "topping.h"
#include "pizza.h"


using namespace std;
class ToppingRepo
{
    public:
        ToppingRepo();

        //void add(const Topping& topping);
        //void addP(const Pizza& pizza);
        //void makeO(const Pizza& pizza);
        //void seeMenu(const Pizza& pizza);
        vector<Topping> viewT();
        vector<Pizza> viewP();
        void storeAllToppings(const vector<Topping> &toppings);
        //vector<Topping> retrieveAllToppings();

    private:
};

#endif // TOPPINGREPO_H
