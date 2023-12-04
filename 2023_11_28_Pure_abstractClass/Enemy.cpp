#include <iostream>
#include "Enemy.h"

void Enemy::damage(int damage) {
	_hp -= damage;
}

bool Enemy::play(Enemy& enemy) {
	printf("-----ターン開始-----\n");

	playBase(enemy);

	if (enemy._hp < 0) {
		enemy._hp = 0;
	}
	printf("相手の残りHP : %d\n", enemy._hp);
	printf("-----ターン終了-----\n");

	return enemy._hp > 0;
 }