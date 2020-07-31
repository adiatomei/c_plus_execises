
#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    Country romania("Romania", "romanian", 19.25, 220.50);
    cout << "Before change \n";
    cout << "Name: " << romania.get_name() << endl;
    cout << "Language: " << romania.get_language() << endl;
    cout << "Population: " << romania.get_pop() << endl;
    cout << "Pib: " << romania.get_pib() << endl << endl;
    cout << "After change \n";
    romania.born(0.20);
    romania.dead(0.15);
    romania.peace();
    cout << "Name: " << romania.get_name() << endl;
    cout << "Language: " << romania.get_language() << endl;
    cout << "Population: " << romania.get_pop() << endl;
    cout << "Pib: " << romania.get_pib();

    return 0;
}
