#include <iostream>
#include <math.h>

using namespace std;
int main() {
	string marca, modelo;
	int anio = 0;
	
	cout << "Ingrese una marca entre KIA o MAZDA: ";
	cin >> marca;
	
	if (marca == "KIA") {
	cout << "Ingrese un modelo entre RIO o CERATO: ";
	cin >> modelo;
		if (modelo == "RIO") {
			cout << "Ingrese el año del vehículo: ";
			cin >> anio;
			if (anio < 2000) {
				cout << "Descontinuado";
			} else {
				cout << "Quedan 3 unidades disponibles";
			}
		} else {
			cout << "Ingrese el año del vehículo: ";
			cin >> anio;
			if (anio < 2010) {
				cout << "Descontinuado";
			} else {
				cout << "Quedan 15 unidades disponibles";
			}
		}
	} else if (marca == "MAZDA") {
		cout << "Sin disponibilidad por el momento";
	} else {
		cout << "Ingrese una de las marcas previamente mencionadas (KIA o MAZDA)";
	}
	return 0;
}
