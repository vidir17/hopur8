#ifndef MATSEDILL_H
#define MATSEDILL_H
#include <fstream>
#include <iostream>
#include "gagnasafn.h"

class Matsedill
{
    public:
        friend ostream& operator << (ostrem& out, Matsedill& matsedill);
};

#endif // MATSEDILL_H
