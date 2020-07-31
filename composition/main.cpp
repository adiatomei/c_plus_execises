#include "car_source.cpp"
#include "wheels_sour.cpp"
#include "car_head.h"
#include "wheels_head.h"
#include <iostream>


using namespace std;

int main()
{
    Wheel conti("Continental", "winter", 1000);
    Car dacia("Dacia", 7000, conti);
    cout << "The price of the car is " << dacia.totalPriceCar();
    return 0;
}
