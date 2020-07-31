#include <iostream>
#include "head.h"

using namespace std;

//Implementation class cat

Cat::Cat(string newName, int newAge)
: name(newName)

{
    age = new int();
   *age = newAge;
    cats[numCats] = name;
    numCats++;
}

Cat::~Cat()
{
    delete age;

}

Cat::Cat(Cat &b)
{

    name = b.get_name();
    age = new int();
    *age = b.get_age();
}

int Cat::get_age()
{
    return *age;
}

string Cat::get_name()
{
    return name;
}

void Cat::set_age(int newAge)
{
    *age = newAge;
}

void Cat::set_name(string newName)
{
    name = newName;
}

string* Cat::get_cats()
{
    return cats;
}

int Cat::numCats = 0;
string Cat::cats[100];

