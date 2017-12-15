#include "management.h"

void Management::openMenu()
{
    ToppingRepo toppingrepo;
    toppingrepo.openMenuUmsjon();
}
void Management::addTopping(const Topping& topping)
{
    toppingRepo.add(topping);
}

void Management::addPizzaMenu(const Pizza& pizza)
{
    toppingRepo.addP(pizza);
}
void Management::sidedish()
{
    toppingRepo.sidedish();
}
