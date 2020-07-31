#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
using namespace std;


class Computer{
public:
    Computer();
    Computer(string newName, int newPrice);
   /* Computer(Computer &a);*/
    string get_name();
    int get_price();
    void set_name(string newName);
    void set_price(int newPrice);
    static int get_numComp();

private:
    string name;
    int price;
    static int numComp;

};

//Clasa cu membru pointer

class Country
{
public:
    Country(string newName, int newPop, string newCurr);
    ~Country();
    Country(Country &a);
    string get_name();
    int get_pop();
    string get_curr();
    void set_name(string newName);
    void set_pop(int newPop);
    void set_curr(string newCurr);
    void get_adress();
private:
    string name;
    int* pop;
    string curr;
};

//Class car and wheel
class Car
{
public:
    Car(string newName, int newYear);
    string get_name();
    int get_year();
    static int get_nrCar();
    friend void change_name(Car &obj, string newName);

private:
    string name;
    int year;
    static int nrCar;
};


class Person
{
public:
    string name;
    int salary;
    static int sumSalary;
    Person(string newName, int newSalary);
    int operator+(Person &p);
    friend void operator+=(Person &p, int i);


};

void operator+=(Person &p, int j)
{
    p.salary += j;

}






#endif // HEAD_H_INCLUDED
