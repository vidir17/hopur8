#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string c;
    ifstream fin;

    fin.open("dummyFile.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            getline(fin, c);
            cout << c << endl;
        }
        fin.close();
    }
    else
    {
        cout << "Unable to read from file!" << endl;
    }

    return 0;
}
