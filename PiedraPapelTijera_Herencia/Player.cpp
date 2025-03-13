#include "Player.h"
#include <iostream>

using namespace std;

// Constructores
Player::Player(){
	jugada = 0;
}
Player::Player(int opcion){
	jugada = opcion;
}

// M�todos de acceso y modificaci�n
int Player::getJugada(){
	return jugada;
}
void Player::setJugada(int opcion){
	jugada = opcion;
}

// M�todo para seleccionar jugada
void Player::Seleccionar(int numJugador){
	do {
		cout << "Introduzca la opcion del jugador " << numJugador
			<< " (1-Piedra, 2-Papel, 3-Tijera): " << endl;
		cin >> jugada;
	} while (jugada < 1 || jugada > 3);
}

void Player::imprimirJugada(){
	cout << "Opcion seleccionada " << jugada << endl;

}
