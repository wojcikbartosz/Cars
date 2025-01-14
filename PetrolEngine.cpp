#include "PetrolEngine.hpp"
#include <iostream>

PetrolEngine::PetrolEngine(int power, float capacity, int gears)
    : Engine(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
}
PetrolEngine::~PetrolEngine()
{
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolEngine::changeGear(int gear)
{
    if(gear >= -1 && gear <= gears_)
    {
        currentGear_ = gear;
    }
    std::cout << __FUNCTION__ << std::endl;
}
