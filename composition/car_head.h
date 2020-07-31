#ifndef CAR_HEAD_H_INCLUDED
#define CAR_HEAD_H_INCLUDED
#include "wheels_head.h"
#include <iostream>
using namespace std;

class Car{
  public:
    Car(string newNameCar, int newPriceCar, Wheel w);
    string get_nameCar();
    void set_nameCar(string newNameCar);
    int get_priceCar();
    void set_priceCar(int newPriceCar);
    int totalPriceCar();
    int get_nrCar();
  private:
    string nameCar;
    int priceCar;
    Wheel wd;
    static int nrCar;
};

#endif // CAR_HEAD_H_INCLUDED
