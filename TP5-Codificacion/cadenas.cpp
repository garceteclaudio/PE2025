#include <iostream>
#include <string.h>

using namespace std;

typedef char tcad[50]; //def de cadena

/// Concatenar nombre y apellido
/// Comprar 2 cadenas
/// realizar una copia
/// Longitud de la cadena

int main(int argc, char *argv[]) {
	tcad nombre, apellido,nombreYApellido;
	int libreta;
	float promedio;
	
	do{
		cout << "Ingrese apellido [nulo p/salir]"<< endl;
		fflush(stdin); // limpiar el buffer
		gets(apellido); // leer cadenas
		
		if(strlen(apellido)!=0){
			cout << "Ingrese nombre"<< endl;
			fflush(stdin);
			gets(nombre);
			
			cout << "Ingrese libreta: "<< endl;
			cin>>libreta;
			
			cout << "Ingrese promedio: "<< endl;
			cin>>promedio;
			
		}
		cout << "Su apellido es: " << apellido << endl;
		cout << "Su nombre es: " << nombre << endl;
	}while(strlen(apellido)!=0);
	

	cout << "nombreYApellido:  "<< strcat(nombre,apellido) << endl;
	

	return 0;
}

