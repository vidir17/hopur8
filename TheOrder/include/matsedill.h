#ifndef MATSEDILL_H
#define MATSEDILL_H
#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;

class Matsedill{
public:
    int getChoice;
    Matsedill();
    void get_txt();
    friend istream& operator >> (istream& in, Matsedill& matsedill);
    friend ostream& operator << (ostream& out, Matsedill& matsedill);


};

#endif // MATSEDILL_H
