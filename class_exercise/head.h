#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
using namespace std;

class Student{
  public:
    Student(int newAge, string newFirstName, string newLastName, int newStandard);
    int get_age();
    void set_age(int newAge);
    string get_firstName();
    void set_firstName(string newFirstName);
    string get_lastName();
    void set_lastName(string newLastName);
    int get_standard();
    void set_standard(int newStandard);
    string toString();

  private:
    int age;
    string firstName;
    string lastName;
    int standard;
};


#endif // HEAD_H_INCLUDED
