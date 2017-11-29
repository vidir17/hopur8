#include "superhero.h"

SuperHero::SuperHero(){
    name[0] = '\0';
    age = 0;
    superpower = 'n';
}
SuperHero::~SuperHero()
{
    //dtor


}
istream& operator >> (istream& in, SuperHero& superhero){
    cout << "Nafn: ";
    //getline(in, superhero.name);
    //in >> superhero.name;
    in.get(superhero.name,20); //virkar fyrir bil lika
    /*if(superhero.name > in.get(superhero.name, 20)){
      cout << "wtf";
    }*/
    /*while(in.get(superhero.name, 20) > 20){
        cout << "invalid input";
        return 0;
    }*/
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


    if(superhero.superpower == 'f'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Flying" << endl;
    }
    else if(superhero.superpower == 'g'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Giant" << endl;
    }
    else if(superhero.superpower == 'h'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "Hacker" << endl;
    }
    else if(superhero.superpower == 'n'){
        out << superhero.name << " " << "(" << superhero.age << "): " << "None" << endl;
    }
    else{
        out << superhero.name << " " << "(" << superhero.age << "): " << "Weakling" << endl;
    }

    return out;
}
