#ifndef ORDERUI_H
#define ORDERUI_H
#include "orders.h"

class OrderUI
{
    public:
        void makeOrder();//velur pizzu af matsedli
        void createOrder();//byr til pizzu eftir aleggstegundum
        void viewPending();//kallar fram lista af pontunum sem bida afgreidslu
        void createAdditional();//velur extras af matsedli
        void choice();//f�r notanda til a� velja

};

#endif // ORDERUI_H
