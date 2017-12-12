#include "mainui.h"


void MainUI::mainMenu(){ // Menu for user printed out on the screen
    cout << "Welcome to PizaZZa!" << endl;

    cout << endl;

    char choice = '\0';

    cout << "m: for management" << endl;
    cout << "o: for taking orders" << endl;
    cout << "c: for chefs" << endl;
    cout << "s: for service" << endl;
    cout << "Any other key to quit!" << endl;

    cin >> choice;

    if(choice == 'm' || choice == 'M'){

            Management management;
            management.Choices();


    }
   /* else(choice == 'o' || choice == 'O'){

        Orders orders;
        orders.choices();
    }
    else if(choice == 'c' || choice == 'C'){

        cout chefs;
    }
    else if(choice == 's' || choice == 'S'){

        cout << "service";
    }

    else{
        break;*/
    }




