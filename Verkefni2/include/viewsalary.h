#ifndef VIEWSALARY_H
#define VIEWSALARY_H
#include <fstream>
#include <iostream>
using namespace std;
class Viewsalary
{
    public:
        Viewsalary();
        //void opensalary();
        friend ostream& operator << (ostream& out, const Viewsalary& viewsalary);
        friend istream& operator >> (istream& in, Viewsalary& viewsalary);
    private:
        int inputssn;
};

#endif // VIEWSALARY_H
