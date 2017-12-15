#include "repository.h"

/*void Repository::menu()
{
    Gagnasafn gagnasafn;
    gagnasafn.insert_new_pizza();
}
void Repository::toppings()
{
    Gagnasafn gagnasafn;
    gagnasafn.insert_new_topping();
}*/

/*void Repository::addPizza()
{
    ofstream fout;
    fout.open("out.txt", ios::app);
    string val1,val2,val3,val4;
    cout << "Pizza: ";
    cin >> val1;
    cout << "Alegg: ";
    cin >> val2;//getline(cin, val));
    cout << "Staerd: ";
    cin >> val3;
    cout << "Verd: ";
    cin >> val4;

    fout << "Nr." << endl;
    fout << "****" << endl;

    fout << "Pizza: " << val1 << endl;
    fout << "Alegg: " << val2 << endl;
    fout << "Staerd: " << val3 << endl;
    fout << "Verd: " << val4 << endl;


    fout << endl;

    //Write string to the file.
    fout.close();
}*/
void Repository::addTopping()
{
    ofstream fout;
    fout.open("toppings.txt", ios::app);
    int fjoldi; //velja fjolda aleggs tegunda
    //string val; //toppings
    int i;//vector loopu breyta
    double price;
    string top;
    cout << "Hversu margar aleggstegundir viltu baeta inn?" << endl;
    //cout << ": ";
    cin >> fjoldi;
    vector<string> val;
    vector<double> val2;
    for(i = 0; i < fjoldi; i++){
    cin >> top;
    //cout << "Price: ";
    cin >> price;
    val.push_back(top);
    val2.push_back(price);
    fout << val[i] << "," << val2[i] << endl;
    }
    fout.close();

}
