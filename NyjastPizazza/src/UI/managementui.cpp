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



    if(choice == '1'){ //færa inní voidfall?



        cout << "Add toppings and price" << endl;
        cout << "----------------------" << endl;
        management.addTopping(createTopping());

    }

   else if(choice == '2'){

        cout << "Add pizza to menu" << endl;
        cout << "-----------------" << endl;
        management.addPizzaMenu(createPizza());
}




 /*   }
    else if(choice == '3'){

        cout << "Order "

    //Management management;
    //management.viewMenu;
    }
     else if(choice == '4'){

    //Order order;
    //order.view();

    }
     else if(choice == '5'){

    //Baker baker;
    //baker.baking();

    }
     else if(choice == '6'){

    //Service service;
    //service.finishedOrders();

*/

    else

    cout << "YOU FOOL!";
        //throw exception
}

//Bætir bara við síðasta
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

//TEkur bara síðasta inputtið
Pizza ManagementUI::createPizza(){
    string name;
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
    cout << "sizee: ";
    cin >> sizee;
    cout << "Base: ";
    cin >> base;
}
   } return Pizza(name, sizee, base);
}
