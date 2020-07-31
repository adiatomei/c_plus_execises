#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
using namespace std;

class Cat {
  public:
    Cat(string newName);
    friend string get_name(Cat &obj);
  private:
    string name;

};



string get_name(Cat &obj) {
    return obj.name;
}


#endif // HEAD_H_INCLUDED
