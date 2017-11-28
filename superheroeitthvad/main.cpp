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
        SuperHero(char name, int age, char superpower);


        friend istream& operator >> (istream& in, SuperHero& superhero);
        friend ostream& operator << (ostream& out, const SuperHero& superhero);
        string get_name(); //skilar til baka fra private
        int get_age();
        char get_superpower(char input);
};

int main()
{

    SuperHero bjoggi;
    cin >> bjoggi;
    ofstream fout;
    fout.open("binary.dat", ios::binary|ios::app);
    fout.write((char*)(&bjoggi), sizeof(SuperHero));
    fout.close();
    SuperHero kari;
    ifstream fin;
    fin.open("binary.dat", ios::binary|ios::app);
    fin.seekg(0,fin.end);//finnur enda
    int records = fin.tellg()/sizeof(SuperHero); //size
    fin.seekg(0,fin.beg); //beginning
    SuperHero *data = new SuperHero[records];

    if(fin.is_open()){
        fin.read((char*)data, sizeof (SuperHero)*records);
        for(int i = 0; i < records; i++){

        cout << data[i] << endl;
        }
    }else{
        cout << "could not open file" << endl;
    }
    fin.close();
    /*for(int i = 0; i < records; i++){
        cout << data[i] << endl;
    }*/
    delete[] data;


    /* COMMENT: FYRSTI LIÐURINN (tokum ut til ad gera fyrir test)
    SuperHero bjoggi;
    ifstream fin;
    ofstream fout;
    cin >> bjoggi;
    fin.open("binary_file_SuperHero.dat", ios::binary);
    fout.open("binary_file_SuperHero.dat", ios::app);
        fout << bjoggi << endl;
    fout.close();
    cout << bjoggi;


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

*/
    return 0;
}

SuperHero::SuperHero(){
    name[0] = '\0';
    age = 0;
    superpower = 'n';
}

/*SuperHero::SuperHero( char name, int age, char superpower){
    this->name = name;
    this->age = age;
    this->superpower = superpower;

}
char SuperHero::get_name(){

    return name;

}
int SuperHero::get_age(){

    return age;

}*/
istream& operator >> (istream& in, SuperHero& superhero){
    cout << "Nafn: ";
    //getline(in, superhero.name);
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
