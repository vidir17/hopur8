#ifndef CONTROLLER2_H
#define CONTROLLER2_H
#include <fstream>
#include <iostream>
using namespace std;
class Controller2
{
    public:
        Controller2();
        void New_pizza();
        void New_toppings();
        /*
        friend istream& operator >> (istream& in, Controller2& controller2);

        friend ostream& operator << (ostream& out, Controller2& controller2);
        */

};

#endif // CONTROLLER2_H
