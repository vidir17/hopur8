#include "orders.h"

Orders::Orders()
{
    //ctor
}

void Orders::makeOrder(const Pizza& pizza){
    orderRepo.makeO(pizza);
}
