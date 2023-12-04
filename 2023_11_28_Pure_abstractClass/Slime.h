#pragma once
#include "Enemy.h"
class Slime :
    public Enemy
{
public :
    Slime();
    void playBase(Enemy& enemy) override;
    void attack(Enemy& enemy) override;
};

