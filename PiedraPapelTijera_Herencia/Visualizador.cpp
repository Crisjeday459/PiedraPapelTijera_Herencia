#include "Visualizador.h"
#include <iostream>

using namespace std;

string Visualizador::obtenerSimbolo(int opcion){
	switch (opcion) {
	case 1: return "()";
	case 2: return "[]";
	case 3: return "8<";
	default: return "???";
	}
}

Visualizador::Visualizador(Player& player1, Player& player2) : j1(player1), j2(player2) {}

string Visualizador::obtenerNombre(int opcion){
	switch (opcion) {
	case 1: return "Piedra";
	case 2: return "Papel";
	case 3: return "Tijera";
	default: return "ERROR, presione solo una de las tres opciones 1, 2, 3";
	}
}

void Visualizador::visualizarJugada(){
	cout << "  " << obtenerSimbolo(j1.getJugada()) << "            "
		<< obtenerSimbolo(j2.getJugada()) << endl;
	cout << obtenerNombre(j1.getJugada()) << "  vs    " << obtenerNombre(j2.getJugada()) << endl;
	cout << "  " << j1.getJugada() << "             " << j2.getJugada() << endl;
}

void Visualizador::mostrarGanador(Arbitro& eval){
	int resultado = eval.evaluarGanador();
	cout << "\n*********************************" << endl;
	cout << "*         Resultado             *" << endl;
	if (resultado == 1)
		cout << "*    ¡¡¡Gano el jugador 1!!!    *" << endl;
	else if (resultado == -1)
		cout << "*    ¡¡¡Gano el jugador 2!!!    *" << endl;
	else
		cout << "*        ¡¡¡Empate!!!           *" << endl;
	cout << "*********************************" << endl;
}

