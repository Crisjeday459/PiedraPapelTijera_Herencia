#include "PlayerPc.h"
#include <stdlib.h>

using namespace std;

// M�todo para seleccionar jugada
void PlayerPc::Seleccionar() {
	int opcion = rand() % 3 + 1;
	setJugada(opcion);

}