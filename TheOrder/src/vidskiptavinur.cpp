#include "vidskiptavinur.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "controller1.h"


Vidskiptavinur::Vidskiptavinur()
{
    //ctor
    neytandi_velur = 0;
}

Vidskiptavinur::Vidskiptavinur(int neytandi_velur)
{

    this->neytandi_velur = neytandi_velur;

}
int Vidskiptavinur::getVelur(int neytandi_velur){
    return neytandi_velur;
}
istream& operator >> (istream& in, Vidskiptavinur& vidskiptavinur)
{
    system("CLS");
    cout << "welcome to the class";

    in >> vidskiptavinur.neytandi_velur;
    if(vidskiptavinur.neytandi_velur == 1)
    {
        Gagnagrunnur gagnagrunnur;
        system("CLS");
        in >> gagnagrunnur;

    }

    return in;
}
ostream& operator << (ostream& out, Vidskiptavinur& vidskiptavinur)
{
    out << "Vidskiptavinur prufa";
    out << vidskiptavinur.neytandi_velur;
    return out;
}
