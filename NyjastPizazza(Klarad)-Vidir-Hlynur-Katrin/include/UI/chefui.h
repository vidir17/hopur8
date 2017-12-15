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
        void choose();
    private:
        Pizza pizza; //eins og í managementUI
        Chef chef; //eins og í managementUI
        ToppingRepo toppingRepo; //inniheldur oll repo nuna
};

#endif // CHEFUI_H
