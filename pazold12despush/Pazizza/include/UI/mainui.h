#ifndef MAINUI_H
#define MAINUI_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "buatilpontun.h"
#include "umsjon.h"
#include "bakari.h"
#include "afgreidsla.h"
using namespace std;
class MainUI{

private:
    int choice;
    string password;

public:


    MainUI();
    MainUI(int choice, string password);
    friend istream& operator >> (istream& in, MainUI& mainUI);
    friend ostream& operator << (ostream& out, MainUI& mainUI);

};

#endif // MAINUI_H
