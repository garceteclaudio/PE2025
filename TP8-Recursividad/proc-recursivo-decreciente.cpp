#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void mostrar_numeros(int num);
main()
{
    int num;
    cout << "Ingrese num: " << endl;
    cin >> num;

    mostrar_numeros(num);
}

void mostrar_numeros(int num)
{
    if (num == 1) // caso base
    {
        cout << num << ", ";
    }
    else
    { // reglar recursiva
        // q pasa en este caso ?? jugar para entender
        // cout << num << ", ";
        mostrar_numeros(num - 1);
        cout << num << ", ";
    }
}