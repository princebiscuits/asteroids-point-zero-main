#include <SDL.h>
#include "drawing.hpp"
#include "spaceship.hpp"
#include "small_asteroid.hpp"
#include <vector>
#include "score.hpp"
#include "bullet.hpp"
#include <SDL_ttf.h>
using namespace std;
#include <string>

using namespace std;
#pragma once

class asteroids_point_zero
{
private:
    Spaceship *spaceship;
    vector<Small_Asteroid*> small_asteroid;
    vector<Bullet*> bullets;
    // Score totalScore;

public:
    asteroids_point_zero();
    void draw_spaceship();
    void draw_small_asteroid();
    void draw_objects();
    void create_objects();
    void checkMouseClick(int, int);
    // void displayScore();
    void create_bullets(int, int);
};
