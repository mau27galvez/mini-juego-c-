#include <iostream>
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/MapCell.h"

using namespace std;

MapCell::MapCell()
{
    id = 0;
};

bool MapCell::mapCellBlock()
{
    if(id == '1')
    {
        return true;
    }
    else if(id == 0)
    {
        return false;
    }
}