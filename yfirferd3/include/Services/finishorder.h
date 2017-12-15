#ifndef FINISHORDER_H
#define FINISHORDER_H
#include "toppingrepo.h"
using namespace std;
class FinishOrder
{
    public:
        void call();
        void addPhoneNumber();
        void addTime();
    private:
        ToppingRepo toppingrepo;
};

#endif // FINISHORDER_H
