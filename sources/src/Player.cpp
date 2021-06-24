#include <iostream>
#include "C:/Users/mau2m/Desktop/platzi/fundamentos-de-c++/proyecto-final/header/include/player.h"

using namespace std;

Player::Player()
{
    x = 2;
    y = 2;
}

void Player::callInput()
{
    char palyerInput = ' ';

    cin >> palyerInput;
    
    switch(palyerInput)
    {
    case 'w':
        lastX = x;
        x--;
        break;
    
    case 'a':
        lastY = y;
        y--;
        break;
    
    case 's':
        lastX = x;
        x++;
        break;

    case 'd': 
        lastY = y;
        y++;
        break;
    }
};

void Player::resetToSafePosition()
{
    x = lastX;
    y = lastY;
}

