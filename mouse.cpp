// #include "mouse.hpp"
// #include <iostream>
// #include <time.h>

// void Mouse::checkMouseClick(int x, int y, int &Screen)
// {
//     // SDL_Rect getmov;
//     bool isclicked;

//     for (auto S : Spaceships){
//         S->setMov(x,y);
//     }

//     // for (auto F : Fruits)
//     // {
//     //     isclicked = F->getIsClicked();
//     //     getmov = F->getMov();
//     //     if (((y + 90) > getmov.y && (y - 90) < getmov.y) && ((x + 70) > getmov.x && (x - 70) < getmov.x))
//     //     {
//     //         if (!isclicked)
//     //         {
//     //             F->setIsClicked();
//     //             F->cutAnimation();
//     //             totalScore.ScoreUpdate();
//     //         }
//     //     }
//     // }
//     // for (auto E : Enemies)
//     // {
//     //     isclicked = E->getIsClicked();
//     //     getmov = E->getMov();
//     //     if (((y + 90) > getmov.y && (y - 90) < getmov.y) && ((x + 70) > getmov.x && (x - 70) < getmov.x))
//     //     {
//     //         if (!isclicked)
//     //         {
//     //             E->setIsClicked();
//     //             totalHealth.updateHealth(E->LifeDeduct());
//     //             if (totalHealth.getHealth() <= 0)
//     //             {
//     //                 Screen = 5;
//     //             }
//     //         }
//     //     }
//     // }
//     // for (auto C : Collectibles)
//     // {
//     //     isclicked = C->getIsClicked();
//     //     getmov = C->getMov();
//     //     if (((y + 90) > getmov.y && (y - 90) < getmov.y) && ((x + 70) > getmov.x && (x - 70) < getmov.x))
//     //     {
//     //         if (!isclicked)
//     //         {
//     //             C->setIsClicked();
//     //             C->removeCollectible();
//     //             totalHealth.updateHealth(C->healthIncrease());
//     //         }
//     //     }
//     // }
// }