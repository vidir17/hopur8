#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H

#include "pizza.h"
//#include "topping.h"
#include "management.h"


class ManagementUI
{
    public:
        ManagementUI();

        void Choices();


    private:
        Management management;
        ToppingRepo toppingRepo;
        Topping topping;

};

#endif // MANAGEMENTUI_H
