#include <iostream>
#include "source.cpp"

using namespace std;

int main()
{
    /*Acordion * weltmas = new Acordion(50, "Welmaster", 2500);
    Piano * figaro = new Piano(100, "Figaro", 3000);
    Instrument *ptrweltmas = weltmas;
    Instrument *ptrfigaro = figaro;*/

    Instrument flaut("Flaut", 1200);
    Acordion sonata(80, "Sonata", 2000);
    Piano mercia(120, "Mercia", 2500);
    /*cout << "The acordion " << weltmas->get_name() << " cost " << weltmas->get_price() << endl;
    cout << "The piano " << figaro->get_name() << " cost " << figaro->get_price() << endl;
    ptrweltmas->sound();
    ptrfigaro->sound();*/
    flaut.play("Sonata 23");
    sonata.play("Lumina", "Copacul");
    mercia.play("Dansul lebedelor", "Cerul instelat");
    return 0;
}
