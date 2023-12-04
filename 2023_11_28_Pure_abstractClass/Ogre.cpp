#include <iostream>
#include "Ogre.h"

Ogre::Ogre() {
    _hp = 25;
    _atk = 8;
}

void Ogre::attack(Enemy& enemy) {
    enemy.damage(_atk);
}

void Ogre::playBase(Enemy& ene) {
    // ’ÊíUŒ‚
    printf("ƒI[ƒK‚ÌUŒ‚\n");
    attack(ene);
}