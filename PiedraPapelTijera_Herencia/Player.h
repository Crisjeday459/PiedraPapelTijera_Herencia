#pragma once
class Player
{
private:
	short jugada;
public:
	// Constructores
	Player();
	Player(int opcion);

	// Métodos de acceso y modificación
	int getJugada();
	void setJugada(int opcion);

	// Método para seleccionar jugada
	void Seleccionar(int numJugador);
	void imprimirJugada();

};

