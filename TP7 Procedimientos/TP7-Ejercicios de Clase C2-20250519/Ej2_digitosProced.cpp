#include <iostream>
using namespace std;

void ingreso(int &n);
int producto_dig(int n);
void mostrar(int n, int p);
void calculos(int a, int b, int &coc, int &res);
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
	} while (n <= 0);
}
int producto_dig(int n)
{
	int prod = 1, c, r;
	while (n > 0)
	{
		calculos(n, 10, n, r); // c,r);
		prod = prod * r;	   //  RESTO(n,10);//(n%10);
							   // n=c;    //  COCIENTE(n,10);//n/10;
	}
	return prod;
}

void calculos(int a, int b, int &coc, int &res)
{
	coc = 0;
	do
	{
		if (a >= b)
		{
			a = a - b;
			coc++;
		}
	} while (a >= b); // centinela
	res = a;
}

void mostrar(int n, int p)
{
	cout << "\nResultado de multiplicar los digitos de " << n << " es: " << p << endl;
}
