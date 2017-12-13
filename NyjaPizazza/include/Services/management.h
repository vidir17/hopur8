#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "pizza.h"
#include "topping.h"
#include "toppingrepo.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Management
{
    public:

        void addPizza();//fall sem baetir inn a matsedil
        void addTopping();//fall sem baetir toppings
        void viewTopping();
        vector<Topping> returnAllToppingDataToUI();
        //void viewMenu(); //fall sem leyfir umsjon ad skoda menu
        //void viewfile(); //fall sem leyfir umsjon ad skoda olikar skrar i gegnum hin services


    private:
        ToppingRepo toppingRepo;
        vector<Topping> myVec;
        vector<Topping> someDataIWant;

};

#endif // MANAGEMENT_H
