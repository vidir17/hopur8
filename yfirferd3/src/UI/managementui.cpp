#include "managementui.h"

void ManagementUI::Choices(){

    char choice = '\0';

        cout << "1: add topping" << endl;
        cout << "2: make pizza" << endl;
        cout << "3: view menu" << endl;
        cout << "4: view pending orders" << endl;
        cout << "5: view orders in the making" << endl;
        cout << "6: view finished orders" << endl;
        cout << "7: view delivered orders" << endl;
        cout << "8: add side dish or drinks" << endl;

        cin >> choice;



    if(choice == '1'){

        cout << "Add toppings and price" << endl;
        cout << "----------------------" << endl;
        cout << "Current toppings: " << endl;

        Orders order;
        order.openAlegg();
        cout << "----------------------" << endl;
        management.addTopping(createTopping());

    }

   else if(choice == '2'){

        cout << "Add pizza to menu" << endl;
        cout << "-----------------" << endl;
        cout << "Current menu: " << endl;

        management.openMenu();
        cout << "-----------------" << endl;
        management.addPizzaMenu(createPizza());
    }

    else if(choice == '3'){

        Management management;
        cout << "This is on the current Menu:" << endl;
        cout << "----------------------------" << endl;
        management.openMenu();
        cout << "----------------------------" << endl;
        cout << endl;
    }



     else if(choice == '4'){

      OrderUI orders;
      orders.viewPending();

    }


     else if(choice == '5'){

        Baker baker;
        cout << "List of orders in process" << endl;
        cout << "-------------------------" << endl;
        baker.bakingList();
        cout << "-------------------------" << endl;
    }
    else if(choice == '6'){

        Service service;
        cout << "List of orders ready for service" << endl;
        cout << "--------------------------------" << endl;
        service.completed();
        cout << "--------------------------------" << endl;
    }
    else if(choice == '7'){

        Service service;
        cout << "List of " << endl;
        cout << "------------------------------------" << endl;
        service.delivered();
        cout << "------------------------------------" << endl;
    }
    else if(choice == '8')
    {
       Management management;
       cout << "When adding a sidedish write:- SideDish: Coca cola, Price: 300kr" << endl;
       management.sidedish();
    }
}

Topping ManagementUI::createTopping(){ //baeta vid aleggi
    string name;
    int price;
    char selection = 'y';
        Topping topping;

        cout << "Name of topping: ";
        cin >> ws;
        getline(cin, name);
        cout << "Price: ";
        cin >> price;

        cout << "Add topping?(y) ";
        cin >> selection;
        while(selection == 'y'){
            cout << "Name of topping: ";
            cin >> ws;
            getline(cin, name);
            cout << "Price: ";
            cin >> price;
        }

    return Topping(name, price);
}

Pizza ManagementUI::createPizza(){
    string name, alegg;
    int sizee;
    int base;
    char selection = 'y';
        Pizza pizza;

    cout << "Name your pizza: ";
    cin >> ws;
    getline(cin, name);
    cout << "Toppings: ";
    cin >> ws;
    getline(cin, alegg);
    cout << "Size: ";
    cin >> sizee;
    cout << "Price: ";
    cin >> base;
    cout << "Add pizza to menu?(y) ";
    cin >> selection;

    while(selection == 'y'){
        cout << "Name your pizza: ";
        cin >> ws;
        getline(cin, name);
        cout << "Toppings: ";
        cin >> ws;
        getline(cin, alegg);
        cout << "Size: ";
        cin >> sizee;
        cout << "Price: ";
        cin >> base;
    }
    return Pizza(name, alegg, sizee, base);
}
