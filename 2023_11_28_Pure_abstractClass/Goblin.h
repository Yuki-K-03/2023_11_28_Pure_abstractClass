#pragma once

#include "Enemy.h"
class Goblin :
    public Enemy
{
public :
    Goblin();
    void playBase(Enemy& enemy) override;
    void attack(Enemy& enemy) override;
};

