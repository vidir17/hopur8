#include "buatilpontun.h"

void Buatilpontun::matsedill() //Ef 1 er valinn i panta pizzu
{
    Pontunrepo pontunrepo;
    pontunrepo.read_menu(); //lesa af menu og fa ad velja
}
void Buatilpontun::buatilpizzu() //Ef 2 er valinn i panta pizzu
{
    Pontunrepo pontunrepo;
    pontunrepo.write_order(); //bua til pizzu
}
