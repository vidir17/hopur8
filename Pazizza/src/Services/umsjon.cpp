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
