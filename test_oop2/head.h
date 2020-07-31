#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;

class Cat
{
public:
    Cat(string newName, int newAge);
    ~Cat();
    Cat(Cat &b);
    string get_name();
    int get_age();
    void set_name(string newName);
    void set_age(int newAge);
    static string * get_cats();

private:
    static string cats[];
    static int numCats;
    string name;
    int * age;

};

#endif // HEAD_H_INCLUDED
