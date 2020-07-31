#include <iostream>
#include "source.cpp"

using namespace std;

int main()
{
    GrandF dumitru("Dumitru", 70, "good-singer");
    Father petru("inginer", "Petru", 45, "smart");
    Son ion("Musical Colage", "singer", "Ion", 22, "perseverent");

    cout << "Grandfather name is " << dumitru.get_firstName() << " " << dumitru.get_lastName() << endl;
    cout << "Father name is " << petru.get_firstName() << " " << petru.get_lastName() << endl;
    cout << "Son name is " << ion.get_firstName() << " " << ion.get_lastName() << endl;

    return 0;
}
