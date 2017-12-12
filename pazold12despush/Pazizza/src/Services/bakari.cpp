#include "bakari.h"

void Bakari::view()
{
    system("CLS");
     cout << "1. Skoda allar pantanir" << endl;
    cout << "------------------------" << endl;
    Bakarirepo bakarirepo;
    bakarirepo.vieworders(); //skodar pantanir til ad velja
}
