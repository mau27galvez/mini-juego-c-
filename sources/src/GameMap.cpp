#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/GameMap.h"

using namespace std;

GameMap::GameMap()
{
    loadMapFromFile();
    PlayerCell = NULL;
    IsGameOver = false;
};

void GameMap::draw()
{
    system("cls");
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << Cells[i][j].id;
        }
        cout << endl;
    }
}

bool GameMap::setPlayerCell(int playerX, int playerY)
{
    if(!Cells[playerX][playerY].mapCellBlock())
    {
        if(Cells[playerX][playerY].id == '$')
        {
            // drawVictory();
            IsGameOver = true;
            return true;
        }
        else
        {
            if(PlayerCell != NULL)
            {
                PlayerCell->id = 0;
            }
            PlayerCell = &Cells[playerX][playerY];
            PlayerCell->id = 'K';
        }

        return true;
    }
    else
    {
        return false;
    }
    
}

void GameMap::loadMapFromFile()
{
    // ofstream fileCreated("map.txt");

    // if(fileCreated.is_open())
    // {

    // }
    // else
    // {
    //     cout << "FATAL ERROR: map file could not be created";
    // }

    string line;
    int row = 0;
    ifstream myFile("map.txt");

    if(myFile.is_open())
    {
        while(getline(myFile, line))
        {
            for(int p = 0; p < line.length(); p++)
            {
                if(line[p] == '0')
                {
                    Cells[row][p].id = 0;
                }
                else
                {
                    Cells[row][p].id = line[p];
                }
            }

            row++;
        }
    }
    else
    {
        cout << "FATAL ERROR: map file could not be loaded";
    }
}

void GameMap::drawVictory()
{
    string line;
    ifstream myFile("victory.txt");

    if(myFile.is_open())
    {
        while(getline(myFile, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "FATAL ERROR: victory file could not be loaded";
    }
}