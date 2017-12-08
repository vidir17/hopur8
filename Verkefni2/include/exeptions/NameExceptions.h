#ifndef NAMEEXCEPTIONS_H
#define NAMEEXCEPTIONS_H


class NameExceptions
{
    public:
        NameExceptions();
        string getName;
        bool validateName(const Employee& employee);

    private:
        string name;
};

#endif // NAMEEXCEPTIONS_H
