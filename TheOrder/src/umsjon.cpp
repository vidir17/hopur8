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
        ///kalla � b�a til matse�il �r controller

    }
    else if(Uchoice == 2){
        ///kalla � adda topping

    }
    else if(Uchoice == 3){
        ///kalla � b�a til tilbo�
    }
    else if(Uchoice == 4){
        ///kalla � b�a til gos lista
    }
    else{
        cout << "Invalid choice, try again.";
    }

}
