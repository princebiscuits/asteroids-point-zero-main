#include "asteroids_point_zero.hpp"

asteroids_point_zero::asteroids_point_zero()
{
    spaceship = new Spaceship();
    // small_asteroid = new Small_Asteroid();
}

// void asteroids_point_zero::draw_spaceship()
// {
//     spaceship->draw();
// }

// void asteroids_point_zero::draw_small_asteroid()
// {
//     for (auto &a : small_asteroid)
//     {
//         a->draw();
//         a->fly();
//     }
// }

void asteroids_point_zero::draw_objects(){
    spaceship->draw();
    for (auto &a : small_asteroid)
    {
        a->draw();
        a->fly();
    }
    for (auto &b: bullets){
        b->draw();
        // b->fly();
        for (auto &a: small_asteroid){
            SDL_Rect b1 = b->getMov();
            SDL_Rect a1 = a->getMov();
            if (SDL_HasIntersection(&a1, &b1)){
                a->exploded = true;
                b->exploded = true;
            }
            b->fly();
        }
    }
}

void asteroids_point_zero::create_objects()
{
    int n = rand() % 550;
    int p = rand() % 10;
    if (p == 1)
    {
        Small_Asteroid *s1 = new Small_Asteroid(n);
        small_asteroid.push_back(s1);
    }
}

void asteroids_point_zero::checkMouseClick(int x, int y)
{
    spaceship->setMov(x, y);
}

// void asteroids_point_zero::displayScore(){
//     TTF_Init();
//     TTF_Font *font = TTF_OpenFont("arial.ttf", 28);
//     SDL_Color color = {255, 255, 255};
//     std::string score_text = std::to_string(totalScore.getScore());
//     SDL_Surface *surfaceMessage = TTF_RenderText_Solid(font, score_text.c_str(), color);

//     SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfaceMessage);

//     SDL_Rect Message_rect; // create a rect
//     Message_rect.x = 1100; // controls the rect's x coordinate
//     Message_rect.y = 60;   // controls the rect's y coordinte
//     Message_rect.w = 50;   // controls the width of the rect
//     Message_rect.h = 50;   // controls the height of the rect

//     SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);

//     SDL_DestroyTexture(Message);
//     SDL_FreeSurface(surfaceMessage);
//     TTF_CloseFont(font);

//     TTF_Quit();
// }

void asteroids_point_zero::create_bullets(int x, int y){
    Bullet* b1 = new Bullet(x, y);
    bullets.push_back(b1);

}