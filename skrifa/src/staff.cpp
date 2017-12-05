#include "staff.h"
#include <string>
Staff::Staff()
{
    input[0] = '\0';
    ssn[0] = '\0';
}

Staff::Staff(char input[40], char ssn[12])
{
    this->input[40] = input[40];
    this->ssn[12] = ssn[12]; //setja const gildi?
}

istream& operator >> (istream& in, Staff& staff){
    cout << "Name of employee: ";
    in.getline(staff.input, 40);


    cout << "Employee's social security number: ";
    in >> staff.ssn;


    return in;
}
ostream& operator << (ostream& out, const Staff& staff)
{

    out << "Name of employee: " << staff.input << endl;
    out << "SSN: " << staff.ssn << endl; //skritid ad that kom jafn long runa af kt thegar eg setti inn toluna 2
    return out;
}
/*Staff::~Staff()
{
    //dtor
}
*/
