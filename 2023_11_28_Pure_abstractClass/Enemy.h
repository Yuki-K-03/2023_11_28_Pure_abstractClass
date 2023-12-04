#pragma once
class Enemy
{
protected :
	int _hp;
	int _atk;

public :
	virtual void attack(Enemy &enemy) = 0;
	bool play(Enemy& ene);

	virtual void playBase(Enemy& enemy) = 0;
	void damage(int damage);
};

