#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <ctime> //fyrir time
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "topping.h"
#include "pizza.h"

using namespace std;
class ToppingRepo
{
    public:
        void add(const Topping& topping);
        void addP(const Pizza& pizza);
        void makeO(const Pizza& pizza);
        void seeOrder();//prentar a skjainn pöntunarlista fyrir baker
        void seeMenu(); //skodar menu listan
        void moveOrder();
        void chooseOrder();//velur af matsedli
        void moveOrder2();
        void moveOrder3();
        void openMenuUmsjon();
        void viewPending();
        void bakinglist();
        void completed();
        void delivered();
        void openAlegg();
        void seeBaker();//prentar a skjainn baker
        void moveToComplete();
        void seeComplete(); //fyrir afgreidslu
        void deliverOrder();//stadfesta afhent fyrir afgreidslu
        void closeOrder3();
        void addtime();
        void printTimeNow();
        void call(); //klarar pöntun
        void addPhoneNumber();
        void createOrder();
        void additional();
        void additionalchoice();
        void sidedish();
        void storeAllToppings(const vector<Topping> &toppings);
};

#endif // TOPPINGREPO_H
