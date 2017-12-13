#include "managementui.h"

ManagementUI::ManagementUI()
{
    //ctor
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
   /* if(choice == '2'){
    Management management;
    management.addPizza();
    }
*/
    if(choice == '1'){
        int counter = 0;
        cout << "Add new toppings and price to list" << endl;
        cout << "----------------------------------" << endl;
        //Topping topping;
        //Management management;
        vector<Topping> myVec = management.returnAllToppingDataToUI();

        for (int i = 0; i < myVec.size(); i++){
            counter++;
            cout << counter << ". " << "Topping " << myVec[i].getName() << "| Price " << myVec[i].getPrice() << endl;
        }
    }
    /*
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
