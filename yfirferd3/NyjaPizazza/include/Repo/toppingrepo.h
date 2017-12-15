#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H

#include <iostream>
#include <fstream>
#include <vector>
//#include "topping.h"
#include "pizza.h"

using namespace std;
class ToppingRepo
{
    public:
        ToppingRepo();
        virtual ~ToppingRepo();

        void storeAllToppings(const vector<Topping> &toppings);
        vector<Topping> retrieveAllToppings();
    protected:

    private:
};

#endif // TOPPINGREPO_H
