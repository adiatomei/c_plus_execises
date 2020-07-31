#include <iostream>
#include "head.h"
#include "source.cpp"
using namespace std;

int main()
{
    Animal origin("bacterie", 3);
    Zebra cora(40, "Cora", 10);
    Dolphin mili(60, "Mili", 7);
    Animal * ptrCora = &cora;
    Animal * ptrMili = &mili;

    cout << "The name of the delphin is: " << ptrMili->get_name() << endl;
    cout << "The zebra age is: " << ptrCora->get_age() << endl;
    cout << "The zebra speed is: " << cora.get_speed() << endl;
    cout << "The delphin weight is: " << mili.get_weight() << endl;
    origin.walk();
    ptrMili->walk();
    ptrCora->walk();
    return 0;
}
