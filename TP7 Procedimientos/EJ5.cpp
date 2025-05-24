#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
// Codifica un programa modular que permita calcular las raíces de una ecuación cuadrática
// Para ello, considera que el programa
// debe validar el valor de los coeficientes de la ecuación de modo que sólo se acepten datos que permitan realizar el cálculo.

// una función que calcule la raíz x1 y otra que calcule la raíz x2. ¿Será posible hacerlo en una sola función? (pista: agregar
// un parámetro de opción)
// un procedimiento que calcule ambas raíces
// Indica el pasaje de parámetros usado

void ingreso(int &a, int &b, int &c);
float calcularRaizX1(int a, int b, int c);
float calcularRaizX2(int a, int b, int c);
void salida(float x1, float x2);
// float calcularTodasLasRaices(int a, int b, int c, int r);
// Entradas: 1, -3, 2 Salida: 2,1
// Entrada: 1,-2,1 Salida: 1
// Entrada: 1,2,5 Salida: Compleja
main()
{
    int a, b, c;
    float x1, x2;
    ingreso(a, b, c);

    x1 = calcularRaizX1(a, b, c);
    x2 = calcularRaizX2(a, b, c);

    salida(x1, x2);
}

void ingreso(int &a, int &b, int &c)
{
    bool aNoEsCero;
    do
    {
        cout << "Ingrese valor para a:" << endl;
        cin >> a;
        cout << "Ingrese valor para b:" << endl;
        cin >> b;
        cout << "Ingrese valor para c:" << endl;
        cin >> c;
        aNoEsCero = a != 0;
    } while (!aNoEsCero);

    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}

float calcularRaizX1(int a, int b, int c)
{
    float x1 = (-b + powf(powf(b, 2) - 4 * a * c, 0.5)) / 2 * a;
    return x1;
}
float calcularRaizX2(int a, int b, int c)
{
    float x2 = (-b - powf(powf(b, 2) - 4 * a * c, 0.5)) / 2 * a;
    return x2;
}

void salida(float x1, float x2)
{
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
}