#ifndef CONTROLLER1_H
#define CONTROLLER1_H
#include "buatil.h"
#include <iostream>
#include "gagnasafn.h"
#include <fstream>
#include "matsedill.h"
using namespace std;

class Controller1
{
    public:

        Controller1();
        Controller1(int menu);
        void prenta();
        void make();
        /*
        friend istream& operator >> (istream& in, Controller1& controller1);
        friend ostream& operator << (ostream& out, Controller1& controller1);
*/

    private:
        int menu;
};

#endif
