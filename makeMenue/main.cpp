/* Þarf að vinna í því að gefa val að velja fleiri en eitt topping, og skoða að gera void fall úr dótinu
    Skilar af sér pizzamenu.txt
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MakeMenu{

    private:
        string name;
        string toppings;
        double price;
        //int numberOfToppings;

    public:
        MakeMenu();
        MakeMenu(string name, string toppings, double price);
        string getName(string name);
        string getToppings(string toppings);
        double getPrice(double price);
        //void createPizza(string name, string toppings, double price);
        friend ostream& operator << (ostream& out, MakeMenu& menu);
        friend istream& operator >> (istream& in, MakeMenu& menu);


};

int main()
{

    MakeMenu menuPizza;
    string name;
    string toppings;
    double price = 0.0;


    ofstream fout;
    fout.open("pizzaMenu.txt", ios::app);

    //menuPizza.createPizza(name, toppings, price);
    cout << "What will you call this pizza? ";
    cin >> name;
    //cout << "How many toppings does it have? ";
    //cin >> menu.numberOfToppings;
        //for()
    cout << "What toppings does it have? ";
    cin >> toppings;
    cout << "How much does it cost? ";
    cin >> price;

    if(fout.is_open()){
        fout << name << "\t" << price << endl;
        fout << toppings << endl;
    }
    else {
        cout << "File could not be opened!" << endl; //líklegast óþarfi
    }

    fout.close();

    return 0;
}


MakeMenu::MakeMenu(){
    name = "";
    //numberOfToppings = 0;
    toppings = "";
    price = 0.0;

}
MakeMenu::MakeMenu(string name, string toppings, double price){
    this->name = name;
    //this->numberOfToppings = numberOfToppings;
    this->toppings = toppings;
    this->price = price;
}
/*void MakeMenu::createPizza(string name, string toppings, double price){

    cout << "What will you call this pizza? ";
    cin >> name;
    //cout << "How many toppings does it have? ";
    //cin >> menu.numberOfToppings;
        //for()
    cout << "What toppings does it have? ";
    cin >> toppings;
    cout << "How much does it cost? ";
    cin >> price;

}*/

string MakeMenu::getName(string name){
    return name;
}

string MakeMenu::getToppings(string toppings){
    return toppings;
}

double MakeMenu::getPrice(double price){
    return price;
}


ostream& operator << (ostream& out, MakeMenu& menu){

    out << "What will you call this pizza? ";
    //out << "How many toppings does it have? "
    out << "What toppings does it have? ";
    out << "How much does it cost? ";


    return out;
}

istream& operator >> (istream& in, MakeMenu& menu){

    in >> menu.name;
    //in >> menu.numberOfToppings;
    in >> menu.toppings;
    in >> menu.price;

    return in;
}
