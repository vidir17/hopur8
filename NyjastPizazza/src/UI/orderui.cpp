#include "orderui.h"

void OrderUI::makeOrder()
{
    Orders orders;
    orders.viewOrder();
    cout << "Veldu pitsu af matsedli" << endl;
    ToppingRepo toppingrepo;
    toppingrepo.chooseOrder();
}
void OrderUI::viewPending()
{
    cout << " Thetta er bidlistinn" << endl;
    cout << "(Pantanirnar bidda eftir fyrirmaeli bakarans)" << endl;
    cout << "--------------------------------------" << endl;
    Orders orders;
    orders.viewPending();
    cout << "--------------------------------------" << endl;
}
void OrderUI::createOrder()
{
    Orders order;
    cout << "Til thess ad baeta vid pizzu..." << endl;
    cout << "Thad sem er i bodi er her fyrir nedan" << endl;
    cout << "***************************************" << endl;
    cout << "Staerd: 16 tommu, 12 tommu, 9 tommu" << endl;
    cout << "Alegg i bodi: " << endl;
    //prenta alegg af textaskra
    order.openAlegg();
    cout << "Verd fyrir 16 tommu grunn pitsu: 1400kr" << endl;
    cout << "Verd fyrir 12 tommu grunn pitsu:  800kr" << endl;
    cout << "Verd fyrir  9 tommu grunn pitsu:  500kr" << endl;
    cout << "***************************************" << endl;
    cout << "Daemi a streng - Staerd:16, Alegg:Pepperoni-Sveppir-Skinka, Verd: 1400+200+200+200" << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
    cout << "Sladi inn pitsu: ";

    order.createOrder();
}
void OrderUI::createAdditional()
{
    cout << "Veldu medlaeti a lista" << endl;
    cout << "----------------------" << endl;
    Orders orders;
    orders.openAdditional();
}
