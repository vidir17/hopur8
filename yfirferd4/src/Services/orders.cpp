#include "orders.h"

void Orders::viewOrder()
{
    ToppingRepo toppingrepo;
    toppingrepo.seeMenu();
}
void Orders::createOrder()
{
    ToppingRepo toppingrepo;
    toppingrepo.createOrder();
}
void Orders::viewPending()
{
    ToppingRepo toppingrepo;
    toppingrepo.viewPending();
}
void Orders::openAlegg()
{
    ToppingRepo toppingrepo;
    toppingrepo.openAlegg();
}
void Orders::openAdditional()
{
    ToppingRepo toppingrepo;
    toppingrepo.additional();
    toppingrepo.additionalchoice();
}
