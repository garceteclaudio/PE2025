#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Codifica un programa modular que permita calcular el cociente y resto de la división entera entre 2 valores ingresados por el
//  usuario, considerando 2 propuestas para llevar a cabo el cálculo:
//  a) una función que, según un parámetro de opción, calcule el cociente o resto de la división (mediante restas sucesivas).

//  b) un procedimiento que calcule el cociente y resto de la división entera (mediante restas sucesivas).
//  Considera que el programa sólo deberá admitir valores positivos para realizar el cálculo. Indica el pasaje de parámetros usado

void ingreso(int &dividendo, int &divisor);
void calcular_cociente_resto(int dividendo, int divisor, int &cociente, int &resto);
main()
{
    int dividendo, divisor, cociente, resto;

    ingreso(dividendo, divisor);

    calcular_cociente_resto(dividendo, divisor, cociente, resto);

    cout << "Cociente: " << cociente << " Resto: " << resto << endl;
}

void ingreso(int &dividendo, int &divisor)
{
    bool positivo;
    do
    {

        cout << "Ingrese dividendo " << endl;
        cin >> dividendo;
        cout << "Ingrese divisor " << endl;
        cin >> divisor;
        positivo = (dividendo > 0) && (divisor > 0);
    } while (!positivo);
    cout << dividendo << " / " << divisor << endl;
}

void calcular_cociente_resto(int dividendo, int divisor, int &cociente, int &resto)
{
    cociente = 0;
    while (divisor <= dividendo)
    {
        dividendo = dividendo - divisor;
        cociente = cociente + 1;
    }
    resto = dividendo;
}