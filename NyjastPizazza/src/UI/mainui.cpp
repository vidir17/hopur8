#include "mainui.h"


void MainUI::mainMenu(){ // Menu for user printed out on the screen
    cout << "Welcome to PizaZZa!" << endl;

    cout << endl;

    char choice = '\0';

    while(choice != 'q' || choice != 'Q'){

    cout << "m: for management" << endl;
    cout << "o: for taking orders" << endl;
    cout << "c: for chefs" << endl;
    cout << "s: for service" << endl;
    cout << "q: to quit!" << endl;

    cin >> choice;

    if(choice == 'm' || choice == 'M'){

            ManagementUI management;
            management.Choices();


    }
    else if(choice == 'o' || choice == 'O'){
        cout << "Lets order stuff! ";
            //Orders orders;
            //orders.makeOrder();
    }
    }
}
    /*
    else if(choice == 'c' || choice == 'C'){

         Chef chef;
         chef.viewOrder;
    }
    else if(choice == 's' || choice == 'S'){

        Service service;
        service.calculatePrice;
    }

    else{

        exceptions
    }
*/



