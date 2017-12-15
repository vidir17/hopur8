#ifndef REPO_H
#define REPO_H
#include <fstream>
#include <iostream>
//#include "gagnasafn.h"

class Repo
{
    public:
        void pontun_timi();//synir tima a pontun
        void menu_order(); //panta af matsedli
        void add_menu();


    //private:
        ofstream fout;
        ifstream fin;

};

#endif // REPO_H
