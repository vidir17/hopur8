#include "mainui.h"

MainUI::MainUI()
{
    choice = 0;
    password = "";
}

MainUI::MainUI(int choice, string password){
        this->choice = choice; //breyta fyrir valmoguleika
        this->password = password; //breyta fyrir lykilord
}

istream& operator >> (istream& in, MainUI& mainUI)
{

                if(mainUI == 1){
                Panta panta;
                cout << panta;
                in >> panta;
                }
