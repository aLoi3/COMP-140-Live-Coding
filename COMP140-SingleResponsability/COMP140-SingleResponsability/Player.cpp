#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::SetHealth(int health)
{
	Health = health;
}

int Player::GetHealth()
{
	return Health;
}

bool Player::isDead(int health)
{
	if(health <= 0)
	{
		isDead = true;
	}
}