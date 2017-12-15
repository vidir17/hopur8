#include "valmyndui.h"

#include <vector>
#include <iostream>

using namespace std;

#include "../MODEL/pizza.h"
#include "../MODEL/topping.h"

ValmyndUI::ValmyndUI()
{
    //ctor
}

ValmyndUI::~ValmyndUI()
{
    //dtor
}

void ValmyndUI::startUI(){

    char choice = '\0';

    cout << "m: for management" << endl;
    cout << "o: for taking orders" << endl;
    cout << "c: for chefs" << endl;
    cout << "s: for service" << endl;

    cin >> choice;

    if(choice == 'm' || choice == 'M'){

            char managementchoice = '\0';

        cout << "Press 1 to add a pizza to the menu: " << endl;
        cout << "Press 2 to add a new topping to our list of toppings: " << endl;
        cin >> managementchoice;
            if(managementchoice == '1'){
                management.addPizza;
            }
            else if(managementchoice == '2'){
                management.addTopping;
            }
            else
                throw
    }
    else if(choice == 'o' || choice == 'O'){

        cout << "orders";
    }
    else if(choice == 'c' || choice == 'C'){

        cout chefs;
    }
    else if(choice == 's' || choice == 'S'){

        cout << "service";
    }
    else
        //throw
}
