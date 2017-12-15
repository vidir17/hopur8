#include "mainui.h"

void MainUI::password(){

    string password = "azziP";
    string input = "";

        for(int i = 0; i < 3; i++){
            cout << "Enter your password: ";
            cin >> input;

            if(input == password){
            MainUI main;
            main.mainMenu();
        }
        else{
            cout << "Invalid password" << endl;

        }
    }

}

void MainUI::mainMenu(){ // Menu for user printed out on the screen
    cout << "Welcome to PizaZZa!" << endl;
    cout << endl;

    char choice = '\0';
    while(choice != 'q' || choice != 'Q'){
        cout << "m: Management" << endl;
        cout << "o: Take order" << endl;
        cout << "c: Chef" << endl;
        cout << "s: Service" << endl;
        cout << "f: Finish order" << endl;
        cout << "q: Exit program" << endl;


        cin >> choice;

        system("CLS");


    if(choice == 'm' || choice == 'M'){
            ManagementUI managementui;
            managementui.Choices();
    }
    else if(choice == 'o' || choice == 'O'){
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
    else if(choice == 'c' || choice == 'C'){
         ChefUI chefui;
         chefui.choose();
    }
    else if(choice == 'f' || choice == 'F'){
        FinishOrder finish;
        cout << "Enter your phone number: ";
        finish.addPhoneNumber();
        finish.addTime();
        finish.call();
        break;
    }
    else if(choice == 's' || choice == 'S'){
        Service service;
        service.calculateP();
    }
    else if(choice == 'q' || choice == 'Q'){
        exit(1);

    }
}
}
