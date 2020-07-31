#include "head.h"
#include <iostream>

using namespace std;


int main()
{

    Song<int>amintirile(25000);
    Song<float>dacaPleci(1550);
    Song<string>mieBine("2533");
    cout << mieBine.get_money();
    cout << amintirile.get_money();
    return 0;
}
