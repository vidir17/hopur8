#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "management.h"
//#include <string>
#include <vector>
using namespace std;

class ManagementUI
{
    public:
        ManagementUI();
        void Choices();

    private:
        Pizza pizza;
        Management management;
        Topping createTopping();
        Pizza createPizza();
        ToppingRepo toppingRepo;
        //ToppingRepo pizzaRepo;
};

#endif // MANAGEMENTUI_H
