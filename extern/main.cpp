#include <iostream>
#include "head.h"
using namespace std;




int main()
{
    int * i = new int;
    *i = 25;
    cout << *i << endl;
    delete i;
    cout << *i;

    return 0;
}
