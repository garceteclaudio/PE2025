#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Consigna TP2:
// A partir del valor de los lados de un cuadrilaterro
// y su cantidad de angulos rectos
// Determinar si es posible construirlo
// Su tipo
// Y calcular su perimetro

void ingreso(int &a, int &b, int &c, int &d, int &cantAngRectos);
main()
{
    int a, b, c, d, e;
    ingreso(a, b, c, d, e);
}

void ingreso(int &a, int &b, int &c, int &d, int &cantAngRectos)
{

    bool positivo, angulos;
    do
    {
        cout << "Ingrese lado a: " << endl;
        cin >> a;
        cout << "Ingrese lado b: " << endl;
        cin >> b;
        cout << "Ingrese lado c: " << endl;
        cin >> c;
        cout << "Ingrese lado d: " << endl;
        cin >> d;
        cout << "Ingrese cantidad de angulos rectos: " << endl;
        cin >> cantAngRectos;
        positivo = (a > 0) && (b > 0) && (c > 0) && (d > 0);
        angulos = (cantAngRectos >= 0 && cantAngRectos <= 4);
    } while (!(positivo && angulos));

    cout << "Los valores son: " << " a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
    cout << "Cantidad de angulos rectos: " << cantAngRectos << endl;
}