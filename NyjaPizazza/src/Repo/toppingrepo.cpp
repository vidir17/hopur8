#include "toppingrepo.h"
ToppingRepo::ToppingRepo()
{
    //ctor
}
/*ToppingRepo::~ToppingRepo()
{
    //dtor
}*/
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
*/
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
//    int toppingCount;

    //fin.read((char*)(&toppingCount), sizeof(int));

    //for(int i = 0; i < toppingCount; i++){
        //cin >> toppings[i];
    //stringstream ss("toppings.txt");

    fin.close();
    /*for(int i = 0; i < toppings.size(); i++)//toppings.size();i++)
    {
        cout << toppings[i].getName() << "\n" << toppings[i].getPrice() << endl;
    }*/
    //else {
        //throw slubbb; //exceptions
    //}
    return toppings;
}
