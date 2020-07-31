#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
using namespace std;

class Animal{
  public:
    Animal(string newName, int newAge);
    string get_name();
    int get_age();
    virtual void walk();
  private:
    string name;
    int age;
};

class Zebra : public Animal{
  public:
    Zebra(int newSpeed, string newName, int newAge);
    int get_speed();
    void walk();
  private:
    int speed;
};

class Dolphin : public Animal{
  public:
    Dolphin(int newWeight, string newName, int newAge);
    int get_weight();
    void walk();
  private:
    int weight;
};


#endif // HEAD_H_INCLUDED
