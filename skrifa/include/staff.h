#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Staff
{
    private:
        char input[40];
        char ssn[12];
    public:
        Staff();
        Staff(char input[40], char ssn[12]);
        //Staff(char input);
        friend istream& operator >> (istream& in, Staff& staff);
        friend ostream& operator << (ostream& out, const Staff& staff);




};

#endif // STAFF_H
