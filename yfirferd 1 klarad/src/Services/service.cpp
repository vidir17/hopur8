#include "service.h"


void Service::calculateP()
{
    Service service;
    service.calculatePrice();
    service.deliverOrder();
}
void Service::calculatePrice()
{
    ToppingRepo toppingrepo;
    toppingrepo.seeComplete();
}
void Service::deliverOrder()
{
    ToppingRepo toppingrepo;
    toppingrepo.deliverOrder();
}
void Service::completed()
{
    ToppingRepo toppingrepo;
    toppingrepo.completed();
}
void Service::delivered()
{
    ToppingRepo toppingrepo;
    toppingrepo.delivered();
}
