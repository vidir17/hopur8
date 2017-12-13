#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "pizza.h"
#include "topping.h"
#include "repository.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Management
{
    public:

        void addPizza();//fall sem baetir inn a matsedil
        void addTopping();//fall sem baetir toppings
        void viewTopping(); //fall sem skoðar toppings
        //void viewMenu(); //fall sem leyfir umsjon ad skoda menu
        //void viewfile(); //fall sem leyfir umsjon ad skoda olikar skrar i gegnum hin services
        //void write(ofstream& fout) const;
        //void read(ifstream& fin);


    private:
        //ToppingRepo toppingRepo;

};

#endif // MANAGEMENT_H
