#include <mainui.h> //Klasi fyrir Main user interface

using namespace std;

int main()
{
    MainUI user;
    cout << user;
    cin >> user;
    return 0;
}


/*
    fin.open("matsedill.txt");
    if(fin.is_open()){
        while(!fin.eof()){

        fin >> c;
        cout << c << endl;
        }

    fin.close();
    }else{
        cout << "Unable to read from file!" << endl;
    }
    */
