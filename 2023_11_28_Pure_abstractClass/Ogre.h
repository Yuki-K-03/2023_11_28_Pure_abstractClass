#pragma once
#include "Enemy.h"
class Ogre :
    public Enemy
{
public:
    Ogre();
    void playBase(Enemy& enemy) override;
    void attack(Enemy& enemy) override;
};

