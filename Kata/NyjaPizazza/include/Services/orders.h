#ifndef ORDERS_H
#define ORDERS_H

#include "pizza.h"
#include "topping.h"
#include "toppingrepo.h"

#include <vector>
#include <iostream>

class Orders
{
    public:
        Orders();
        void viewMenu(const Pizza& pizza);
        void makeOrder(const Pizza& pizza); //fall sem tekur niður pontun og skilar af sér skranni orders.txt

    private:
        Pizza pizza;
        ToppingRepo toppingRepo;

};

#endif // ORDERS_H
