//
//  UI.cpp
//  Staff

#include <cstdlib>
#include "staffui.h"
#include <ctype.h>
void StaffUI::mainMenu(){
    cout << "Welcome!" << endl;

    while(true){
        cout << "Please choose the action you want to execute" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Press 1 for adding a salary record" << endl;
        cout << "Press 2 for retrieving individual salary record" << endl;
        cout << "Press 3 for viewing total salary record for a person or a year" << endl;
        cout << "Press 4 for highest paid individual" << endl;
        cout << "Type 'exit' when you want to quit" << endl;
        cout << endl;

        char choice;
        cin >> choice;
        validateInput(choice);

    }
}
void StaffUI::validateInput(char choice){
    AddSalary addsalary;
    Employee employee;

    if(choice == '1'){
        addsalary.addinfo(createEmployee());

    }
    else if(choice == '2'){
        addsalary.get_Info(employee);
        cout << "Viewing an individual salary record" << endl;

    }
    else if(choice == '3'){
        cout << "Viewing total salary record" << endl;

    }
    else if(choice == '4'){
        cout << "See the highest paid individual" << endl;

    }
    else{
        exit(9);
    }
    cout << endl;

}

Employee StaffUI::createEmployee() {
    string name;
    char socialSecurity[10];
    double wages = 0.0;
    int month = 0, year = 0;
    system("CLS");
    cout << "Name: " << endl;
    cin >> name;

    cout << "Social security number: " << endl;
    for(int i = 0; i < 10; i++){
    cin >> socialSecurity[i];
    }

    cout << "Wages: " << endl;
    cin >> wages;

    cout << "Month: " << endl;
    cin >> month;

    cout << "Year: " << endl;
    cin >> year;
    system("CLS");
    Employee employee(name, socialSecurity, wages, month, year);
    return employee;
}
/*bool StaffUI::contains_number(const std::string &c)
{
    return (c.find_first_of("0123456789") != std::string::npos);
}
*/
