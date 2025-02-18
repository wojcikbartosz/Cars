#include "ElectricCar.hpp"
#include <iostream>

ElectricCar::ElectricCar(ElectricEngine *engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

ElectricCar::~ElectricCar()
{
    delete(engine_);
    std::cout << __FUNCTION__ << std::endl;
}
void ElectricCar::refill()
{
    ElectricCar::charge();
}
void ElectricCar::charge() { std::cout << __FUNCTION__ << std::endl; }
