#include "orderui.h"
void OrderUI::choice(){
    char choice = '0';

    cout << "1. View menu" << endl;
    cout << "2. Pizza made to order" << endl;
    cout << "3. Add extras" << endl;
    cin >> choice;

        if(choice == '1'){
            OrderUI ordersui;
            ordersui.makeOrder();
        }
        if(choice == '2')
        {
            OrderUI ordersui;
            ordersui.createOrder();
        }
        if(choice == '3')
        {
            OrderUI ordersui;
            ordersui.createAdditional();
        }
}
void OrderUI::makeOrder()
{
    Orders orders;
    orders.viewOrder();
    cout << "Choose a pizza off the menu" << endl;
    ToppingRepo toppingrepo;
    toppingrepo.chooseOrder();

}
void OrderUI::viewPending()
{
    cout << " List of pending orders" << endl;
    cout << "(wait for chef to alert you when ready)" << endl;
    cout << "---------------------------------------" << endl;
    Orders orders;
    orders.viewPending();
    cout << "---------------------------------------" << endl;
}
void OrderUI::createOrder()
{
    Orders order;
    cout << "Add toppings to a pizza" << endl;
    cout << "Available sizes and toppings below" << endl;
    cout << "************************************" << endl;
    cout << "Size: 16\", 12\", 9\" " << endl;

    //prenta alegg af textaskra
    order.openAlegg();
    cout << "Price for 16\"  base: 1400kr" << endl;
    cout << "Price for 12\" base:  800kr" << endl;
    cout << "Price for  9\" base:  500kr" << endl;
    cout << "***************************************" << endl;
    cout << "Daemi a streng - Staerd:16, Alegg:Pepperoni-Sveppir-Skinka, Verd: 1400+200+200+200" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter size and toppings: ";

    order.createOrder();
}
void OrderUI::createAdditional()
{
    cout << "Choose extras of menu" << endl;
    cout << "---------------------" << endl;
    Orders orders;
    orders.openAdditional();
}
