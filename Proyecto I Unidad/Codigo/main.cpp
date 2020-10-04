#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main (int argc, char const *argv[])
{
	int juego = 0;
	
	while(true)
	{
		system("cls");
		
		cout << "**************" << endl;
		cout << "MENU DE JUEGOS" << endl;
		cout << "**************" << endl;
		cout << endl;
		
		cout << "Selecione un juego" << endl;
		cout << "1 - Nave Estelar" << endl;
		cout << "2 - Serpiente" << endl;
		cout << endl;
		
		cout << "Ingrese un numero del menu para seleccionar un juego:  ";
		cin >> juego;
		
		switch(juego)
		{
			case 1:
				system ("cls");
				starShip();
				break;
			case 2:
				system ("cls");
				snake();
				break;
		}
		
	}
    return 0;
}


