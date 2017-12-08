#ifndef VIEWSALARY_H
#define VIEWSALARY_H
#include <fstream>
#include <iostream>
using namespace std;
class Viewsalary
{
    public:
        Viewsalary();
        Viewsalary(string inputssn);
        //void opensalary();
        string getInputssn(string inputssn);
        friend ostream& operator << (ostream& out, const Viewsalary& viewsalary);
        friend istream& operator >> (istream& in, Viewsalary& viewsalary);
    private:
        string inputssn;
};

#endif // VIEWSALARY_H
