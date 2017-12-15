#ifndef CHEFUI_H
#define CHEFUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "management.h"
#include "chef.h"
#include <vector>
using namespace std;
class ChefUI
{
    public:
        void choose();//haegt ad velja um pantanir i vinnslu hja chef eda pantanir sem bida

    private:
        Pizza pizza;
        Chef chef;
        ToppingRepo toppingRepo;
};

#endif // CHEFUI_H
