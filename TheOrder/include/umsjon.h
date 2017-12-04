#ifndef UMSJON_H
#define UMSJON_H

using namespace std;


class Umsjon
{
    public:
        Umsjon();
        Umsjon(int Uchoice);
        int getUChoice(int Uchoice);
        void executeChoice(int Uchoice)



    private:
        int Uchoice;
};

#endif // UMSJON_H
