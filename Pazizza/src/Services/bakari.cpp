#include "bakari.h"

void Bakari::view()
{
    system("CLS");
     cout << "1. Skoda allar pantanir" << endl;
     cout << "2. Bakstur lokid a pizzu og tilbuin til afgreidslu" << endl;
     cout << "--------------------------------------------------" << endl;
    Bakarirepo bakarirepo;
    bakarirepo.vieworders(); //skodar pantanir til ad velja

}
