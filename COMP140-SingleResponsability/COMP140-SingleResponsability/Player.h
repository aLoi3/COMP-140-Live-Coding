#pragma once

class Player
{
public:
	Player();
	~Player();

	void SetHealth(int health);
	int GetHealth();
	bool isDead(int health);

private:
	int Health = 100;
	bool isDead = false;
protected:

};