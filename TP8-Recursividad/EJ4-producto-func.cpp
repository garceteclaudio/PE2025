#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Producto recursivo mediante sumas sucesivas.
void ingreso(int &a, int &b);
int producto_recursivo(int a, int b);
main()
{
    int a, b;
    ingreso(a, b);

    cout << "Resultado: " << producto_recursivo(a, b) << endl;
}

int producto_recursivo(int a, int b)
{

    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + producto_recursivo(a, b - 1);
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