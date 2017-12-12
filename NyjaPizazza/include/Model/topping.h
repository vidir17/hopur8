#ifndef TOPPING_H
#define TOPPING_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Topping
{
    public:
        Topping();
        Topping(string name, int price);

        string getName();
        int getPrice();
        void setName();
        void setPrice();

        /*void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, const Topping& topping);*/

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPING_H
