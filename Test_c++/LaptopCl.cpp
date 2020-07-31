#include <iostream>
#include "LaptopCl.h"

using namespace std;

// Drinks Class Methods

int Drinks::numDrinks = 0;
string Drinks::get_name() {
  return name;
}

void Drinks::set_name(string newName) {
   name = newName;
};

string Drinks::get_type() {
  return type;
};

void Drinks::set_type(string newType) {
   type = newType;
};

string Drinks::get_country() {
  return country;
};

void Drinks::set_country(string newCountry) {
   country = newCountry;
};

float Drinks::get_cost() {
  return cost;
};

void Drinks::set_cost(float newCost) {
   cost = newCost;
};

int Drinks::get_numDrinks() {
    return numDrinks;
};

Drinks::Drinks(string newName, string newType, string newCountry, float newCost)
: name(newName), type(newType), country(newCountry), cost(newCost)
{
  numDrinks += 1;
};

Drinks::~Drinks() {
  cout << "The class drinks has been destroyed\n";
};

void Drinks::get_drink() {
    cout << "I feel hidrate";
};
//AlcDrinks Class Methods

int AlcDrinks::get_degree(){
    return degree;
};

void AlcDrinks::set_degree(int newDegree) {
    degree = newDegree;
};

AlcDrinks::AlcDrinks(int newDegree, string newName, string newType, string newCountry, float newCost)
: Drinks{ newName, newType, newCountry, newCost }, degree(newDegree)
{

};

AlcDrinks::~AlcDrinks() {
  cout << "The class alcdrinks has been destroyed\n";
};

void AlcDrinks::get_drink() {
    cout << "I feel drunk\n";
};
//JuiceDrinks Class Methods

int JuiceDrinks::get_alc(){
    return alc;
};

void JuiceDrinks::set_alc(int newAlc) {
    alc = newAlc;
};

JuiceDrinks::JuiceDrinks(int newAlc, string newName, string newType, string newCountry, float newCost)
: Drinks{ newName, newType, newCountry, newCost }, alc(newAlc)
{

};

JuiceDrinks::~JuiceDrinks() {
  cout << "The class nonalcdrinks has been destroyed\n";
};

void JuiceDrinks::get_drink() {
    cout << "I feel healty\n" ;
};

void JuiceDrinks::test() {
    cout << "test";
}

//AlcJuiceDrinks class Methods

string AlcJuiceDrinks::get_taste() {
  return taste;
};

void AlcJuiceDrinks::set_taste(string newTaste) {
  taste = newTaste;
};

AlcJuiceDrinks::AlcJuiceDrinks(string newTaste, int newDegree, string newName, string newType, string newCountry, float newCost)
: AlcDrinks{ newDegree, newName, newType, newCountry, newCost }, taste(newTaste)
{

};

AlcJuiceDrinks::~AlcJuiceDrinks() {
  cout << "The AlcJuiceDrinks class has been destroyed\n";
}






