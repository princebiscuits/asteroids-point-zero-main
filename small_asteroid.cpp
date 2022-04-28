#include "small_asteroid.hpp"

Small_Asteroid::Small_Asteroid(int x) : Flying_Object({9, 321, 33, 61}, {x, 0, 60, 60}) {}

void Small_Asteroid::fly()
{

    // Sprite will flap it wings
    if (!exploded){
        switch (frame)
        {
        case 0:
            srcRect = {9, 321, 33, 61};
            frame = 1;
            break;
        case 1:
            srcRect = {59, 322, 33, 61};
            frame = 2;
            break;
        case 2:
            srcRect = {110, 326, 32, 56};
            frame = 3;
            break;
        case 3:
            srcRect = {161, 327, 33, 51};
            frame = 4;
            break;
        case 4:
            srcRect = {212, 328, 33, 48};
            frame = 5;
            break;
        case 5:
            srcRect = {263, 328, 33, 48};
            frame = 6;
            break;
        case 6:
            srcRect = {314, 328, 34, 48};
            frame = 7;
            break;
        case 7:
            srcRect = {363, 327, 37, 49};
            frame = 8;
            break;
        case 8:
            srcRect = {411, 326, 39, 51};
            frame = 0;
            break;
        }
    moverRect.y += 7;
    }
    else{
        switch (frame)
        {
        case 0:
            srcRect = {9, 321, 33, 61};
            frame = 1;
            break;
        case 1:
            srcRect = {40, 780, 92, 95};
            frame = 2;
            break;
        case 2:
            srcRect = {190, 759, 133, 141};
            frame = 3;
            break;
        case 3:
            srcRect = {340, 748, 162, 165};
            frame = 4;
            break;
        case 4:
            srcRect = {507, 748, 162, 165};
            frame = 5;
            break;
        case 5:
            srcRect = {682,748,154,165};
            frame = 6;
            break;
        case 6:
            srcRect = {848,748,154,165};
            // frame = 7;
            end = true;
            break;
        }
    }
    
}

// SDL_Rect* Small_Asteroid::getMov(){
//     return getMov();
// }