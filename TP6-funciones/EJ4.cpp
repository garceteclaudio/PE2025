#include <iostream>
using namespace std;

char digito();// validar entrada de user para luego realizar la conversion
int numero(char entrada); // convertir digito a valor numerico
int main(int argc, char *argv[]) {
	char entrada, digitoChar;
	
	digitoChar = digito();
	cout << "El numero es: " <<  digitoChar << endl;
	
	int numInt = numero(digitoChar);
	
	cout << "El numero es: " <<  numInt << endl;
	
	return 0;
}

char digito(){
	char entrada;
	do{
		cout << "Ingresar digito"<<endl;
		cin >> entrada;
	}while(!(entrada>='0' && entrada<='9'));
	return entrada;	
}

int numero(char entrada){
	int num = -1;  // Inicializar con valor por defecto (por si hay error)
	
	switch(entrada) {
	case '0': num = 0; break;
	case '1': num = 1; break;
	case '2': num = 2; break;
	case '3': num = 3; break;
	case '4': num = 4; break;
	case '5': num = 5; break;
	case '6': num = 6; break;
	case '7': num = 7; break;
	case '8': num = 8; break;
	case '9': num = 9; break;
	default: num = -1;  // Manejo de error (nunca ocurrirá si digito() funciona)
	}
	return num;
}
