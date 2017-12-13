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

    cout << "1: add topping" << endl;
    cout << "2: make pizza" << endl;
    cout << "3: view menu" << endl;
    cout << "4: view pending orders" << endl;
    cout << "5: view orders in the making" << endl;
    cout << "6: view finished orders" << endl;

    cin >> choice;

    if(choice == '1'){
        int numberOfToppings = 0;
        string name = "";
        int price = 0;
        Topping topping;

        cout << "How many toppings would you like to add? " << endl;
        cin >> numberOfToppings;


        for(int i = 0; i < numberOfToppings; i++){
            string name;
            int price;
            cout << "Name: ";
            cin >> name;
            cout << "Price: ";
            cin >> price;
            //Topping topping(name, price);
            //management.addTopping(topping);

        }

        //Management management;
        //management.addTopping();

        //cout << management.wiewTopping();

}
}

/*    Management management;
    management.addTopping();

    }

   else(choice == '2'){

    Management management;
    management.addPizza();

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

        throw exception
}*/
