#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include "pizza.h"
#include "topping.h"
#include "management.h"
//#include <string>
#include <vector>
using namespace std;

class ManagementUI
{
    public:
        ManagementUI();
        virtual ~ManagementUI();
        void Choices();
        void addTopping();

    private:
        Management management;
        //ToppingRepo ToppingRepo;
};

#endif // MANAGEMENTUI_H
