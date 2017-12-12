#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "pizza.h"
#include "topping.h"
#include "toppingrepo.h"

#include <vector>
#include <iostream>

using namespace std;

class Management
{
    public:

        //void addPizza();//fall sem baetir inn a matsedil
        //void addTopping();//fall sem baetir toppings
        void Choices();
    private:
        ToppingRepo toppingRepo;
};

#endif // MANAGEMENT_H
