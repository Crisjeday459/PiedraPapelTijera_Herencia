#include <iostream>
#include "Player.h"
#include "PlayerPc.h"
#include "Arbitro.h"
#include "Visualizador.h"
#include <ctime> //para time()

int main()
{

    srand(static_cast<unsigned int>(time(0)));
	//PlayerPc p1, p2;
    //p1.Seleccionar();
    //p1.imprimirJugada();

    //p2.Seleccionar();
    //p2.imprimirJugada();
	short continuar;
	do {
		//Player player1, player2;
		//player1.Seleccionar(1);
		//player2.Seleccionar(2);
		Player player1;
		PlayerPc computerPlayer; //cambiar para computer

		player1.Seleccionar(1); //jugador humano
		computerPlayer.Seleccionar(); //computadora seleccion automatica

		Arbitro evaluador(player1, computerPlayer);
		Visualizador visualizador(player1, computerPlayer);

		visualizador.visualizarJugada();
		visualizador.mostrarGanador(evaluador);

		cout << "\n                          ¿Desea jugar otra vez? (precione 1): ";
		cin >> continuar;
		cout << "\n--------------------------------\n";
	} while (continuar == 1);

   //cout << "Hola Mundo!\n";
}














// PiedraPapelTijera_Herencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
