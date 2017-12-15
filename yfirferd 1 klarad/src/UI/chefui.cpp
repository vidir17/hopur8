#include "chefui.h"

void ChefUI::choose()
{
    int get;

    cout << "1: Show pending orders" << endl;
    cout << "2: Show orders in making" << endl;
    cin >> get;
    if(get == 1){

        chef.viewOrder(); //skoðar pantanir
        cout << "1: to choose the oldest order" << endl;
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
