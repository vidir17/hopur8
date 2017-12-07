#ifndef CONTROLLER3_H
#define CONTROLLER3_H
#include <fstream>
#include <iostream>
#include "gagnasafn.h"
using namespace std;
class Controller3
{
    public:
        Controller3();
        friend istream& operator >> (istream& in, Controller3& controller3);

        friend ostream& operator << (ostream& out, Controller3& controller3);
};

#endif // CONTROLLER3_H
