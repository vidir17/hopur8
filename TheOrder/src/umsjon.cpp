#include "umsjon.h"


Umsjon::Umsjon()
{
    Uchoice = 0;
}

Umsjon::Umsjon(int Uchoice){
    this->Uchoice = Uchoice;
}
int Umsjon::getUChoice(int Uchoice){
    return Uchoice;
}

void Umsjon::executeUChoice(int Uchoice){

    if(Uchoice == 1){
        ///kalla á búa til matseðil úr controller

    }
    else if(Uchoice == 2){
        ///kalla á adda topping

    }
    else if(Uchoice == 3){
        ///kalla á búa til tilboð
    }
    else if(Uchoice == 4){
        ///kalla á búa til gos lista
    }
    else{
        cout << "Invalid choice, try again.";
    }

}
