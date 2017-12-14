#include "management.h"


void Management::addTopping(const Topping& topping){

    //toppingRepo.add(topping);

}

void Management::addPizzaMenu(const Pizza& pizza){

    //toppingRepo.addP(pizza);
}

vector<Topping> Management::viewTopping(){
    return toppingRepo.viewT();
}
/*
vector<Topping> Management::viewPizza(){
    return toppingRepo.viewP();
}

void Management::addPizzaMenu(const Pizza& pizza){


        vector<Topping> toppings = toppingRepo.retrieveAllToppings();

        //Pizza pizza;

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

void Management::viewTopping(){

    //lesa úr skjali sem búið er til í addTopping
}



 void Management::addTopping(){


    Topping topping;
        vector<Topping> toppings = toppingRepo.retrieveAllToppings();
        cout << "These are our current toppings: " << endl;
        for(unsigned int i = 0; i < toppings.size(); i++){
                cout << "[" << i + 1 << "] " << toppings[i] << endl;
        }

        char selection = 'y';

        while(selection == 'y'){

            cout << endl;

            cout << "Add another topping (y)? ";
            cin >> selection;
            if(selection == 'y'){
            cin >> topping;
            toppings.push_back(topping);
        }
        else{
            cout << "OK THEN!!!" << endl;

    }
        toppingRepo.storeAllToppings(toppings);
}

 }*/
