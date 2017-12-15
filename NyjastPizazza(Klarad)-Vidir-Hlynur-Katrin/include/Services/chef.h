#ifndef CHEF_H
#define CHEF_H
#include "chef.h"
#include "toppingrepo.h"
using namespace std;
class Chef
{
    public:
        void viewOrder(); //fall sem sækir pantanir.txt pizzur merktar i vinnslu
        void moveOrder();//ef input er 1
        void viewBaker();
        void moveToComplete();
    private:
        ToppingRepo toppingrepo;
};

#endif // CHEF_H
