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



    if(choice == '1'){ //f�ra inn� voidfall?



        cout << "Add toppings and price" << endl;
        cout << "----------------------" << endl;
        management.addTopping(createTopping());

    }

   else if(choice == '2'){

        cout << "Add pizza to menu" << endl;
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
        cout << "This is the list of orders in process" << endl;
        cout << "-------------------------------------" << endl;
        baker.bakingList();
        cout << "-------------------------------------" << endl;
    }
    else if(choice == '6'){

        Service service;
        cout << "Thetta er listinn med tilbunum pontunum" << endl;
        cout << "------------------------------------" << endl;
        service.completed();
        cout << "------------------------------------" << endl;
    }
    else if(choice == '7'){

        Service service;
        cout << "Thetta er listinn med sendum pontunum" << endl;
        cout << "------------------------------------" << endl;
        service.delivered();
        cout << "------------------------------------" << endl;
    }
    else if(choice == '8')
    {
       Management management;
       cout << "Thegar verid er ad baeta aukarett, skrifa skal t.d.- SideDish: Coca cola, Price: 300kr" << endl;
       management.sidedish();
    }
}


//B�tir bara vi� s��asta
Topping ManagementUI::createTopping(){
    string name;
    int price;
    char selection = 'y';
        Topping topping;
        while(selection == 'y'){
            cout << "Add topping?(y) ";
            cin >> selection;
            if(selection == 'y'){

    cout << "Name of topping: ";
    cin >> ws;
    getline(cin, name);
    cout << "Price: ";
    cin >> price;
 }
 }
    return Topping(name, price);


}

//TEkur bara s��asta inputti�
Pizza ManagementUI::createPizza(){
    string name, alegg;
    int sizee;
    int base;                    //int i = 0, int howmany
    char selection = 'y';
        Pizza pizza;             //cin >> howmany;
        while(selection == 'y'){ //while(i < howmany) og svo ne
            cout << "Add pizza to menu?(y) ";
            cin >> selection;
            if(selection == 'y'){
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
   } return Pizza(name, alegg, sizee, base);
}
