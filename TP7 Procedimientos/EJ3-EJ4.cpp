#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// 3 ¿QuE ocurre si no se utiliza el pasaje de parámetros por
// referencia en los módulos enigma y misterio?

// 4 ¿Como se modificara el programa anterior si deben mostrarse los numeros primos de un intervalo especificado por el usuario?
// Considere que la solucion debe incluir un modulo para la deteccion de valores primos.

void enigma(int &a, int &b);
void misterio(int &a, int &b);
void secreto(int x, int y);

main()
{
    int num1, num2;
    enigma(num1, num2);
    misterio(num1, num2);
    secreto(num1, num2);
}

void enigma(int &a, int &b)
{
    do
    {
        cout << "Ingrese valor: ";
        cin >> a;
        cout << "Ingrese valor: ";
        cin >> b;
    } while (a < 0 || b < 0);
    cout << "Valores a: " << a << " b: " << b << endl;
}
void misterio(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
void secreto(int x, int y)
{
    int i, n;
    for (i = x; i <= y; i++)
    {
        n = i % 10;
        if (n == 0 || n == 5)
            cout << i;
    }
    cout << endl;
}
