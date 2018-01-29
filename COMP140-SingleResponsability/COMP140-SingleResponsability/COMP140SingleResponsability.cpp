// COMP140SingleResponsability.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"


int main()
{
	Player player1;

	Player* player2 = new Player();

	int currentHealth = player1.GetHealth();

	player2->GetHealth();

	if (player2)
	{
		delete player2;
		player2 = nullptr;
	}

    return 0;
}

