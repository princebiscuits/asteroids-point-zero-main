#pragma once
#include "spaceship.hpp"

Spaceship::Spaceship() : Flying_Object({131, 157, 80, 55}, {280, 530, 70, 70}) {}

void Spaceship::fly() {}

void Spaceship::setMov(int x, int y)
{
    moverRect.x = x;
    moverRect.y = y;
}
