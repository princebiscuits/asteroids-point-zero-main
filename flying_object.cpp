#include "flying_object.hpp"

Flying_Object::Flying_Object(SDL_Rect src, SDL_Rect mover)
{
    srcRect = src;
    moverRect = mover;
}

void Flying_Object::fly(){};

void Flying_Object::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

SDL_Rect Flying_Object::getMov(){
    return moverRect;
}