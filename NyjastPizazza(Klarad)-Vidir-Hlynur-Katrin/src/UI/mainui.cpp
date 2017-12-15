#include "mainui.h"


void MainUI::mainMenu(){ // Menu for user printed out on the screen
    cout << "Welcome to PizaZZa!" << endl;
    cout << endl;

    char choice = '\0';
    while(choice != 'q' || choice != 'Q'){
    cout << "m: Fyrir yfirmann(Manager)" << endl;
    cout << "o: Til ad skra nidur pantanir(TakeOrder)" << endl;
    cout << "c: Fyrir bakaran(Baker)" << endl;
    cout << "s: Fyrir afgreidslu(Service)" << endl;
    cout << "f: Til ad ljuka afgreidslu!(Finish Order)" << endl;
    cin >> choice;

    if(choice == 'm' || choice == 'M'){
            ManagementUI managementui;
            managementui.Choices();
    }
    else if(choice == 'o' || choice == 'O'){
        cout << "1. Skoda matsedil" << endl;
        cout << "2. Baeta pizzu vid pontun" << endl;
        cout << "3. Baeta vid medlaeti" << endl;
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
        cout << "Sladu inn simanumer thitt: ";
        finish.addPhoneNumber();
        finish.addTime();
        finish.call();
        break;
    }
    else if(choice == 'q' || choice == 'Q'){

         break;
    }
    else if(choice == 's' || choice == 'S'){
        ServiceUI serviceui;
        serviceui.calculatePrice();
    }
}
}


