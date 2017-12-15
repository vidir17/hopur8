#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "pizza.h"
#include "topping.h"
<<<<<<< HEAD
#include "toppingrepo.h"
=======
#include "repository.h"

>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Management
{
    public:

        void addPizza();//fall sem baetir inn a matsedil
        void addTopping();//fall sem baetir toppings
<<<<<<< HEAD
        void viewTopping();
        vector<Topping> returnAllToppingDataToUI();
=======
        void viewTopping(); //fall sem skoðar toppings
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
        //void viewMenu(); //fall sem leyfir umsjon ad skoda menu
        //void viewfile(); //fall sem leyfir umsjon ad skoda olikar skrar i gegnum hin services
        //void write(ofstream& fout) const;
        //void read(ifstream& fin);


    private:
<<<<<<< HEAD
        ToppingRepo toppingRepo;
        vector<Topping> myVec;
        vector<Topping> someDataIWant;
=======
        //ToppingRepo toppingRepo;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474

};

#endif // MANAGEMENT_H
