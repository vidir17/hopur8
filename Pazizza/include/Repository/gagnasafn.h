#ifndef GAGNASAFN_H
#define GAGNASAFN_H
#include <vector>
#include <fstream>
#include <stdlib.h> //fyrir exit?
#include <iostream> //must?
using namespace std;
class Gagnasafn
{
    public:
        void printfyrir1();
        void printfirst();
        void read(); //Panta pizzu menu listi
        void write(); //Bua til pizzu
        void insert_new_pizza();
        void insert_new_topping();
        void orders();//Bakari skodar nyjar pantanir
};

#endif // GAGNASAFN_H
