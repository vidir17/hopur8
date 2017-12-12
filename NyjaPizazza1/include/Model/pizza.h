#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <vector>

using namespace std;

#include "topping.h"

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void addTopping(Topping topping);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza);

    protected:

    private:
        vector<Topping> toppings;
};

#endif // PIZZA_H
