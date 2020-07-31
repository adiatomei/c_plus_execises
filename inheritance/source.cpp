#include <iostream>
#include "head.h";
using namespace std;

Animal::Animal(string newName, int newAge)
: name(newName), age(newAge)
{

}

string Animal::get_name() {
    return name;
}

int Animal::get_age() {
    return age;
}

void Animal::walk() {
  cout << "A animal have different kind of movement\n";
}

//Zebra implementation

Zebra::Zebra(int newSpeed, string newName, int newAge)
: Animal(newName, newAge), speed(newSpeed)

{
}

int Zebra::get_speed(){
    return speed;
}

void Zebra::walk() {
  cout << "A zebra walk on the ground\n";
}

//Dolphin implementation

Dolphin::Dolphin(int newWeight, string newName, int newAge)
: Animal(newName, newAge), weight(newWeight)
{


}

int Dolphin::get_weight(){
    return weight;
}

void Dolphin::walk() {
  cout << "A dolphin walk in the water\n";
}
