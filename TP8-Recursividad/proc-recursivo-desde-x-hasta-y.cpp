#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void mostrar_numeros(int inf, int sup);
int resto(int a, int b);
main()
{
    int inf, sup;
    cout << "Ingrese inferior: " << endl;
    cin >> inf;
    cout << "Ingrese sup: " << endl;
    cin >> sup;
    mostrar_numeros(inf, sup);
}

void mostrar_numeros(int inf, int sup)
{
    if (inf == sup) // caso base
    {
        if (resto(sup, 2) != 0)
            cout << sup << ", ";
    }
    else
    { // reglar recursiva
        // acerco el menor valor al mayor
        mostrar_numeros(inf, sup - 1);
        // solo impares ??
        if (resto(sup, 2) != 0)
            cout << sup << ", ";
    }
}

int resto(int a, int b)
{
    while (a >= b)
    {
        a = a - b;
    }
    return a;
}