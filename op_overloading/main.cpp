#include <iostream>
#include "head.h"
#include "sour.cpp"

using namespace std;

int main()
{
    Roman adi("Adi"), maria("Maria");
    Roman res = adi + maria;
    cout << res.name << endl;
    return 0;
}
