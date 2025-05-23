#include <iostream>
#include <math.h>
#include <limits> // Para limpiar el buffer de entrada

const float PI = 3.1415926;
using namespace std;

// declaración de módulos
bool validar(float r, float g);
float calculo_cono(float r, float g);
void ingresarDatos(float& radio, float& generatriz);

int main() {
	float radio, generatriz, area;
	
	ingresarDatos(radio, generatriz);
	
	area = calculo_cono(radio, generatriz);
	cout << "Area cono: " << area << endl;
	
	return 0;
}

// Desarrollo de módulos
bool validar(float r, float g) {
	return (r > 0 && g > 0);
}

float calculo_cono(float r, float g) {
	float base, lateral, total;
	base = PI * powf(r, 2);
	lateral = PI * r * g;
	total = base + lateral;
	return total;
}

void ingresarDatos(float& radio, float& generatriz) {
	bool datosValidos = false;
	
	while (!datosValidos) {
		cout << "Ingrese radio: ";
		cin >> radio;
		
		cout << "Ingrese generatriz: ";
		cin >> generatriz;
		
		if (validar(radio, generatriz)) {
			datosValidos = true;
		} else {
			cout << "ERROR: Ambos valores deben ser positivos. Intente nuevamente.\n";
		}
	}
}
