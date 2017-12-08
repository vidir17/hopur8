#include "viewsalary.h"

Viewsalary::Viewsalary()
{
    inputssn = 0;
}
ostream& operator << (ostream& out, const Viewsalary& viewsalary){
     out << "Input search for SSN: ";
     return out;
}
istream& operator >> (istream& in, Viewsalary& viewsalary){
     in >> viewsalary.inputssn;
     if(viewsalary.inputssn == 0000112222){
            cout << "right";
     }
    return in;
}
                /*fin.open("out.txt");
        while(input > teljari){
            counter2 += 7;
            while(counter < counter2){ //10 linur i einu

            getline(fin, ch); //naer i linu

             //prentar ut
        counter++;

            }
        }
     }
}
*/
