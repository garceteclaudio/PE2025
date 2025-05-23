#include <iostream>
using namespace std;

// Diseña un algoritmo modular que dado un valor entero
// permita calcular el producto de los digitos de un numero entero positivo
// Plantee la solucion con funciones y con procemientos para reemplazar los operadores
// de modulo y cociente entero

void ingreso(int &n);
int producto_dig(int n);
void mostrar(int n, int p);
int RESTO(int a, int b);
int COCIENTE(int a, int b);

main()
{
	int num, prod;
	ingreso(num);
	prod = producto_dig(num);
	mostrar(num, prod);
}

void ingreso(int &n)
{
	do
	{
		cout << "Ingrese valor: ";
		cin >> n;
	} while (n <= 0); // 5<0 F, sale del do while
}
int producto_dig(int n)
{
	int prod = 1;
	while (n > 0)
	{
		prod = prod * RESTO(n, 10); //(n%10); PRODUCTO(prod,RESTO(n,10))
		n = COCIENTE(n, 10);		// n/10;
	}
	return prod;
}

int RESTO(int a, int b)
{
	do
	{
		if (a >= b)
			a = a - b;
	} while (a >= b); // centinela

	return a;
}

int COCIENTE(int a, int b)
{
	int c = 0;
	do
	{
		if (a >= b)
		{
			a = a - b;
			c++;
		}
	} while (a >= b); // centinela

	return c;
}

void mostrar(int n, int p)
{
	cout << "\nResultado de multiplicar los digitos de " << n << " es: " << p << endl;
}