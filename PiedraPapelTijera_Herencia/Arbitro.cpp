#include "Arbitro.h"


Arbitro::Arbitro(Player& player1, Player& player2) : j1(player1), j2(player2) {}

int Arbitro::evaluarGanador(){
	if (j1.getJugada() == j2.getJugada()) return 0;

	if ((j1.getJugada() == 1 && j2.getJugada() == 3) ||
		(j1.getJugada() == 2 && j2.getJugada() == 1) ||
		(j1.getJugada() == 3 && j2.getJugada() == 2))
		return 1;
	return -1;
}
