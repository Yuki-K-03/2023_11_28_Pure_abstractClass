#include <iostream>
#include "Slime.h"

Slime::Slime() {
    _hp = 10;
    _atk = 2;
}

void Slime::attack(Enemy& enemy) {
    enemy.damage(_atk);
}

void Slime::playBase(Enemy& ene) {
    // �ʏ�U��
    printf("�X���C���̍U��\n");
    attack(ene);
}