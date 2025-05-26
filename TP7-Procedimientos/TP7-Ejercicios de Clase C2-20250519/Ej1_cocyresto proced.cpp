#include <iostream>
using namespace std;

void ingreso(int &a, int &b);
/// Procedimiento calculos
void calculos(int a, int b, int &coc, int &res);
void mostrar(int a, int b, int coc, int res);
main()
{
	int dividendo, divisor, coc, res;

	ingreso(dividendo, divisor);

	cout << "dividendo: " << dividendo << endl;
	cout << "divisor: " << divisor << endl;

	calculos(dividendo, divisor, coc, res);

	mostrar(dividendo, divisor, coc, res);
}

// El procedimiento nunca hace return
void ingreso(int &a, int &b)
{
	do
	{
		cout << "Ingrese dividendo: ";
		cin >> a;
		cout << "Ingrese divisor: ";
		cin >> b;
	} while (a < 0 || b <= 0);
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
void mostrar(int a, int b, int coc, int res)
{
	cout << "Cociente " << a << " / " << b << " es: " << coc << endl;
	cout << "Resto " << a << " % " << b << " es: " << res << endl;
}
