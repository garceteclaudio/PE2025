#include <iostream>
using namespace std;


bool alfabetico(char letra);
int caracter(char letra); //es minuscuila, mayus, digito u otro simbolo
int main(int argc, char *argv[]) {
	char letra;
	cout << "Ingrese letra"<< endl;
	cin >> letra;

	
	if (caracter(letra)==0){
		cout << "Es minuscula"<<endl;
	}else if(caracter(letra)==1){
		cout << "Es MAYUSCULA"<<endl;
	}else if(caracter(letra)==2){
		cout << "Es digito"<<endl;
	}else{
		cout << "Es otro simbolo"<<endl;
	}
	
	return 0;
}

bool alfabetico(char letra){
	return (letra>='A' && letra<='Z' || letra>='a' && letra<='z');
}

int caracter(char letra){
	if(letra>='a' && letra<='z'){
		return 0;
	}else if (letra>='A' && letra<='Z'){
		return 1;
	}else if (letra>='0' && letra<='9'){
		return 2;
	}else{
		return 3;
	}
}	
