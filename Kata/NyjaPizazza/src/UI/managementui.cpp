#include "managementui.h"

ManagementUI::ManagementUI()
{
    //ctor
}


void ManagementUI::Choices(){

    char choice = '\0';

    cout << "1: add topping" << endl;
    cout << "2: make pizza" << endl;
    cout << "3: add extras" << endl;
   /* cout << "4: view pending orders" << endl;
    cout << "5: view orders in the making" << endl;
    cout << "6: view finished orders" << endl;

    cin >> choice;

*/

    if(choice == '1'){ //færa inní voidfall?



        cout << "Add toppings and price" << endl;
        cout << "----------------------" << endl;
        management.addTopping(createTopping());
        ManagementUI managementUI;
        managementUI.Choices();

    }

   else if(choice == '2'){

        cout << "Add pizza to menu" << endl;
        cout << "-----------------" << endl;
        cout << "start";
        management.addPizzaMenu(createPizza());
        cout << "end";
        ManagementUI managementUI;
        managementUI.Choices();

}
}

/*

    else if(choice == '3'){

        cout << "Add extras to menu" << endl;
        cout << "------------------" << endl;
        management.addPizzaMenu(createPizza());
        ManagementUI managementUI;
        managementUI.Choices();


    //Management management;
    //management.viewMenu;
    }
}
       else if(choice == '4'){

    //Order order;
    //order.view(); //finna skjöl order og prenta

    }
     else if(choice == '5'){

    //Baker baker;
    //baker.baking(); //finna skjöl bakara og prenta

    }
     else if(choice == '6'){

    //Service service;
    //service.finishedOrders(); //finna skjöl service og prenta



    else

    cout << "YOU FOOL!";
        //throw exception
}


Topping ManagementUI::createTopping(){
    string name;
    int price;

    Management m;


    cout << "Name of topping: ";
    cin >> ws;
    getline(cin, name);
    cout << "Price: ";
    cin >> price;


    return Topping(name, price);
}
*/

Topping ManagementUI::createTopping(){
    string name;
    vector<Topping> vectopp;
    int price;
    vector<Topping> allT = management.viewTopping();
    cout << "Topping: ";
    cin >> ws;
    getline(cin, name);
    cout << "Price: ";
    cin >> price;
    char letter = 'y';

    while(letter == 'y'){
        int temp = 0;
        for (int i = 0; i < allT.size(); i++){
            cout << i + 1 << ": " << allT[i].getName() << " " << allT[i].getPrice() << endl;
        }
        //cout << "Choose the integer for adding a topping " << endl;
        //cin >> temp;
        vectopp.push_back(allT[temp - 1]);
        cout << "Choose y to put another topping on your list, any other letter to quit: ";
        cin >> letter;
    }

    cout << endl << endl;

    return Topping(name, price);
}


Pizza ManagementUI::createPizza(){
    string name;
    vector<Topping> vectopp;
    int price;
    cout << "Name your pizza: ";
    cin >> ws;
    getline(cin, name);
    cout << "Price: ";
    cin >> price;
    char letter = 'y';
    vector<Topping> allT = management.viewTopping();
    while(letter == 'y'){
        int temp = 0;
        for (int i = 0; i < allT.size(); i++){
            cout << i + 1 << ": " << allT[i].getName() << " " << allT[i].getPrice() << endl;
        }
        cout << "Choose the integer for adding a topping " << endl;
        cin >> temp;
        vectopp.push_back(allT[temp - 1]);
        cout << "Choose y to put another topping on your pizza, any other letter to quit: ";
        cin >> letter;
    }

    cout << endl << endl;
    cout << "These toppings are on your pizza" << endl;
    for (int i = 0; i < vectopp.size(); i++){
        cout << vectopp[i].getName() << " - ";
    }
    cout << endl << endl;
    return Pizza(name, price, vectopp);
}



/*Extras ManagementUI::createExtras(){
    string soda;
    string menuItem;
    int price;

    cout << "Soda to add: ";
    cin >> ws;
    getline(cin, name);
    cout << "Price: ";
    cin >> price;
    cout << ""


}*/
