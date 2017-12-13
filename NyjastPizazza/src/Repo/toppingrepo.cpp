/*
void Topping::write(ofstream& fout) const {

    int stringLength = name.length() + 1;

    fout.write((char*) (&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);

    fout.write((char*) (&price), sizeof(double));

}
void Topping::read(ifstream& fin){

    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char [stringLength];

    fin.read((char*)(&price), sizeof(double));

    delete [] str;
}*/

#include "toppingrepo.h"


ToppingRepo::ToppingRepo()
{
    //ctor
}

void ToppingRepo::add(const Topping& topping){

    ofstream fout;
    fout.open("topping.txt", ios::app);
    if(fout.is_open()){
        fout << topping << endl;
        fout.close();

    }
    else{
        //throw error
    }
}
void ToppingRepo::addP(const Pizza& pizza){

     ofstream fout;
     fout.open("pizza.txt", ios::app);
     if(fout.is_open()){
        fout << pizza << endl;
        fout.close();
     }
     else{
        //throw error
     }
}
void ToppingRepo::makeO(const Pizza& pizza){

    ofstream fout;
    fout.open("orders.txt", ios::app);
    if(fout.is_open()){
        fout << pizza << endl;
        fout.close();
    }
    else{
        //throw error
    }

}
/*void ToppingRepo::storeAllToppings(const vector<Topping> &toppings){

    ofstream fout;
    fout.open("toppings.txt", ios::binary);

    int toppingCount = toppings.size();

    fout.write((char*)(&toppingCount), sizeof(int));

    for(int i = 0; i < toppingCount; i++){
        toppings[i].write(fout);
    }
    fout.close();
}


vector<Topping> ToppingRepo::retrieveAllToppings(){

    vector<Topping> toppings;
    Topping topping;

    ifstream fin;
    fin.open("toppings.txt", ios::binary);

    if(fin.is_open()){
    int toppingCount;

    fin.read((char*)(&toppingCount), sizeof(int));

    for(int i = 0; i < toppingCount; i++){
        topping.read(fin);
        toppings.push_back(topping);
    }

        fin.close();
    }
    else {
        throw slubbb; //exceptions
    }
    return toppings;
}
vector<Topping> ToppingRepo::retrieveAllToppings(){
    vector<Topping> toppings;
    //Topping topping;
    int counting = 0;
    string strengur;

    ifstream fin;
    fin.open("toppings.txt", ios::app);//ios::binary);
    while(!fin.eof()){
        if(fin.is_open()){
            string file = "";
            fin >> file;
            stringstream ss(file);
            string item = "";
            int testing = 0;
            Topping T;
            while(getline(ss, item, ',')){
                if (testing == 0){
                    T.setName(item);
                }
                else if (testing == 1){
                    stringstream convert(item);
                    int x = 0;
                    convert >> x;
                    T.setPrice(x);
                }
                testing++;
            }
            toppings.push_back(T);
        }


    }
}
*/

