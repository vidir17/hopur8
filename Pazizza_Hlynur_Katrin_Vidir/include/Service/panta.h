#ifndef PANTA_H
#define PANTA_H


class Panta
{
    public:

        friend ostream& operator << (ostream& out, Panta& panta);
        friend istream& operator >> (istream& in, Panta& panta);
};

#endif // PANTA_H
