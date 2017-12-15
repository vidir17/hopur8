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

        void Choices();
        void addTopping();


    private:
        Management management;
<<<<<<< HEAD
        ToppingRepo toppingRepo;
        Topping topping;

=======
        //ToppingRepo ToppingRepo;
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
};

#endif // MANAGEMENTUI_H
