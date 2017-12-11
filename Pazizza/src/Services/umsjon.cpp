#include "umsjon.h"

void Umsjon::new_menu()
{
    system("CLS");
    cout << "Add pizza to menu" << endl;
    cout << "-----------------" << endl;
    Umsjonrepo umsjonrepo;
    umsjonrepo.menu();

}
void Umsjon::new_toppings()
{
    system("CLS");
    cout << "Add toppings and price" << endl;
    cout << "----------------------" << endl;
    Umsjonrepo umsjonrepo;
    umsjonrepo.toppings();
}
 void Umsjon::new_medlaeti()
 {
    system("CLS");
    cout << "Add medlaeti and price" << endl;
    cout << "----------------------" << endl;
    Umsjonrepo umsjonrepo;
    umsjonrepo.medlaeti();
 }
 void Umsjon::new_botn()
 {
    system("CLS");
    cout << "Add botn" << endl;
    cout << "--------" << endl;
    Umsjonrepo umsjonrepo;
    umsjonrepo.botn();
 }
void Umsjon::new_staerdir()
{
    system("CLS");
    cout << "Add new pizza size" << endl;
    cout << "------------------" << endl;
    Umsjonrepo umsjonrepo;
    umsjonrepo.staerdir();
}
