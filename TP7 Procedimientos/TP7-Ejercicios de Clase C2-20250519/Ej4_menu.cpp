#include <iostream>
#include <stdlib.h>
using namespace std;

// Diseñe un algoritmo modular que presente un menu con las siguiente opciones:
// a) Ingresar 3 valores impares positivos, distintos entre si y ordenardos de menor a  mayor
// b) Calcular la potencia del maximo elevado al minimo obtenido en la opcion a, mediante productos sucesivos
// c) Determinar si alguno de los valores obtenidos en la opcion a) son primos o no y
// d) Salir

void ingreso(int &a, int &b, int &c);
int potencia(int b, int e);
void det_primos(int a, int b, int c);
bool esprimo(int n);
void menu(char &op);
main()
{
	int num1, num2, num3;
	char opcion;
	bool control = false;

	do
	{
		system("cls"); // limpieza de pantalla
		menu(opcion);
		switch (opcion)
		{
		case 'a':
			cout << "Ingresando datos" << endl;
			ingreso(num1, num2, num3);
			cout << "ingreso exitoso " << num1 << ", " << num2 << ", " << num3 << endl;
			control = true;
			break;
		case 'b':
			if (control == true)
			{
				cout << "Calculando potencia" << endl;
				cout << "la potencia de " << num3 << "^" << num1 << " es: " << potencia(num3, num1) << endl;
			}
			else
				cout << "debe elegir primero la opcion a" << endl;
			break;
		case 'c':
			if (control)
			{
				cout << "determinando primos" << endl;
				det_primos(num1, num2, num3);
			}
			else
				cout << "debe elegir primero la opcion a" << endl;
			break;
		case 'd':
			cout << "FIN DEL PROGRAMA" << endl;
			break;
		default:
			cout << "opcion incorrecta" << endl;
		}
		system("pause"); // pausa
	} while (opcion != 'd');
}
void menu(char &op)
{
	cout << "\n*****MENU*****" << endl;
	cout << "a. Ingreso de 3 valores impares, positivos y distintos" << endl;
	cout << "b. potencia del mayor elevado al menor" << endl;
	cout << "c. Determinar si son primos" << endl;
	cout << "d. Salir" << endl;
	cout << "Elija opcion: ";
	cin >> op;
}
void ingreso(int &a, int &b, int &c)
{
	/* //OPCION 1
	do{
		cout<<"Ingrese primer valor: ";
		cin>>a;
		cout<<"Ingrese segundo valor: ";
		cin>>b;
		cout<<"Ingrese tercer valor: ";
		cin>>c;
	} while(a<=0 || b<=0 || c<=0 || a%2==0 || b%2==0 || c%2==0 || a>=b || b>=c );
	*/
	/* //OPCION 2
	do{
		cout<<"Ingrese primer valor: ";
		cin>>a;
	} while(a<=0 || a%2==0 );

	do{
		cout<<"Ingrese segundo valor: ";
		cin>>b;
	} while( b<=0 || b%2==0 || a>=b );

	do{
		cout<<"Ingrese tercer valor: ";
		cin>>c;
	} while( c<=0 || c%2==0 || b>=c );
	*/
	// OPCION 3
	bool negativos, pares, desordenados;
	do
	{
		cout << "Ingrese primer valor: ";
		cin >> a;
		cout << "Ingrese segundo valor: ";
		cin >> b;
		cout << "Ingrese tercer valor: ";
		cin >> c;
		negativos = a <= 0 || b <= 0 || c <= 0;
		pares = a % 2 == 0 || b % 2 == 0 || c % 2 == 0;
		desordenados = a >= b || b >= c;

	} while (negativos || pares || desordenados);
}

int potencia(int b, int e)
{
	int pot = 1;
	do
	{
		pot = pot * b;
		e--;
	} while (e > 0);

	return pot;
}

void det_primos(int a, int b, int c)
{
	if (esprimo(a) == true)
		cout << a << " es primo" << endl;
	else
		cout << a << " no es primo" << endl;

	if (esprimo(b) == true)
		cout << b << " es primo" << endl;
	else
		cout << b << " no es primo" << endl;

	if (esprimo(c) == true)
		cout << c << " es primo" << endl;
	else
		cout << c << " no es primo" << endl;
}

bool esprimo(int n)
{
	int i = 2;
	bool primo = true;
	while (i <= n / 2 && primo)
	{
		if (n % i == 0)
			primo = false;
		i++;
	}
	return primo;
}
