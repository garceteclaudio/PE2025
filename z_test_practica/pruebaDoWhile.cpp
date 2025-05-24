#include <iostream>
#include <stdlib.h>
using namespace std;

// Realizar una funcion que permita ingresar
// numeros positivos e impares.
void ingresoTest(int &a, int &b);
main()
{
    int a, b;
    ingresoTest(a, b);
}

void ingresoTest(int &a, int &b)
{
    do
    {
        cout << "Ingrese 1er valor: " << endl;
        cin >> a;
        cout << "Ingrese 2do valor: " << endl;
        cin >> b;
    } while (a <= 0 || a % 2 == 0 || b <= 0 || b % 2 == 0); // sale por F

    cout << "Numeros ingresados  a: " << a << " b: " << b << endl;
}