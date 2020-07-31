#ifndef WHEELS_HEAD_H_INCLUDED
#define WHEELS_HEAD_H_INCLUDED
#include <iostream>
using namespace std;


class Wheel{
  public:
    Wheel(string newName, string newModel, int newPrice);
    string get_name();
    void set_name(string newName);
    string get_model();
    void set_model(string newModel);
    int get_price();
    void set_price(int newPrice);
    int get_nrWheels();
  private:
    string name;
    string model;
    int price;
    static int nrWheels;
};

#endif // WHEELS_HEAD_H_INCLUDED
