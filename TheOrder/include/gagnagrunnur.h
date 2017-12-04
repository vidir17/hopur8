#ifndef GAGNAGRUNNUR_H
#define GAGNAGRUNNUR_H
#include <iostream>
using namespace std;

class Gagnagrunnur
{
    public:

        Gagnagrunnur();
        Gagnagrunnur(int menu);
        friend istream& operator >> (istream& in, Gagnagrunnur& gagnagrunnur);
        friend ostream& operator << (ostream& out, Gagnagrunnur& gagnagrunnur);


    private:
        int menu;
};

#endif // GAGNAGRUNNUR_H
