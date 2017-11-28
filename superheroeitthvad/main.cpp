#include <iostream>
#include <string>
#include <fstream>



using namespace std;


class SuperHero {

    private:

        string name;
        int age;
        char superpower[];

    public:
        SuperHero();
        SuperHero(string name, int age, char superpower);

        friend istream& operator >> (istream& in, SuperHero& superhero);
        friend ostream& operator << (ostream& out, const SuperHero& superhero);
        string get_name(); //skilar til baka fra private
        int get_age();
        char get_superpower(char input);



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
    superpower[0] = 'n';
}

SuperHero::SuperHero(string name, int age, char superpower){
    this->name = name;
    this->age = age;
    this->superpower[0] = superpower;

}
string SuperHero::get_name(){

    return name;

}
int SuperHero::get_age(){

    return age;

}
char SuperHero::get_superpower(char input){

    if(input == 'f'){
        superpower[0] == 'Flying';
    }
    else if(input == 'g'){
        superpower[0] == 'Giant';
    }
    else if(input == 'h'){
        superpower[0] == 'Hacker';
    }
    else if(input == 'n'){
        superpower[0] == 'None';
    }
    else
        superpower[0] == 'Weakling';

    return superpower[0];

}
istream& operator >> (istream& in, SuperHero& superhero){

    cout << "Nafn: ";
    in >> superhero.name;
    cout << "Aldur: ";
    in >> superhero.age;
    cout << "Type f for Flying" << endl;
    cout << "Type g for Giant" << endl;
    cout << "Type h for Hacker" << endl;
    cout << "Type n for None" << endl;
    cout << "please enter superpower..." << endl;
    cout << "Superpower: ";
    in >> superhero.superpower;


    return in;

}
ostream& operator << (ostream& out, const SuperHero& superhero){


        out << endl;
    if(superhero.superpower[0] == 'f'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Flying" << endl;
    }
    else if(superhero.superpower[0] == 'g'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Giant" << endl;
    }
    else if(superhero.superpower[0] == 'h'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Hacker" << endl;
    }
    else if(superhero.superpower[0] == 'n'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "None" << endl;
    }
    else{
        out << superhero.name << " " << "(" << superhero.age << "): " << "Weakling" << endl;
    }



    return out;

}
