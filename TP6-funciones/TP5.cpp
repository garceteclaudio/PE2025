#include <iostream>
using namespace std;

int productoMientrasContador(int num1, int num2);
int productoMientrasBandera(int num1, int num2);
int productoMientrasCentinela(int num1, int num2);

int productoRepetirCentinela(int num1, int num2);
int main(int argc, char *argv[]) {
	int num1 , num2;
	
	do{
		cout << "Ingrese numero " << endl;
		cin >> num1;
		cout << "Ingrese numero " << endl;
		cin >> num2;
	}while(!(num1>=0 && num2>=0));

	cout << "Resultado: " << productoRepetirCentinela(num1, num2) << endl;
	
	return 0;
}

int productoMientrasContador(int num1, int num2){
	int cont = 1, suma = 0;
	while (cont <= num2){
		suma = suma + num1;	
		cont = cont + 1;
	}
	return suma;
}
	
int productoMientrasBandera(int num1, int num2){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	int suma = 0;
	bool bandera = true;
	while (bandera==true){
		suma = suma + num1;	
		num2 = num2 - 1;
		if(num2==0){
			bandera=false;
		}
	}
	return suma;
}

int productoMientrasCentinela(int num1, int num2){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	int suma = 0;
	while ( !(num2==0)){
		suma = suma + num1;	
		num2 = num2 - 1;
	}
	return suma;
}

int productoRepetirCentinela(int num1, int num2){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	int suma = 0;

	do{
		suma = suma + num1;	
		num2 = num2 - 1;
	}while(!(num2==0)); // sale por falso
	
	return suma;
}
