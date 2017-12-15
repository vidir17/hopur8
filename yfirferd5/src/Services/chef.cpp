#include "chef.h"

void Chef::viewOrder()
{
  //lesa ur skjali pantana til ad syna pantanir
  toppingrepo.seeOrder();
}
void Chef::moveOrder()
{
    toppingrepo.moveOrder();
}
void Chef::viewBaker()
{
    toppingrepo.seeBaker();
}
void Chef::moveToComplete()
{
    toppingrepo.moveToComplete();
}
