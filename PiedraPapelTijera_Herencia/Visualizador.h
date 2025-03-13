#pragma once
#include "Player.h"
#include "Arbitro.h"
#include <iostream>

using namespace std;

class Visualizador
{
private:
	Player& j1;
	Player& j2;

	string obtenerSimbolo(int opcion);

public:
	Visualizador(Player& j1, Player& j2);

	string obtenerNombre(int opcion);

	void visualizarJugada();

	void mostrarGanador(Arbitro& eval);
};

