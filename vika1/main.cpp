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
        //while(val == 'y' || val == 'Y'){

        while(counter < 10){
        //for(int i = 0; getline(fin, c); i++){
        //while(!fin.eof())
        //{
            getline(fin, c);
            cout << c << endl;
        //}
        counter++;
        //}

        }
        cout << "Do you wish to continue (y/n)?" << endl;
        cin >> val;
        //while(val == 'y' || val == 'Y' || val == 'n' || val == 'N'){

        if(val == 'y' || val == 'Y'){
                counter = 0;

        }
        else if(val == 'n' || val == 'N'){
            run = false;
        }
        //}

        }while(run);

    fin.close();
    }
    else
    {
        cout << "Unable to read from file!" << endl;
    }

    return 0;
}
