#ifndef ELEMENTS_H
#define ELEMENTS_H

#include <string>
#include <iostream>
#include <fstream>


using namespace std;

class Worker {
private:
    string Login;
    string Password;
    string Root;
public:
   Worker();
   Worker(string,string,string);
   Worker(ifstream *file);
   void Save(ofstream *file);
   string GetName();
   string GetPassword();
   string GetRoot();
   void shou();
   void Control();
   Worker* pon();
};


class Ingridient {
private:
    string Name;
    int Value;
    string ED;
public:
   Ingridient();
   Ingridient(string,int,string);
   Ingridient(ifstream *file);
   void Save(ofstream *file);
   string GetName();
   int GetValue();
   void shou();
   void Control();
};


class IngridientForRecept : public Ingridient{
public:
    IngridientForRecept();
    IngridientForRecept(string,int,string);
    IngridientForRecept(ifstream *file);
};


class Product {
private:
    string Name;
    int Value;
public:
    Product();
    Product(string,int );
    Product(ifstream *file);
    void Save(ofstream *file);
    string GetName();
    int GetValue();
    void shou();
    void Control();
};

#endif // ELEMENTS_H
