#pragma once
class Player
{
private:
	short jugada;
public:
	// Constructores
	Player();
	Player(int opcion);

	// M�todos de acceso y modificaci�n
	int getJugada();
	void setJugada(int opcion);

	// M�todo para seleccionar jugada
	void Seleccionar(int numJugador);
	void imprimirJugada();

};

