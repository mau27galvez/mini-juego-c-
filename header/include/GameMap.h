#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/MapCell.h"

class GameMap
{
    public:
    GameMap();

    MapCell* PlayerCell;
    MapCell Cells[15][10];

    void draw();

    bool setPlayerCell(int playerX, int playerY);
    bool IsGameOver;
    void drawVictory();

    protected:
    void loadMapFromFile();
};

#endif