#ifndef VIDSKIPTAVINUR_H
#define VIDSKIPTAVINUR_H
#include <iostream>
using namespace std;

class Vidskiptavinur
{
private:
    int neytandi_velur;

    public:

        Vidskiptavinur();
        Vidskiptavinur(int neytandi_velur);
        int getVelur(int neytandi_velur);
        friend istream& operator >> (istream& in, Vidskiptavinur& vidskiptavinur);
        friend ostream& operator << (ostream& out, Vidskiptavinur& vidskiptavinur);



};

#endif // VIDSKIPTAVINUR_H
