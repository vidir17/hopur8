#include "viewsalary.h"

Viewsalary::Viewsalary()
{
    inputssn = "";
}
Viewsalary::Viewsalary(string inputssn)
{
    this->inputssn = inputssn;
}
string Viewsalary::getInputssn(string inputssn){
    return this->inputssn;
}
ostream& operator << (ostream& out, const Viewsalary& viewsalary){
     out << "Input search for SSN: " << endl;
     return out;
}
istream& operator >> (istream& in, Viewsalary& viewsalary){
     //in >> viewsalary.inputssn;
    string ch;
    ifstream fin;
    fin.open("Salary.txt", ios::app);
    if(fin.is_open()){
         while(!fin.eof())
         {
             //fin.get(ch);
             getline(fin, ch, ',');
             if(ch == "SSN: 1111111111"){
             cout << ch << endl;
             }
         }
     }
    else
    {
        cout << "404" << endl;
    }
        fin.close();


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
