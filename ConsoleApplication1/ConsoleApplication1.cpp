
#include "pch.h"
#include <iostream>
#include "clases.h"
using namespace std;

void loginAtm() {
	int numCuenta, numNip;
	cout << "Bienvenido, Ingrese su numero de cuenta: ";
	cin >> numCuenta;//validar que sea numerico de 5 digitos
	cout << "Ingrese su clave nip: ";
	cin >> numNip;//validar que sea la clave de la cuenta, ademas validar numerico 5 digitos

}

/*void pantallaPrincipal() {
	int opcionp;
	cout << "Menu principal:  \n";
	cout << "    1- Ver mi saldo" << endl;
	cout << "    2- Retirar efectivo" << endl;
	cout << "    3- Depositar fondos" << endl;
	cout << "    4- Salir" << endl;
	cin >> opcionp;
	while (opcionp != 1 or opcionp != 2 or opcionp != 3 or opcionp != 4) {
		cout << "error en la opcion introduzca de vuelta: ";
		cout << "Menu principal:  \n";
		cout << "    1- Ver mi saldo" << endl;
		cout << "    2- Retirar efectivo" << endl;
		cout << "    3- Depositar fondos" << endl;
		cout << "    4- Salir" << endl;
		cin >> opcionp;

	}
	if (opcionp == 1) {
		verSaldo();
	}
	else if (opcionp == 2) {
		retirarEfectivo();
	}
	else if (opcionp == 3)
	{

	}
	else
	{

	}

}*/

/*void verSaldo() {
	cout << "hola";
}

void retirarEfectivo() {
	cout << "hola";
}*/



int main()
{
	loginAtm();

	return 0;
}



