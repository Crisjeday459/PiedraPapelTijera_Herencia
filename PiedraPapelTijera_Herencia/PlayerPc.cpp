#include "PlayerPc.h"
#include <stdlib.h>

using namespace std;

// Método para seleccionar jugada
void PlayerPc::Seleccionar() {
	int opcion = rand() % 3 + 1;
	setJugada(opcion);

}