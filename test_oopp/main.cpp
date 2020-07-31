#include <iostream>

using namespace std;

class Profesor
{
public:
    Profesor();
    Profesor(int newId, string newNume, string newPrenume, int newVarsta, int newVechime);
    void scrie_nume(string newNume);
    int arata_varsta();
   // void indexeaza_vechime();

private:
    int id;
    string nume;
    string prenume;
    int varsta;
    int vechime;
};

//Implementare

Profesor::Profesor()
{

}

Profesor::Profesor(int newId, string newNume, string newPrenume, int newVarsta, int newVechime)
: id(newId), nume(newNume), prenume(newPrenume), varsta(newVarsta), vechime(newVechime)
{

}

void Profesor::scrie_nume(string newName)
{
    nume = newName;
}

int Profesor::arata_varsta()
{
    return varsta;
};

//Profesor_Informatica

class Profesor_Informatica : public Profesor
{
public:
    Profesor_Informatica(){};
    Profesor_Informatica(string newNumeLiceu, int newNumarOre, int newId, string newNume, string newPrenume, int newVarsta, int newVechime);
    string get_numeLiceu();
    int get_numarOre();
    void set_numeLiceu(string newNumeLiceu);
    void set_numarOre(int newNumarOre);
private:
    string numeLiceu;
    int numarOre;
};


Profesor_Informatica::Profesor_Informatica(string newNumeLiceu, int newNumarOre, int newId, string newNume, string newPrenume, int newVarsta, int newVechime)
: Profesor(newId, newNume, newPrenume, newVarsta, newVechime), numeLiceu(newNumeLiceu), numarOre(newNumarOre)
{

};

string Profesor_Informatica::get_numeLiceu()
{
    return numeLiceu;
}

int Profesor_Informatica::get_numarOre()
{
    return numarOre;
}

void Profesor_Informatica::set_numeLiceu(string newNumeLiceu)
{
    numeLiceu = newNumeLiceu;
}

void Profesor_Informatica::set_numarOre(int newNumarOre)
{
    numarOre = newNumarOre;
}


int main()
{

    Profesor_Informatica *dumitrescu = new Profesor_Informatica("Lucian Blaga", 50, 2, "Dumitrescu", "Ioan", 40, 15);
    Profesor_Informatica *ionescu = new Profesor_Informatica("Mircea Eliade", 48, 3, "Ionescu", "Lucian", 45, 20);

    cout << "Lista licee: " << dumitrescu->get_numeLiceu() << " si " << ionescu->get_numeLiceu() << endl;
    ionescu->set_numeLiceu("Dimitrie Cantemir");
    cout << "Lista noua licee: " << dumitrescu->get_numeLiceu() << " si " << ionescu->get_numeLiceu() << endl;

    return 0;
}
