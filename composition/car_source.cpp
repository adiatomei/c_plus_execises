#include <iostream>
#include "car_head.h"
#include "wheels_head.h"


using namespace std;

Car::Car(string newNameCar, int newPriceCar, Wheel w)
: nameCar(newNameCar), priceCar(newPriceCar), wd(w)
{
    nrCar++;
}

string Car::get_nameCar() {
    return nameCar;
}

void Car::set_nameCar(string newNameCar) {
    nameCar = newNameCar;
}

int Car::get_priceCar() {
    return priceCar;
}

void Car::set_priceCar(int newPriceCar) {
    nameCar = newPriceCar;
}

int Car::totalPriceCar() {
    int sum = priceCar + wd.get_price();
    return sum;
}

int Car::get_nrCar() {
    return nrCar;
}


