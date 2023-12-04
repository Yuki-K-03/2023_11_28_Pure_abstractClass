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
        // ’ÊíUŒ‚
        printf("ƒSƒuƒŠƒ“‚ÌUŒ‚\n");
        attack(ene);
    }
    else {
        // 2‰ñUŒ‚
        printf("ƒSƒuƒŠƒ“‚Ì‚Q‰ñUŒ‚\n");
        attack(ene);
        attack(ene);
    }
}