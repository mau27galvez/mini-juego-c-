#include <iostream>

#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/player.h"
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/sources/src/player.cpp"

#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/MapCell.h"
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/sources/src/MapCell.cpp"

#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/GameMap.h"
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/sources/src/GameMap.cpp"

using namespace std;

int main()
{
    Player Hero;


    GameMap Map;

    Map.draw();

    while (!Map.IsGameOver)
    {
        Hero.callInput();
        if(Map.setPlayerCell(Hero.x, Hero.y))
        {
            Map.draw();
        }
        else
        {
            Hero.resetToSafePosition();
            Map.draw();
        }
    }

    Map.drawVictory();

    return 0;
}







