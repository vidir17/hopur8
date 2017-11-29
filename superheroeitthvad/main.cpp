#include <iostream> //kodi sem var commentadur ut er vegna i lid
#include <string>   //ii lidurinn og i lidur er i raun sameinadur i thessu
#include <fstream>
#include <superhero.h>
using namespace std;


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

