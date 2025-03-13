#pragma once
#include "Player.h"
class Arbitro
{
private:
	Player& j1;
	Player& j2;

public:
	Arbitro(Player& player1, Player& player2);

	int evaluarGanador();
};

