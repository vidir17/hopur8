#ifndef GAGNASAFN_H
#define GAGNASAFN_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "controller1.h"
#include <vector>
using namespace std;

class Gagnasafn
{
    public:

       Gagnasafn();
       void printfyrir1();
       void get_txt(); //pantapizzu texti
       void printfirst(); //prenta ut fyrir panta pizzu
       void insert_new_pizza(); //bua til pizzu fyrir umsjon
       void open_bakerlist(); //fyrir bakara
       void insert_new_topping();//bua til ny alegg og baeta verd

    private:
};

#endif // GAGNASAFN_H
