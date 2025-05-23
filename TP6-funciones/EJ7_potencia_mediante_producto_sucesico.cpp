#include <iostream>
using namespace std;

int potencia(int base, int exponente);
int main(int argc, char *argv[]) {
	int base , expo;
	
	do{
		cout << "Ingrese base " << endl;
		cin >> base;
		cout << "Ingrese exponente " << endl;
		cin >> expo;
	}while(!(base>=0 && expo>=0));
	
	cout << "Resultado: " << potencia(base, expo) << endl;
	
	return 0;
}


int potencia(int base, int exponente){
	int cont = 1, resultado = 1;
	
	while(cont <= exponente){
		resultado = resultado * base;
		cont = cont + 1;
	}
	return resultado;
}
