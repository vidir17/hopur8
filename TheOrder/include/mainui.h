#ifndef MAINUI_H
#define MAINUI_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
class MainUI{

private:
    int choice;

public:


    MainUI();
    MainUI(int choice);
    friend istream& operator >> (istream& in, MainUI& mainUI);
    friend ostream& operator << (ostream& out, MainUI& mainUI);
    int getChoice();
    void setChoice(int number);
};

#endif // MAINUI_H
