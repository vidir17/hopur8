#include <iostream>
//#include <
#include <stdlib.h>
using namespace std;

int main()
{
    int a;
    cout << "Velkomin/n a Pizza Menntavegi 1" << endl;
    cout << endl;
    cout << "       ##############" << endl;
    cout << "       #PANTA PITSU?#" << endl;
    cout << "       ##############" << endl;
    cout << "          Yttu a 1" << endl;

    cout << endl;
    cout << endl;
    cout << "Fyrir starfsfolk yttu a 0";
    cout << endl;
    cout << "1 eda 0: ";
    cin >> a;
    if(a == 1){
    system ("CLS");
    cout << "Pitsur" << endl;
    }
    if(a == 0){
    system ("CLS");

    cout << "1. Umsjonarfolk" << endl;
    cout << "2. Solufolk" << endl;
    cout << "3. Bakari" << endl;
    cout << "Type number: ";
    cin >> a;
    if(a == 1){
        system("CLS");
        cout << "Umsjonarmadur" << endl;
        cout << "Notandi: ";
        cin >> a;
        system("CLS");
        cout << "Notandi: " << a << endl;
        cout << "Lykilord: ";
        cin >> a;

    }

    }




    return 0;
}
