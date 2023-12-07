#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <list>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <fstream>

using namespace std;

template <class Type>
class book {
private:
    list<Type> v;
    typename list<Type>::iterator SelectedElement;  // нужен typename иначе не компилирует
    string Name;
public:
    book();
    book(string N);
    book(ifstream *file);
    void Show();
    string GetName();
    void ShowList();
    void AddElement(Type);
    void Control();
    void Save(ofstream *file);
    Type* Chek(string);
};

#endif // BOOK_H
