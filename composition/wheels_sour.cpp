#include <iostream>
#include "wheels_head.h"
using namespace std;

Wheel::Wheel(string newName, string newModel, int newPrice)
: name(newName), model(newModel), price(newPrice)
{
  nrWheels++;
}

string Wheel::get_name() {
    return name;
}

void Wheel::set_name(string newName) {
     name = newName;
}

string Wheel::get_model() {
    return model;
}

void Wheel::set_model(string newModel) {
    model = newModel;
}

int Wheel::get_price() {
    return price;
}

void  Wheel::set_price(int newPrice) {
    price = newPrice;
}

int Wheel::get_nrWheels() {
    return nrWheels;
}
