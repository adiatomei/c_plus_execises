#include <iostream>
#include "head.h"
#include <sstream>
using namespace std;

Student::Student(int newAge, string newFirstName, string newLastName, int newStandard)
: age(newAge), firstName(newFirstName), lastName(newLastName), standard(newStandard)
{
}
int Student::get_age(){
    return age;
};

void Student::set_age(int newAge){
    age = newAge;
};

string Student::get_firstName(){
    return firstName;
};

void Student::set_firstName(string newFirstName){
    firstName = newFirstName;
};

string Student::get_lastName() {
    return lastName;
};
void Student::set_lastName(string newLastName){
    lastName = newLastName;
};
int Student::get_standard(){
    return standard;
};
void Student::set_standard(int newStandard){
    standard = newStandard;
};

string Student::toString(){
    stringstream all;
    all << age << ", " << firstName << ", " << lastName << ", " << standard;
    string alltwo = all.str();
    return alltwo;

};
