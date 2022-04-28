#include <SDL.h>
#include "drawing.hpp"
#include <iostream>
#pragma once
using namespace std;

class Flying_Object
{
protected:
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    void draw();
    virtual void fly();
    Flying_Object(SDL_Rect, SDL_Rect);
    SDL_Rect getMov();
};