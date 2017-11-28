#include <iostream>
#include <string>
#include <fstream>



using namespace std;


class SuperHero {

    private:

        string name;
        int age;
        char superpower;

    public:
        SuperHero();
        SuperHero(string name, int age, char superpower);
        friend istream& operator >> (istream& in, SuperHero& superhero);
        friend ostream& operator << (ostream& out, const SuperHero& superhero);



};

int main()
{
    SuperHero bjoggi;
    ofstream fout;
    cin >> bjoggi;

    //bool run = true;
    fout.open("Ofurhetja.txt", ios::app);
    //if(fout.is_open()){
        fout << bjoggi << endl;
    //}
    fout.close();
    cout << bjoggi;
    return 0;
}

SuperHero::SuperHero(){
    name = "";
    age = 0;
    superpower = 'n';
}

SuperHero::SuperHero(string name, int age, char superpower){
    this->name = name;
    this->age = age;
    this->superpower = superpower;

}

istream& operator >> (istream& in, SuperHero& superhero){

    cout << "Nafn: ";
    in >> superhero.name;
    cout << "Aldur: ";
    in >> superhero.age;
    cout << "Superpower: ";
    in >> superhero.superpower;


    return in;

}
ostream& operator << (ostream& out, const SuperHero& superhero){

    out << "Nafn: " << superhero.name << endl;
    out << "Aldur: " << superhero.age << endl;
    out << "Superpower: " << superhero.superpower << endl;

    return out;

}
