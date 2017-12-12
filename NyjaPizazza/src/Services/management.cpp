#include "management.h"


/*void Management::addPizza()
{
    system("CLS");
    cout << "Add pizza to menu" << endl;
    cout << "-----------------" << endl;
    Repository umsjonrepo;
    umsjonrepo.menu();

}
void Management::addTopping()
{
    system("CLS");
    cout << "Add toppings and price" << endl;
    cout << "----------------------" << endl;
    Repository umsjonrepo;
    umsjonrepo.toppings();
}
*/
void Management::Choices(){

    char choice = '\0';

    cout << "p: make pizza" << endl;
    cout << "t: add topping" << endl;

    cin >> choice;

    if(choice == 'p'){

        vector<Topping> toppings = toppingRepo.retrieveAllToppings();

        Pizza pizza;

        int toppingSelection = -1;
        while(toppingSelection != 0){
            cout << "Please enter id for toppings to add (0 for no more toppings)" << endl;
            for(unsigned int i = 0; i < toppings.size(); i++){
                cout << "[" << i + 1 << "] " << toppings[i] << endl;
            }
            cin >> toppingSelection;

            if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()){
                pizza.addTopping(toppings[toppingSelection -1]);
            }
        }

        //pizzaRepository.storePizza(pizza);

        cout << endl;
    }

    else if(choice == 't'){

        vector<Topping> toppings = toppingRepo.retrieveAllToppings();
        cout << "These are our current toppings: " << endl;
        for(unsigned int i = 0; i < toppings.size(); i++){
                cout << "[" << i + 1 << "] " << toppings[i] << endl;
        }

        char selection = 'y';
        Topping topping;
        while(selection == 'y'){

            cout << endl;

            cout << "Add another topping (y)? ";
            cin >> selection;
            if(selection == 'y'){
            cin >> topping;
            toppings.push_back(topping);
        }
    }
        toppingRepo.storeAllToppings(toppings);
}
}
