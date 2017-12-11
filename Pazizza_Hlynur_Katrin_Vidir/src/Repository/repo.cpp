#include "repo.h"

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

void Repo::menu_order()
{
    fout.open("newOrder.txt", ios::app);
    fout << ""; //skrifar inn i textaskjalid out.txt
    fout.close();
    ifstream fin;
    fin.open("newOrder.txt");
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

        fin.open("newOrder.txt"); //get it?

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
                fin.open("newOrder.txt");
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
void Repo::add_menu()
{
    fout.open("menu.txt", ios::app);
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
