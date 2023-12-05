#include <iostream>
#include <ctime>
#include "Goblin.h"

Goblin::Goblin() {
    _hp = 20;
    _atk = 5;
}

void Goblin::attack(Enemy& enemy) {
	enemy.damage(_atk);
}

void Goblin::playBase(Enemy& ene) {
    srand((int)time(NULL));

    if (rand() % 2 == 0) {
        // �ʏ�U��
        printf("�S�u�����̍U��\n");
        attack(ene);
    }
    else {
        // 2��U��
        printf("�S�u�����̂Q��U��\n");
        attack(ene);
        attack(ene);
    }
}