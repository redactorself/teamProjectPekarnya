#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

using namespace std;

class Admin{
private:
    string Name;
public:
    Admin(string);
    void Control();
};


class Pekar{
private:
    string Name;
public:
    Pekar(string);
    void Control();
};


class Rabochiy{
private:
    string Name;
public:
    Rabochiy(string);
    void Control();
};

#endif // USER_H
