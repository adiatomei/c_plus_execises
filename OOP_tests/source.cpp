#include <iostream>
#include "head.h"

using namespace std;

//Class Computer Implementation
Computer::Computer()
{
    name = "Default";
    price = 0;
}

Computer::Computer(string newName, int newPrice)
: name(newName), price(newPrice)
{
    numComp++;
}

string Computer::get_name()
{
    return name;
}

int Computer::get_price()
{
    return price;
}

void Computer::set_name(string newName)

{
    name = newName;
}

void Computer::set_price(int newPrice)

{
    price = newPrice;
}

int Computer::get_numComp()
{
    return numComp;
}

int Computer::numComp = 0;

/*Computer::Computer(Computer &a)
{
   name = a.get_name();
}*/
//Implementare Clasa Country

Country::Country(string newName, int newPop, string newCurr)
: name(newName), curr(newCurr)
{
    pop = new int();
    *pop = newPop;
}

Country::~Country()
{
    delete pop;
    cout << "Pop has been release";
}

Country::Country(Country &a)

{
    pop = new int();
    *pop = a.get_pop();
}

string Country::get_name()
{

    return name;
}

int Country::get_pop()
{
    return *pop;
}

void Country::set_name(string newName)
{
    name = newName;
}

void Country::set_pop(int newPop)
{
    *pop = newPop;
}

void Country::set_curr(string newCurr)
{
    this->curr = newCurr;
}

string Country::get_curr()
{

    return this->curr;
}

void Country::get_adress()
{
    cout << "The adress of the " << this->name << " it is " << this << endl;
}

//Implementation car class
int Car::nrCar = 0;

Car::Car(string newName, int newYear)
: name(newName), year(newYear)
{
    nrCar++;
}

string Car::get_name()
{
    return name;
}

int Car::get_year()
{
    return year;
}

int Car::get_nrCar()
{
    return nrCar;
}

int changeYear(Car p)
{
    int year = p.get_year();
    year++;
    return year;

}

void change_name(Car &obj, string newName)
{
    obj.name = newName;
}

//Class person implementation
Person::Person(string newName = "Dafault", int newSalary = 0)
: name(newName), salary(newSalary)
{

}


int Person::operator+(Person &p)
{
    this->salary = this->salary + p.salary;
    return this->salary;
}

int Person::sumSalary = 0;
