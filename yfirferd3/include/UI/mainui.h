#ifndef MAINUI_H
#define MAINUI_H
#include <stdlib.h>
#include "managementui.h"
#include "orders.h"
#include "chefui.h"
#include "orderui.h"
#include "finishorder.h"

using namespace std;

class MainUI
{
    public:
        void password(); //bi�ur notanda um lykilord, 3 tilraunir
        void mainMenu(); //kallar a valmoguleika notanda
};

#endif // MAINUI_H
