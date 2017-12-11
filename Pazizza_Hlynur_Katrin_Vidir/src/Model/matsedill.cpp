#include "matsedill.h"


ostream& operator << (ostrem& out, Matsedill& matsedill)
{
        ifstream fin;
        string lina1:
        fin.open("menu.txt", ios::app);
        while(!fin.eof())
        {
            getline(fin,lina1);
            out << lina1 << endl;
        }
        fin.close();
        return out;
}
