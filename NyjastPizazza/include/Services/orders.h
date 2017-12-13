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
        void makeOrder(const Pizza& pizza); //breyta í order þegar það er orðið til

        //void makeOrder(); //fall sem tekur niður pontun og skilar af sér skranni orders.txt


    private:
        Pizza pizza;
        ToppingRepo orderRepo;
        //repository
};

#endif // ORDERS_H
