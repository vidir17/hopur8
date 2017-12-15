#include "serviceui.h"

void ServiceUI::calculatePrice()
{
    Service service;
    service.calculatePrice();
    service.deliverOrder();
}
