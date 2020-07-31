#include <iostream>
#include "head.h"
#include "sour.cpp"
using namespace std;

int main()
{
    Student john(15, "john", "carmack", 10);
    cout << john.get_age() << endl;
    cout << john.get_firstName() << ", " << john.get_lastName() << endl;
    cout << john.get_standard() << endl;
    cout << john.toString();

    return 0;
}
