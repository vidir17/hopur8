#include "gagnasafn.h"

void Gagnasafn::printfyrir1()
{
    ifstream fin;
            string ch;
            fin.open("out.txt");
            int counter = 0;
            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << 1 << endl;
            while(counter < 7){ //7 línur
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut

        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        fin.close();
}
void Gagnasafn::printfirst()
{
    system("CLS");

     cout << "Matsedill" << endl;
     cout << "veldu pizzu" << endl;
     cout << "---------------" << endl;
     cout << endl;
     read();

}
void Gagnasafn::read() //Panta pizzu menu listi
{
    ofstream fout;
    fout.open("out.txt", ios::app); //opna out.txt til ad skrifa
    //fout.write("hello");
    fout << ""; //skrifar inn i textaskjalid out.txt
    fout.close();
    ifstream fin;
    fin.open("out.txt");
    string ch;
    char ch1[100];
    int counter = 0;
    int input;
    int counter2 = 0;
    int teljari = 1;

    while(fin.getline(ch1, 100))
    {
      cout << ch1 << endl;
    }

    fin.close();
    cout << "Veldu numer pizzu: ";
    cin >> input;

        if(input == 1){


            printfyrir1();

        fin.open("out.txt");

        counter = 0;
        //fin.open("out.txt");
        fout.open("pantanir.txt", ios::app);
        while(counter < 7){
            getline(fin,ch);
            fout << ch << endl;

            counter++;
        }
        fout.close();
        fin.close();


        }
        counter = 0;
        if(input > 1){
                fin.open("out.txt");
        while(input > teljari){
            counter2 += 7;
            while(counter < counter2){ //10 linur i einu

            getline(fin, ch); //naer i linu

             //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        teljari++;
        }
            counter = 0;
            counter2 = 7;
            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << " Pontunar numerid thitt er: " << endl;
            while(counter < counter2){ //10 linur i einu
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
            if(fin.eof()){
                break;
            }
        }
        fin.close();

        }


}
void Gagnasafn::write() //Bua til pizzu
{
  cout << "Write";
}
void Gagnasafn::insert_new_pizza()
{
    ofstream fout;
    fout.open("out.txt", ios::app);
    string val;
    fout << endl;
    fout << endl;
    fout << "Nr." << endl;
    fout << "****" << endl;
    cout << "Pizza: ";
    cin >> val;
    fout << "Pizza: " << val << endl;
    cout << "Alegg: ";
    cin >> val;//getline(cin, val));
    fout << "Alegg: " << val << endl;
    cout << "Staerd: ";
    cin >> val;
    fout << "Staerd: " << val << endl;
    cout << "Verd: ";
    cin >> val;
    fout << "Verd: " << val << endl;
    fout << endl;
    //Write string to the file.
    fout.close();
}
void Gagnasafn::insert_new_topping()
{
    ofstream fout;
    fout.open("toppings.txt", ios::app);
    int fjoldi; //velja fjolda aleggs tegunda
    //string val; //toppings
    int i;//vector loopu breyta
    double price;
    string top;
    cout << "Hversu margar aleggstegundir viltu baeta inn?" << endl;
    cout << ": ";
    cin >> fjoldi;
    vector<string> val;
    vector<double> val2;
    for(i = 0; i < fjoldi; i++){
    cin >> top;
    cout << "Price: ";
    cin >> price;
    val.push_back(top);
    val2.push_back(price);
    fout << val[i] << "," << val2[i] << endl;
    }
    fout.close();
}
