#include "buatil.h"


istream& operator >> (istream& in, Buatil& buatil){

    Controller1 controller1;
    in >> controller1.make();
    return in;
}

