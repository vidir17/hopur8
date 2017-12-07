//
//  UI.cpp
//  Staff
//
//  Created by Hlynur Víðisson on 07/12/2017.
//  Copyright © 2017 Hlynur Víðisson. All rights reserved.
//

#include "UI.hpp"
#include "Employee.hpp"
StaffUI::StaffUI()
{
    
}

/*StaffUI::StaffUI(char choice){
 this->choice = choice;
 }
 
 char StaffUI::getChoice(){
 return this->choice;
 } */
void StaffUI::mainMenu(){
    cout << "Welcome!" << endl;
    
    while(true){
        cout << "Please choose the action you want to execute" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Press 1 for adding a salary record" << endl;
        cout << "Press 2 for retrieving individual salary record" << endl;
        cout << "Press 3 for viewing total salary record for a person or a year" << endl;
        cout << "Press 4 for highest paid individual" << endl;
        cout << endl;
        
        char choice;
        cin >> choice;
        validateInput(choice);
        
    }
}
void StaffUI::validateInput(char choice){
    StaffUI staffUI;
    if(choice == '1'){
        createEmployee();
        //addsalary.addInfo(createEmployee());
        
    }
    else if(choice == '2'){
        cout << "Viewing an individual salary record" << endl;
        
    }
    else if(choice == '3'){
        cout << "Viewing total salary record" << endl;
        
    }
    else if(choice == '4'){
        cout << "See the highest paid individual" << endl;
        
    }
    else{
        cout << "Invalid input, try again" << endl;
    }
}

Employee StaffUI::createEmployee() {
    string name, socialSecurity;
    double wages;
    int month, year;
    
    cout << "Name: " << endl;
    cin >> name;
    
    cout << "Social security number: " << endl;
    cin >> socialSecurity;
    
    cout << "Wages: " << endl;
    cin >> wages;
    
    cout << "Month: " << endl;
    cin >> month;
    
    cout << "Year: " << endl;
    cin >> year;
    
    Employee employee(name, socialSecurity, wages, month, year);
    return employee;
    //return Employee;
}



Employee StaffUI::addInfo(){
    string name, socialSecurity;
    int month, year = 0;
    double wages;
    cout << "Employees name: ";
    cin >> name;
    cout << "Employees social security number: ";
    cin >> socialSecurity;
    cout << "Month: ";
    cin >> month;
    cout << "Wages: ";
    cin >> wages;
    Employee employee(name, socialSecurity, month, wages, year);
    
    return employee;
}
