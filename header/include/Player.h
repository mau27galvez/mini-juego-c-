#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
    Player();

    void resetToSafePosition();

    void callInput();
    int x, y;
    int lastX, lastY;
};

#endif