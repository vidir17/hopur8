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

    return 0;
}

SuperHero::SuperHero(){
    name = " ";
    age = 0;
    superpower = 'n';
}

SuperHero::SuperHero(string name, int age, char superpower){
    name = name;
    age = age;
    superpower = superpower;

}

istream& operator >> (istream& in, SuperHero& superhero){

    in >> superhero.name >> superhero.age >> superhero.superpower;

    return in;

}
ostream& operator << (ostream& out, const SuperHero& superhero){

    out << superhero.name << " " ;
    out << superhero.age <<     ;
    out << superhero.superpower << ;

    return out;

}
