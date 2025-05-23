#include <iostream>
using namespace std;


//COCIENTE, REPETIR, BANDERA
int cociente(int dividendo, int divisor);
int main(int argc, char *argv[]) {
	int dividendo , divisor;
	
	do{
		cout << "Ingrese dividendo " << endl;
		cin >> dividendo;
		cout << "Ingrese divisor " << endl;
		cin >> divisor;
	}while(!(dividendo>=0 && divisor>=0));
	
	cout << "Resultado: " << cociente(dividendo, divisor) << endl;
	
	return 0;
}

int cociente(int dividendo, int divisor){
	bool bandera;
	int cociente = 0;
	do{
		dividendo = dividendo - divisor;
		cociente= cociente + 1;
		bandera = dividendo<divisor;
	}while(!bandera); // sale por falso
	
	return cociente;
}
