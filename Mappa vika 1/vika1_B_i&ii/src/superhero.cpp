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
    cout << "Type name of hero, age and superpower, example:" << endl;
    cout << "Name: Bjorgvin" << endl;
    cout << "Age: 27" << endl;
    cout << "Superpower: h" << endl;
    cout << endl;
    cout << "Example output: " << endl;
    cout << "Bjorgvin (27): Hacker" << endl;
    cout << "Hero must be 1 years old or older." << endl;
    cout << "Name length must be less or equal to 20 characters." << endl;
    cout << "-----------------------------------------------" << endl;
    cout << endl;
    cout << "Name: ";

    //getline(in, superhero.name);
    //in >> superhero.name;
    in.get(superhero.name,20);



    /*if(superhero.name > in.get(superhero.name, 20)){
      cout << "wtf";
    }*/
    /*while(in.get(superhero.name, 20) > 20){
        cout << "invalid input";
        return 0;
    }*/
    cout << "Age: ";
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

    if(superhero.age <= 0){ //Ef innslattur er rangur

        return out;
    }
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
        out << endl;
    return out;
}
