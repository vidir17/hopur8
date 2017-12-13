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
        void makeOrder(const Pizza& pizza); //breyta � order �egar �a� er or�i� til

        //void makeOrder(); //fall sem tekur ni�ur pontun og skilar af s�r skranni orders.txt


    private:
        Pizza pizza;
        ToppingRepo orderRepo;
        //repository
};

#endif // ORDERS_H
