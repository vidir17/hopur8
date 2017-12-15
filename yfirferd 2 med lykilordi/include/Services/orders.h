#ifndef ORDERS_H
#define ORDERS_H
#include "pizza.h"
#include "topping.h"
#include "toppingrepo.h"
#include "orders.h"
#include <vector>
#include <iostream>

class Orders
{
    public:
        void viewOrder();
        void createOrder();
        void viewPending();
        void openAlegg();
        void openAdditional();
    private:
        Pizza pizza;
        ToppingRepo orderRepo;
};

#endif // ORDERS_H
