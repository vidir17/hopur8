#ifndef EXTRAS_H
#define EXTRAS_H

#include <string>

using namespace std;


class Extras
{
    public:
        Extras();
        string soda;
        string menuItem;
        int price;
        string getSoda();
        string getMenuItem();
        int getPrice();
        void setSoda(string newsoda);
        void setMenuItem(string newmenuitem);
        void setPrice(int newprice);

        friend istream& operator >> (istream& in, Extras& extras);
        friend ostream& operator << (ostream& out, const Extras& extras);


    private:
};

#endif // EXTRAS_H
