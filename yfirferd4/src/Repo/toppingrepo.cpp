#include "toppingrepo.h"

void ToppingRepo::openMenuUmsjon()
{
    ifstream fin;
    string listi;
    int i = 1;
    fin.open("pizza.txt", ios::app);
    while(getline(fin, listi))
    {
        cout << i << ". " << listi << endl;
        i++;
    }
    fin.close();
}
void ToppingRepo::viewPending()
{
    ifstream fin;
    string listi;
    fin.open("pantanir.txt", ios::app);
    while(getline(fin, listi))
    {
        cout << listi << endl;
    }
    fin.close();
}
void ToppingRepo::bakinglist()
{
    ifstream fin;
    string listi;
    fin.open("bakstur.txt", ios::app);
    while(getline(fin, listi))
    {
        cout << listi << endl;
    }
    fin.close();
}
void ToppingRepo::completed()
{
    ifstream fin;
    string listi;
    fin.open("complete.txt", ios::app);
    while(getline(fin, listi))
    {
        cout << listi << endl;
    }
    fin.close();
}
void ToppingRepo::delivered()
{
    ifstream fin;
    string listi;
    fin.open("delivered.txt", ios::app);
    while(getline(fin, listi))
    {
        cout << listi << endl;
    }
    fin.close();
}
void ToppingRepo::openAlegg()
{
    ifstream fin;
    string listi;
    int i = 0;
    fin.open("topping.txt", ios::app);
    cout << "Topping and price: " << endl;
    while(getline(fin, listi, ','))
    {

            cout << listi << endl;

        i++;
    }
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
void ToppingRepo::seeMenu()
{
    ifstream fin;
    int i = 1;
    char ch1[100];
    fin.open("pizza.txt");
        while(fin.getline(ch1, 100))
        {
            cout << i << ". ";
            cout << ch1 << endl;
            i++;
        }
        fin.close();
}

void ToppingRepo::seeOrder()
{
    ifstream fin;
    string str;
    fin.open("pantanir.txt");
        while(getline(fin, str))
        {
            cout << str << endl;
        }
        fin.close();
}
void ToppingRepo::moveOrder()
{
    ifstream fin;
    ofstream fout;
    string ch;
    int counter = 0;
    fin.open("pantanir.txt", ios::app);
        fout.open("bakstur.txt", ios::app);
        while(counter < 8){
            getline(fin, ch);
            if(ch == "----")
            {
                fout << "----" << endl;
                break;
            }
            fout << ch << endl;
            counter++;
        }
        counter = 0;
        fout.close();
        fin.close();
        fin.open("pantanir.txt", ios::app);
        while(counter < 70) //70 ef listinn verdur mjog langur
        {
           getline(fin, ch);
           if(ch == "----")
           {
               break;
           }

           counter++;
        }
        fout.open("temp.txt", ios::app);
        while(getline(fin, ch))
        {
            fout << ch << endl;
        }

        fout.close();
        fin.close();
        remove("pantanir.txt");
        rename("temp.txt", "pantanir.txt");
}
void ToppingRepo::seeBaker()
{
    ifstream fin;
    string ch1;
    int j = 1;
    fin.open("bakstur.txt");
        while(getline(fin, ch1))
        {
            if(ch1 == "----"){
                cout << j << " " << endl;
                j++;
            }
            cout << "  " << ch1 << endl;
        }
        fin.close();
}


void ToppingRepo::moveToComplete()//bakari
{
ifstream fin;
    ofstream fout;
    string ch;
    int tala;
    int counter = 1;

        cin >> tala;
        if(tala == 1){
        fin.open("bakstur.txt", ios::app);
        fout.open("complete.txt", ios::app);
            while(getline(fin, ch)){
                fout << ch << endl;
                if(ch == "----")
                {
                    break;
                }
            }
            fout.close();
            fout.open("temp.txt", ios::app);
            while(getline(fin, ch)){
                fout << ch << endl;
            }
            fout.close();
            fin.close();
            remove("bakstur.txt");
            rename("temp.txt", "bakstur.txt");

        }
        if(tala > 1){
        fin.open("bakstur.txt", ios::app);
        fout.open("temp.txt", ios::app);
        while(getline(fin, ch))
        {
            if(tala == counter){
                fout.close();
                fout.open("complete.txt", ios::app);
                while(true){
                fout << ch << endl;
                getline(fin, ch);


                if(ch == "----")
                {
                    fout << ch << endl;
                    fout.close();
                    counter++;
                    break;
                }
                }
                fout.open("temp.txt", ios::app);
            }
            if(counter-1 != tala){
            fout << ch << endl;
            }
            if(ch == "----")
            {
                counter++;
            }
        }

        fout.close();
        fin.close();
        remove("bakstur.txt");
        rename("temp.txt", "bakstur.txt");


}
}
void ToppingRepo::deliverOrder()///////////afgreidsla
{
    ifstream fin;
    ofstream fout;
    string ch;
    int tala;
    int counter = 1;

        cin >> tala;
        if(tala == 1){
        fin.open("complete.txt", ios::app);
        fout.open("delivered.txt", ios::app);
            while(getline(fin, ch)){
                fout << ch << endl;
                if(ch == "----")
                {
                    break;
                }
            }
            fout.close();
            fout.open("temp.txt", ios::app);
            while(getline(fin, ch)){
                fout << ch << endl;
            }
            fout.close();
            fin.close();
            remove("complete.txt");
            rename("temp.txt", "complete.txt");

        }
        if(tala > 1){
        fin.open("complete.txt", ios::app);
        fout.open("temp.txt", ios::app);
        while(getline(fin, ch))
        {
            if(tala == counter){
                fout.close();
                fout.open("delivered.txt", ios::app);
                while(true){
                fout << ch << endl;
                getline(fin, ch);
                if(ch == "----")
                {
                    fout << ch << endl;
                    fout.close();
                    counter++;
                    break;
                }
                }
                fout.open("temp.txt", ios::app);
            }
            if(counter-1 != tala){
            fout << ch << endl;
            }
            if(ch == "----")
            {
                counter++;
            }
        }
        fout.close();
        fin.close();
        remove("complete.txt");
        rename("temp.txt", "complete.txt");
}
}
void ToppingRepo::seeComplete()
{
    ifstream fin;
    ofstream fout;
    string ch;
    int input;
    int j = 1;
    cout << "Press 1 to view orders ready for payment" << endl;
    cin >> input;
    if(input == 1){
    if(input)
    fin.open("complete.txt", ios::app);
    cout << "Choose number to mark delivered" << endl;
    while(getline(fin, ch))
    {
        if(ch == "----"){
        cout << j << "  ";
        j++;
        }
        cout << ch << endl;
    }
    fin.close();
    }
}


void ToppingRepo::makeO(const Pizza& pizza){

    ofstream fout;
    fout.open("pantanir.txt", ios::app);
    if(fout.is_open()){
        fout << pizza << endl;
        fout.close();
    }
    else{
        //throw error
    }

}
void ToppingRepo::chooseOrder()
{
    ifstream fin;
    ofstream fout;
    unsigned int number;
    string test;
    vector<string> myVec;
    fin.open("pizza.txt");
    while(getline(fin, test)){
        myVec.push_back(test);
    }
    cin >> number;
    fout.open("pantanir.txt", ios::app);
    if(number <= myVec.size()){
        fout << myVec[number-1];
        fout << endl;
    }
    fin.close();
    fout.close();

}
void ToppingRepo::call()
{
        ofstream fout;
        fout.open("pantanir.txt", ios::app);
        fout << "----" << endl;
        fout.close();
}
void ToppingRepo::addPhoneNumber()
{
    string phoneNumber;
    ofstream fout;
        fout.open("pantanir.txt", ios::app);
        cin >> ws;
        getline(cin, phoneNumber);
        fout << "Phone Number: " << phoneNumber << endl;
        fout.close();
}
void ToppingRepo::addtime()
{
    printTimeNow();
}
void ToppingRepo::printTimeNow()
{
     ofstream fout;
        fout.open("pantanir.txt", ios::app);

        fout << "Order made: ";
        time_t t = time(0); //na i nuverandi tima
        struct tm * timi = localtime( & t );

        fout << (timi->tm_year + 1900) << '-'
        << (timi->tm_mon + 1) << '-'
        <<  timi->tm_mday << " Time: "
        <<  timi->tm_hour << ":"
        <<  timi->tm_min << "."
        <<  timi->tm_sec << endl;
        fout.close();
}
void ToppingRepo::createOrder()
{
    string strengur;
    cin >> ws;
    getline(cin, strengur);
    ofstream fout;
    fout.open("pantanir.txt", ios::app);
    fout << "Pizza pontun: " << strengur << endl;
    fout.close();
}
void ToppingRepo::additional()
{
        ifstream fin;
        string str;
        int i = 1;
        fin.open("medlaeti.txt");
        while(getline(fin, str))
        {
            cout << i << ". " << str << endl;
            i++;
        }
            cout << endl;
        fin.close();
}
void ToppingRepo::additionalchoice()
{
    ifstream fin;
    ofstream fout;
    unsigned int number;
    string test;
    vector<string> myVec;
    fin.open("medlaeti.txt");
    while(getline(fin, test)){
        myVec.push_back(test);
    }
    cin >> number;
    fout.open("pantanir.txt", ios::app);
    if(number <= myVec.size()){
        fout << myVec[number-1];
        fout << endl;
    }
    fin.close();
    fout.close();
}
void ToppingRepo::sidedish()
{
    string strengur;
    cin >> ws;
    getline(cin, strengur);
    ofstream fout;
    fout.open("medlaeti.txt", ios::app);
    fout << strengur << endl;
    fout.close();
}
