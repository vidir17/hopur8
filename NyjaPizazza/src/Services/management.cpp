#include "management.h"
/*void Management::addPizza()
{
    system("CLS");
    cout << "Add pizza to menu" << endl;
    cout << "-----------------" << endl;
    Repository umsjonrepo;
    umsjonrepo.menu();

<<<<<<< HEAD
}*/
=======
}
*/
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
void Management::addTopping()

{
<<<<<<< HEAD
    myVec =  toppingRepo.retrieveAllToppings();
}
vector<Topping> Management::returnAllToppingDataToUI(){
    //Populating the myVec vector with data
    addTopping();
    return myVec;
}
=======
    //system("CLS");
    //cout << "Add toppings and price" << endl;
    //cout << "----------------------" << endl;
    Repository umsjonrepo;
    umsjonrepo.addTopping();
}
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
/*
void Management::addPizza(){


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
void Management::viewTopping(){

    lesa �r skjali sem b�i� er til � addTopping
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
<<<<<<< HEAD
 }*/
=======

 }
write(ofstream& fout) const{

}
read(ifstream& fin){

}
*/
>>>>>>> 7ed9d59251ce10c48cf580206a487f6b7d863474
