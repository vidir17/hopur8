#ifndef GAGNASAFN_H
#define GAGNASAFN_H
#include <vector>
#include <fstream>
#include <stdlib.h> //fyrir exit?
#include <iostream> //must?
#include <ctime> //fyrir tima
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
        void pontun_timi();
        void afgreidsla_loopa();
        void view_pre(); //inn i loopu
        void view_bake(); //inn i loopu
        //void view_completed(); //inn i loopu
};

#endif // GAGNASAFN_H
