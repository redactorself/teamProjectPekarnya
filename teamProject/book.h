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
    list<Type> spisok;
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

template <class Type>
book<Type>::book(){
    SelectedElement = spisok.begin();
}


template <class Type>
void book<Type>::ShowList(){
    cout << endl;
    typename list<Type>::iterator ItrForShouing;
    ItrForShouing = spisok.begin();
    for (ItrForShouing = spisok.begin(); ItrForShouing != spisok.end(); ++ItrForShouing){
        cout << *ItrForShouing;
        if (ItrForShouing == SelectedElement){
            cout << "<---";
        }
        cout << endl;
    }
}



#endif // BOOK_H
