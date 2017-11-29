#include <iostream>

using namespace std;
class Notandi{
private:
    string user;
    string password;
public:

    Notandi();
    Notandi(string user, int age, string password){
        this->user = user;
        this->age = age;
        this->password = password;
    }
};
int main()
{
    Notandi notandi;
    cin >> notandi;
    cout << notandi;
    return 0;
}
