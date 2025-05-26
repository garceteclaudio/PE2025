#include <iostream>
using namespace std;

int RESTO(int a, int b);
int cantidad(int n);
void divisores(int n);
main()
{
	int num;

	cout << "Ingrese numero: ";
	cin >> num;

	divisores(num);

	cout << "\nCantidad de divisores impares: " << cantidad(num) << endl;
}
void divisores(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		if (RESTO(n, i) == 0) //(num % i==0)
			cout << i << "  ";
}

int cantidad(int n)
{
	int i, c = 0;
	for (i = 1; i <= n; i++)
		if (RESTO(n, i) == 0)
			if (RESTO(i, 2) == 1) //(i%2==1)
				c++;
	return c;
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
