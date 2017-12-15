#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "management.h"
#include "service.h"
#include "orderui.h"
#include "baker.h"
#include <vector>
using namespace std;

class ManagementUI
{
    public:
        void Choices(); //valmoguleikar management prentadar a skja

    private:
        Pizza pizza;
        Management management;
        Topping createTopping(); //fall til ad bua til eintak af topping
        Pizza createPizza();//fall til ad bua til eintak af pizza
        ToppingRepo toppingRepo;
        Orders openAlegg();
};

#endif // MANAGEMENTUI_H
