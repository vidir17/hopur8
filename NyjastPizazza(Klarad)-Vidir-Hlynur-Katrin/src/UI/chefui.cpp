#include "chefui.h"

void ChefUI::choose()
{
    int get;

    cout << "1: syna pantanir sem eru a bidlista" << endl;
    cout << "2: syna pantanir sem eru komnar inna bakara" << endl;
    cin >> get;
    if(get == 1)
    {
        chef.viewOrder(); //skoðar pantanir
        cout << "Til ad ad velja elstu pöntunina, veldu 1:" << endl;
        cin >> get;
        if(get == 1)
        {
            chef.moveOrder(); //komid fyrir 1
        }
    }
    if(get == 2){
            chef.viewBaker();
            chef.moveToComplete();
    }
}
