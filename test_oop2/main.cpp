#include <iostream>
#include "source.cpp"

using namespace std;

int main()
{
    Cat rudy("Rudy", 3);
    cout << rudy.get_name() << " it is " << rudy.get_age() << " years old.\n";
    //Cat misu(rudy);
    //misu.set_name("Misu");
    //cout << misu.get_name()<< " it is the same age with " << rudy.get_name() << ", " << misu.get_age() << endl;
    Cat leo("Leo", 14);
    string * ptrCats = Cat::get_cats();
    for(int i = 0; i < 2; i++){
        cout << *(ptrCats + i) << ", ";
    }
    return 0;
}
