#ifndef UMSJON_H
#define UMSJON_H
#include <fstream>
#include <iostream>

#include <stdlib.h>
#include "controller2.h"
using namespace std;
class Umsjon
{
    public:
        Umsjon();


        friend istream& operator >> (istream& in, Umsjon& umsjon);
        friend ostream& operator << (ostream& out, Umsjon& umsjon);
    private:
        int umsjon_val;
};

#endif // UMSJON_H
