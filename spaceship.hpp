#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "flying_object.hpp"

class Spaceship : public Flying_Object
{
private:
    SDL_Rect mover, src;
public:
    void fly();
    Spaceship();
    void setMov(int x, int y);
};
