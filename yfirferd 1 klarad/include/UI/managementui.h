#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "management.h"
#include "service.h"
#include "orderui.h"
#include "baker.h"
#include <vector>
using namespace std;

class ManagementUI
{
    public:
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
