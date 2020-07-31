
#include <iostream>
#include "head.h"

using namespace std;

Country::Country(string newName, string newLanguage, float newPop, float newPib)
: name(newName), language(newLanguage), pop(newPop), pib(newPib)
{

}

string Country::get_name(){
    return name;
}

string Country::get_language(){
    return language;
}

float Country::get_pop(){
    return pop;
}

float Country::get_pib(){
    return pib;
}

void Country::born(float hum){
    pop += hum;
}

void Country::dead(float hum){
    pop -= hum;
}

void Country::war(){
    pop -= 1.25;
    pip -= 20.50;
}

void Country::peace(){
    pop += 0.25;
    pib += 20.00;
}


