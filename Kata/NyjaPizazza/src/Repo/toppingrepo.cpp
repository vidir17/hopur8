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
/*
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

void ToppingRepo::seeMenu(const Pizza& pizza){
    string str;
    ifstream fin;
    fin.open("pizza.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else{
        cout << "You are fired!";
        //throw error...
    }
}
*/
vector<Topping> ToppingRepo::viewT(){
    string str;
    vector<Topping> myVec;
    ifstream fin;
    fin.open("topping.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> str;

            stringstream ss(str);
            string item = "";
            int counter = 0;
            Topping T;
            while(getline(ss, item, ',')){
                if (counter == 0){

                    T.setName(item);
                }
                else{

                    stringstream convert(item);
                    int x = 0;
                    convert >> x;
                    T.setPrice(x);
                }
                counter++;
            }
            myVec.push_back(T);
        }
        fin.close();
    }
    else{
        cout << "You are fired!";
        //throw error...
    }
    return myVec;
}

vector<Pizza> ToppingRepo::viewP(){
    string str;
    vector<Pizza> myPiz;
    ifstream fin;
    fin.open("pizza.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> str;

            stringstream ss(str);
            string item = "";
            int counter = 0;
            Pizza P;
            while(getline(ss, item, ',')){
                if (counter == 0){

                    P.setName(item);
                }
                else{

                    stringstream convert(item);
                    int x = 0;
                    convert >> x;
                    P.setPrice(x);
                }
                counter++;
            }
            myPiz.push_back(P);
        }
        fin.close();
    }
    else{
        cout << "You are fired!";
        //throw error...
    }
    return myPiz;
}



/*

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

