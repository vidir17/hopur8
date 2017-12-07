#ifndef BAKARI_H
#define BAKARI_H
#include <fstream>
#include <iostream>

#include <stdlib.h>
#include "controller3.h"
using namespace std;
class Bakari
{
    public:
        Bakari();
        friend istream& operator >> (istream& in, Bakari& bakari);
        friend ostream& operator << (ostream& out, Bakari& bakari);

    private:
        int bakari_val;
};

#endif // BAKARI_H
