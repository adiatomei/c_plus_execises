#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDE
#include <iostream>
using namespace std;

struct student
{
    unsigned marca;
    string facul;
    unsigned varsta;
    char nume[20];
    char prenume[20];
};

struct student_master
{
    int marca;
    string nume;
    float media;
};

class Pers
{
    private:
        int vs;
        string nume;
    public:
        Pers();
        Pers(int varsta, string num);
        unsigned arata_varsta();
        string arata_nume();
        void set_nume(string newNume);
        void set_varsta(int newVarsta);

};

// Class implementantion

 Pers::Pers()
 {
 }

 Pers::Pers(int varsta, string num)
 : vs(varsta), nume(num)
 {

 }

 unsigned Pers::arata_varsta()
 {
     return this->vs;
 }

 string Pers::arata_nume()
 {
     return nume;
 }

 void Pers::set_nume(string newNume)
 {
     nume = newNume;
 }

 void Pers::set_varsta(int newVarsta)
 {
     vs = newVarsta;
 }


#endif // HEAD_H_INCLUDED
