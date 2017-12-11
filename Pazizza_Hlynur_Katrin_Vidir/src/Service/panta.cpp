#include "panta.h"

ostream& operator << (ostream& out, Panta& panta)
{
    out << "1. Panta af matsedli" << endl;
    out << "2. Setja saman pizzu" << endl;
    out << "3. Medlaeti" << endl;
    out << endl;
    out << endl;
    out << "5. ljuka pontun og skra simanumer" << endl;
}
istream& operator >> (istream& in, Panta& panta)
{
    int choose;
    in >> choose;
    if(choose == 1)
    {
        cout <<
    }
}
