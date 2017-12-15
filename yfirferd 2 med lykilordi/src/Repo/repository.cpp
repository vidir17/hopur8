#include "repository.h"

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
