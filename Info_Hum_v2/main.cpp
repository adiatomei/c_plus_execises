
#include <iostream>
using namespace std;


class Angajat
{
private:
  string nume;
  double salariu;
  int nrOreSup;
  int tarifOrar;

public:
  Angajat(string n, double s)
  {
      salariu = s;
      nume = s;
  }

  string show_nume()
  {
      return nume;
  }

  double show_sal()
  {
      return salariu;
  }

  double add1(Angajat p, double spor);
  double add2(double spor, Angajat p);


};

double Angajat::add1(Angajat p, double spor)
{
    return p.salariu += spor;
};

double Angajat::add2(double spor, Angajat p)
{
    return p.salariu += spor;
};



class Inginer : public Angajat
{
public:
    int bonus;
    int indemnizatie;

    Inginer(int bon, int indemn, string num1, int sal1)
    : Angajat(num1, sal1)
    {

        bonus = bon;
        indemnizatie = indemn;
    }

    void arata_venit()
    {
        cout << "Inginerul {0} are venitul {1} " << this->show_nume() << " " << show_sal() + bonus + indemnizatie << endl;
    }
};

int main()
{
    double spor = 1;
    Angajat p1("Mircea Lucian", 7000.);
    Angajat p2("Ionescu Paul", 8000.);
    Angajat p3("Florian Mihai", 2000.);

    cout << "Dupa spor {0} ar avea {1} " << p3.show_nume() << " " << p3.add1(p3, spor) << endl;


    cout << "{0} chiar are acum, {1} lei " << p3.show_nume() << " " << p3.show_sal() << endl;
    cout << "Familia {0} are acum {1} lei " << p3.show_nume() << " "  << endl;

    Inginer ing1(100, 2000, "John Snow", 2000);
    cout << "{0} chiar are acum {1} lei " << ing1.show_nume() << " " << ing1.show_sal() << endl;

    ing1.add1(ing1, 1500);
    cout << "{0} chiar are acum {1} lei " << ing1.show_sal() << endl;
    ing1.arata_venit();


};
