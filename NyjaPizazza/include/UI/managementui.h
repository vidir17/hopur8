#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H

#include "pizza.h"
//#include "topping.h"
#include "management.h"


class ManagementUI
{
    public:
        ManagementUI();
        virtual ~ManagementUI();
        void Choices();

    private:
        ToppingRepo ToppingRepo;
};

#endif // MANAGEMENTUI_H
