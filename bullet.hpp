#include "flying_object.hpp"
#pragma once

class Bullet : public Flying_Object
{
private:
    SDL_Rect mover, src;
    int frame = 0;
public:
    bool exploded = false;
    bool end = false;
    void fly();
    Bullet(int, int);
    // SDL_Rect* getMov();
};