#ifndef ORDERUI_H
#define ORDERUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "orders.h"


class OrderUI
{
    public:
        OrderUI();
        void Choices();

    private:
        Pizza pizza;
        Pizza createPizza();
        Orders orders;
        ToppingRepo toppingRepo;

};

#endif // ORDERUI_H
