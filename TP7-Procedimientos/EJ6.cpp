#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// programa modular que permita calcular, mediante productos sucesivos, la potencia de un entero número A elevado
//  a otro B, considerando 2 propuestas para llevar a cabo el cálculo:
//  a) una función que calcule la potencia (mediante productos sucesivos). ¿Cómo devuelve el resultado?
//  b) un procedimiento que calcule la potencia (mediante productos sucesivos). ¿Cómo devuelve el resultado?

void ingreso(int &base, int &expo);
// Pasaje por valor
int calcular_potencia(int base, int exponente);
// Pasaje por referencia
void calcular_potencia_procedimiento(int base, int exponente, int &potencia);
main()
{
    int base, expo, potencia;
    ingreso(base, expo);
    cout << "[Funcion] " << base << "^" << expo << "=" << calcular_potencia(base, expo) << endl;

    calcular_potencia_procedimiento(base, expo, potencia);
    cout << "[Procedimiento]" << base << "^" << expo << "=" << potencia << endl;
}

void ingreso(int &base, int &expo)
{
    bool positivos;
    do
    {
        cout << "ingrese base: " << endl;
        cin >> base;
        cout << "ingrese exponente: " << endl;
        cin >> expo;
        positivos = (base >= 0) && (expo >= 0);
    } while (!positivos);
    cout << "Los numeros ingresados fueron, base: " << base << " exponente: " << expo << endl;
}

int calcular_potencia(int base, int exponente)
{
    int cont = 1, pot = 1;
    // 2^4= 2*2*2*2=16
    while (cont <= exponente)
    {
        pot = pot * base;
        cont = cont + 1;
    }
    return pot;
}
void calcular_potencia_procedimiento(int base, int exponente, int &potencia)
{
    int cont = 1;
    potencia = 1;
    // 2^4= 2*2*2*2=16
    while (cont <= exponente)
    {
        potencia = potencia * base;
        cont = cont + 1;
    }
}