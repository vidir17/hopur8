#ifndef CONTROLLER1_H
#define CONTROLLER1_H
#include <iostream>
using namespace std;

class Controller1
{
    public:

        Controller1();
        Controller1(int menu);
        friend istream& operator >> (istream& in, Controller1& controller1);
        friend ostream& operator << (ostream& out, Controller1& controller1);


    private:
        int menu;
};

#endif
