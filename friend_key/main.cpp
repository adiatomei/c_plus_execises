#include <iostream>
#include "head.h"
#include "source.cpp"
using namespace std;

int main()
{
    Cat robi("Robi");
    cout << get_name(robi);
    return 0;
}
