#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Producto recursivo mediante sumas sucesivas.
void ingreso(int &a, int &b);
void producto_recursivo(int a, int b, int &resul);
main()
{
    int a, b, resul;
    ingreso(a, b);

    producto_recursivo(a, b, resul);

    cout << a << " x " << b << " = " << resul << endl;
}

void producto_recursivo(int a, int b, int &resul)
{

    if (b == 0)
    {
        resul = 0;
    }
    else
    {
        producto_recursivo(a, b - 1, resul);
        resul = a + resul;
        cout << "a: " << a << " b: " << b << " resul: " << resul << endl;
    }
}

void ingreso(int &a, int &b)
{
    bool positivo;
    do
    {
        cout << "Ingreso numero : " << endl;
        cin >> a;
        cout << "Ingreso numero : " << endl;
        cin >> b;
        positivo = a > 0 && b > 0;
    } while (!positivo);
}