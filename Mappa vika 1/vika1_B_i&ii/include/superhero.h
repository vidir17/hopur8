#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream> //kodi sem var commentadur ut er vegna i lid
#include <string>   //ii lidurinn og i lidur er i raun sameinadur i thessu
#include <fstream>
using namespace std;
class SuperHero {
    private:
        char name[20];
        int age;
        char superpower;


    public:
        SuperHero();
        //~SuperHero();
       // SuperHero(char name, int age, char superpower);


        friend istream& operator >> (istream& in, SuperHero& superhero);
        friend ostream& operator << (ostream& out, const SuperHero& superhero);
       // string get_name(); //skilar til baka fra private
        //int get_age();
        //char get_superpower(char input);
};


#endif // SUPERHERO_H
