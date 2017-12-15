#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <string>
using namespace std;
class Topping
{
    public:
        Topping();
        Topping(string name, int price);

        string getName();
        int getPrice();
        void setName(string newname);
        void setPrice(int newprice);

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, const Topping& topping);

    private:
        string name;
        int price;
};

#endif // TOPPING_H
