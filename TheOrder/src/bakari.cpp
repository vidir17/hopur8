#include "bakari.h"

Bakari::Bakari()
{
    //ctor
}

istream& operator >> (istream& in, Bakari& bakari){

   return in;
}
ostream& operator << (ostream& out, Bakari& bakari){
    out << "Opna naestu pontun til baksturs" << endl;
    return out;
}
