#include "orderui.h"

OrderUI::OrderUI()
{
    //ctor
}

void OrderUI::Choices(){

    char choice = '\0';

    cout << "1: Ordering pizza off the menu " << endl;
    cout << "2: Ordering extras " << endl;
    cout << "------------------------------------" << endl;

    cin >> choice;

    if(choice == '1'){
        Orders order;
        order.viewMenu(pizza);

        cout << "Enter your order: " << endl;
        cin >> pizza;
        //orders.makeOrder(menu); //þyrftum að prenta út matseðil og leyfa val?
    }
    else {

        cout << "You are doing something wrong my friend " << endl;
    }
}
   /* else if(choice == '2'){

        cout << "GO US!" << endl;
        Orders orders;
        orders.orderExtra(); //búa til orderExtra inni í modelOrder
    }*/


