#include "gagnasafn.h"

void Gagnasafn::pontun_timi()
{
        ofstream fout;
        fout.open("pantanir.txt", ios::app);

        fout << "Pontun gerd: ";
        //double time2 = 24;
        time_t t = time(0); //na i nuverandi tima
        struct tm * timi = localtime( & t );

        fout << (timi->tm_year + 1900) << '-'
        << (timi->tm_mon + 1) << '-'
        <<  timi->tm_mday << " Time: "
        <<  timi->tm_hour << ":"
        <<  timi->tm_min << "."
        <<  timi->tm_sec;
        fout.close();

}
void Gagnasafn::printfyrir1()
{
    ifstream fin;
            string ch;
            fin.open("out.txt");
            int counter = 0;
            system("CLS");
            cout << "THU HEFUR VALID PIZZU NUMER: " << 1 << endl;
            while(counter < 7){ //8 l�nur
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
        pontun_timi();
        fout << endl;
        fout.close();
        fin.close();


        }
        counter = 0;
        //int counter3 = 0;
        if(input > 1){
                fin.open("out.txt");
                fout.open("pantanir.txt", ios::app);
        while(input > teljari){
            counter2 += 8;
            while(counter < counter2){ //10 linur i einu

            getline(fin, ch); //naer i linu



             //prentar ut
        counter++; //plusa counter fyrir hverja linu upp i 10 linur
        }
        teljari++;
        }
            counter = 0;
            counter2 = 8;
            system("CLS");
            //fout.open("pantanir.txt", ios::app); //nytt
            cout << "THU HEFUR VALID PIZZU NUMER: " << input << " Pontunar numerid thitt er: " << endl;
            cout << "Nr. " << endl;

            fout << "Nr. " << endl;//////////
            //fout << "****" << endl;//////////
            while(counter < counter2){ //10 linur i einu
            getline(fin, ch); //naer i linu
            cout << ch << endl; //prentar ut

            fout << ch << endl;////////////////////////////////////////nytt
            counter++; //plusa counter fyrir hverja linu upp i 10 linur
            if(fin.eof()){

                fout << endl;

                //fout.close();/////////////////////////////
                break;
            }
        }

        pontun_timi();
        fout.close();
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
    string val1,val2,val3,val4;
    cout << "Pizza: ";
    cin >> val1;
    cout << "Alegg: ";
    cin >> val2;//getline(cin, val));
    cout << "Staerd: ";
    cin >> val3;
    cout << "Verd: ";
    cin >> val4;

    fout << "Nr." << endl;
    fout << "****" << endl;

    fout << "Pizza: " << val1 << endl;
    fout << "Alegg: " << val2 << endl;
    fout << "Staerd: " << val3 << endl;
    fout << "Verd: " << val4 << endl;


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
void Gagnasafn::orders()
{
//ofstream fout;
   /* fout.open("out.txt", ios::app); //opna out.txt til ad skrifa
    //fout.write("hello");
    fout << ""; //skrifar inn i textaskjalid out.txt
    fout.close();*/
    ifstream fin;
    fin.open("pantanir.txt");
    string ch;
    char ch1[100];
    int counter = 0;
    int input;
    //int counter2 = 0;
    //int teljari = 1;
    cin >> input;
    if(input == 1){
    system("CLS");

    while(fin.getline(ch1, 100))
    {
      cout << ch1 << endl;
    }
    }
    fin.close();
    fin.open("pantanir.txt");
    if(fin.getline(ch1, 100)){
    cout << "Yttu a 1 til ad hefja bakstur: ";
    cin >> input;
    }else{
    cout << "Engar pantanir a skra" << endl;
    }
    fin.close();

        if(input == 1){

        fin.open("pantanir.txt");
        ofstream fout;
        counter = 0;
        fout.open("bakstur.txt", ios::app);
        while(counter < 8){

            fin.getline(ch1, 100);
            //getline(fin,ch);

            fout << ch1 << endl;

            counter++;
        }
        counter = 0;
        fout.close();
        fin.close();
        fin.open("pantanir.txt", ios::app);
        while(counter < 8)
        {
           fin.getline(ch1, 100);


           counter++;
        }
        fout.open("temp.txt", ios::app);
        /*while(counter < 100)
        {
            fin.getline(ch1, 100);
            //getline(fin,ch1);

            fout << ch1 << endl;

            counter++;
        }*/
        while(fin.getline(ch1, 100))
        {
            fout << ch1 << endl;
        }
        fout.close();
        fin.close();

        remove("pantanir.txt");
        rename("temp.txt", "pantanir.txt");


        }
//            rename("temp.txt", "pantanir.txt)
}
void Gagnasafn::afgreidsla_loopa()
{
    int view;
    bool run = true;
    while(run){

        cout << endl;
        cout << "Veldu 1 til ad skoda pantanir pending" << endl;
        cout << "Veldu 2 til ad skoda pantanir i bakstri" << endl;
        cout << "3 fyrir greidslu og afhendingu a pizzu" << endl;
        cout << endl;
        cin >> view;
        if(view == 1){
        system("CLS");
        view_pre();
        }
        if(view == 2){
        system("CLS");
        view_bake();
        }
    /*
        if(view == 3){
        system("CLS");
        view_completed();
        break;
        }*/
    }
}

void Gagnasafn::view_pre()
{
    ifstream fin;
    char ch1[100];
    fin.open("pantanir.txt");
    while(fin.getline(ch1, 100)){ //10 linur i einu
            //getline(fin, ch1); //naer i linu
            cout << ch1 << endl;
    }
    fin.close();

}
void Gagnasafn::view_bake()
{
    ifstream fin;
    char ch1[100];
    fin.open("bakstur.txt");
     while(fin.getline(ch1, 100)){ //10 linur i einu
            //getline(fin, ch1); //naer i linu
            cout << ch1 << endl;
    }
    fin.close();
}
/*
void Gagnasafn::view_completed()
{
    ifstream fin;
    char ch1[100];
    fin.open("bakstur.txt"); //eftir ad breyta
     while(fin.getline(ch1, 100)){ //10 linur i einu
            //getline(fin, ch1); //naer i linu
            cout << ch1 << endl;
    }
    fin.close();
}
*/
