#include <iostream>
#include "Enemy.h"

void Enemy::damage(int damage) {
	_hp -= damage;
}

bool Enemy::play(Enemy& enemy) {
	printf("-----�^�[���J�n-----\n");

	playBase(enemy);

	if (enemy._hp < 0) {
		enemy._hp = 0;
	}
	printf("����̎c��HP : %d\n", enemy._hp);
	printf("-----�^�[���I��-----\n");

	return enemy._hp > 0;
 }