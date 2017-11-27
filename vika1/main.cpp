#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string c;
    ifstream fin;
    bool run = true;
    int counter = 0;
    char val = 'y';
    fin.open("dummyFile.txt");

    if(fin.is_open())
    {
        do{
        while(counter < 10){
            getline(fin, c);
            cout << c << endl;
        counter++;
        }
        cout << "Do you wish to continue (y/n)?" << endl;
        cin >> val;
        if(val == 'y' || val == 'Y'){
                counter = 0;

        }
        else if(val == 'n' || val == 'N'){
            run = false;
        }
        }while(run);

    fin.close();
    }
    else
    {
        cout << "Unable to read from file!" << endl;
    }
    return 0;
}
