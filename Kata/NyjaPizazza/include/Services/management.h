#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "pizza.h"
#include "topping.h"
#include "repository.h"
#include "toppingrepo.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Management
{
    public:

        void addPizzaMenu(const Pizza& pizza);//fall sem baetir inn a matsedil
        void addTopping(const Topping& topping);//fall sem baetir toppings
        vector<Topping> viewTopping(); //fall sem skoðar toppings
        vector<Topping> viewPizza(); //fall sem leyfir umsjon ad skoda menu
        //void viewfile(); //fall sem leyfir umsjon ad skoda olikar skrar i gegnum hin services



    private:
        Topping topping;
        ToppingRepo toppingRepo;



};

#endif // MANAGEMENT_H
