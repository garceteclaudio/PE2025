#include <iostream>
#include <math.h>

using namespace std;

bool existe(float a, float b, float c);
int tipo(float a, float b, float c);
float contorno(float a, float b, float c);
float heron(float a, float b, float c);
bool pitagoras(float a, float b, float c);

//5,5,5 EQUILATERO
//5,5,8 ISOSCELES
//3,4,5 ESCALENO
int main()
{ 
	float a, b, c;
	cout << "Ingrese valor del lado:";
	cin >> a;
	cout << "Ingrese valor del lado:";
	cin >> b;
	cout << "Ingrese valor del lado:";
	cin >> c;
	
	if (existe(a, b, c) == true)
	{ 
		cout << "### RESULTADOS TRIANGULO ###" << endl;
		//cout << "Perimetro: " << contorno(a, b, c) << endl;
		//cout << "Area: " << heron(a, b, c) << endl;
		
		switch (tipo(a, b, c))
		{ 
		case 1: cout << "Tipo EQUILATERO" << endl;
		break;
		case 2: cout << "Tipo ISOSCELES" << endl;
		break;
		case 3: cout << "Tipo ESCALENO" << endl;
		break;
		}
		
//		if (pitagoras(a, b, c) == true)
//			cout << "Es un triangulo rectangulo" << endl;
//		else
//			cout << "No es un triangulo rectángulo" << endl;
	}
	else
		cout << "No es posible construir el triangulo" << endl;
	
	return 0;
}

bool existe(float a, float b, float c)
{
	bool existe = false;
	cout << "Valor bool existe: "<< existe << endl;
	existe = (a + b > c) && (a + c > b) && (b + c > a);
	cout << "Valor bool existe: "<< existe << endl;
	return existe;
}

int tipo(float a, float b, float c)
{
	if(a == b && b == c) {
		return 1;
	}
	
	if(a == b || b == c || a == c) {
		return 2;
	}
	else {
		return 3;
	}
}

//float contorno(float a, float b, float c)
//{
//    ...
//}

//float heron(float a, float b, float c)
//{
//    ...
//}

//bool pitagoras(float a, float b, float c)
//{
//    ...
//}
