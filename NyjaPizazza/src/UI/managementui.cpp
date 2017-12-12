#include "managementui.h"

ManagementUI::ManagementUI()
{
    //ctor
}

ManagementUI::~ManagementUI()
{
    //dtor
}

void ManagementUI::Choices(){

    char choice = '\0';

    cout << "1: make pizza" << endl;
    cout << "2: add topping" << endl;
    cout << "3: view menu" << endl;
    cout << "4: view pending orders" << endl;
    cout << "5: view orders in the making" << endl;
    cout << "6: view finished orders" << endl;

    cin >> choice;

   /* if(choice == '1'){

    Management management;
    management.addPizza();
    }

   else(choice == '2'){

    Management management;
    management.addTopping();

    }
    else if(choice == '3'){

    Management management;
    management.viewMenu;
    }
     else if(choice == '4'){

    Order order;
    order.view();

    }
     else if(choice == '5'){

    Baker baker;
    baker.baking();

    }
     else if(choice == '6'){

    Service service;
    service.finishedOrders();


    }
    else

        throw exception */
}
