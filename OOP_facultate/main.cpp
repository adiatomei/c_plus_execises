#include <iostream>
#include <cstring>
#include "head.h"



using namespace std;



int main()

{
    Pers* ptrPe;
   // Pers* p1 = new Pers();
    Pers pe(25, "Vladut");
    ptrPe = &pe;

    cout << "Nume: " << pe.arata_nume() << endl << "Varsta: " << ptrPe->arata_varsta() << endl;

    struct student s1;
    strcpy(s1.nume, "Dumitrescu");
    strcpy(s1.prenume, "Iulica");
    s1.facul = "Stiinte";
    s1.marca = 1;
    s1.varsta = 22;

    int* o_valoare_steluta = new int(12);
    cout << *o_valoare_steluta << " valoarea alocata dinamic in heap" << "\n";
    cout << o_valoare_steluta << " referinta implicita" << "\n";

    cout << s1.marca << " " << s1.nume << " " << s1.prenume << " " << s1.varsta << endl << endl;

    student_master s2;
    s2.marca = 3;
    s2.nume = "Florin";
    s2.media = 9.99;
    cout << "student master: " << endl;
    cout << s2.marca << "\t" << s2.nume << "\t" <<s2.media << endl << endl;

    Pers* p4 = new Pers(25, "Dumitrescu");
    Pers* p5 = new Pers(22, "Bontea");
    Pers* p6 = new Pers(21, "Scarlatescu");
    Pers* p7 = new Pers(7, "Nichifor");

    Pers* arrayPers = new Pers[4]{*p4, *p5, *p6, *p7};

    for (int i = 0; i < 4; i++) {
        Console::WriteLine(arrayPers[i].arata_nume());
        Console::WriteLine(arrayPers[i].arata_varsta());
    }


    return 0;
}
