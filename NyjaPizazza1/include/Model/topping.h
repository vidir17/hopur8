#ifndef TOPPING_H
#define TOPPING_H

#include <iostream>
#include <string>

using namespace std;


class Topping
{
    public:
        Topping();
        Topping(string name, double price);
        virtual ~Topping();

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, const Topping& topping);

    protected:

    private:
        string name;
        double price;
};

#endif // TOPPING_H
