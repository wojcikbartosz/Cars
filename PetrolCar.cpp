#include "PetrolCar.hpp"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine *engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()
{
    delete(engine_);
    std::cout << __FUNCTION__ << std::endl;
}
void PetrolCar::refill()
{
    PetrolCar::refuel();
}
void PetrolCar::refuel()
{
    std::cout << __FUNCTION__ << std::endl;
}
void PetrolCar::shift(int gear)
{
    engine_->changeGear(gear);
}