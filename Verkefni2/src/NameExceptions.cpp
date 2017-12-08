#include "NameExceptions.h"

NameExceptions::NameExceptions(string name)
{
    this->name = name;
}

string NameExceptions::getName()
{
    return name;
}
 bool NameExceptions::validateName(const Employee& employee){
    string name = employee.getName();

    for(int i = 0; i < name.length())


 }

