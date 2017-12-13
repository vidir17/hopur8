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
        void setName(string name);
        void setPrice(int price);

        /*void write(ofstream& fout) const;
        void read(ifstream& fin);*/

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, const Topping& topping);



    private:
        string _name;
        int _price;
};

#endif // TOPPING_H
