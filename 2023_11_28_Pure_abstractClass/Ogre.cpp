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
    // �ʏ�U��
    printf("�I�[�K�̍U��\n");
    attack(ene);
}