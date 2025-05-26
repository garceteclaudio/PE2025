#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Consigna TP2:
// A partir del valor de los lados de un cuadrilaterro
// y su cantidad de angulos rectos
// Determinar si es posible construirlo
// Su tipo
// Y calcular su perimetro per = a+b+c+d

// modulo ingreso: captura entrada del user, lados del cuadrilatero y cant de angulos rectos,
// garantizando q los valores sean validos para reallizar el calculo (para construir el cuadrilatero)
// modulo proceso: permite identificar el tipo de cuadrilatero y calcular su perimetro, en modulos separados
// modulo salida: presenta los resultados en pantalla, tipo de cuadrilatero y perimetro

void ingreso(int &a, int &b, int &c, int &d, int &cantAngRectos);
void proceso(int a, int b, int c, int d, int cantAngRectos, int &perimetro, int &tipoCuadrilatero);
int calcular_perimetro(int a, int b, int c, int d);
void salida(int perimetro, int tipoCuadrilatero);

main()
{
    int a, b, c, d, cantAngRectos, perimetro, tipoCuadrilatero;

    ingreso(a, b, c, d, cantAngRectos);

    proceso(a, b, c, d, cantAngRectos, perimetro, tipoCuadrilatero);

    salida(perimetro, tipoCuadrilatero);
}

// un cuadrado tiene 4 lados iguales y 4 ángulos rectos
//  un rectángulo tiene 2 pares de lados iguales y 4 ángulos rectos
// un trapecio rectángulo tiene 2 ángulos rectos
//  otro cuadrilátero no tendrá ningún ángulo recto
void proceso(int a, int b, int c, int d, int cantAngRectos, int &perimetro, int &tipoCuadrilatero)
{
    tipoCuadrilatero = 0;
    // return 1 para cuadrado
    if ((a == b) && (b == c) && (c == d) && (cantAngRectos == 4))
    {
        tipoCuadrilatero = 1;
    }
    // return 2 para rectangulo
    if (((a == c) || (b == d) || (a == b) || (c == d)) && (cantAngRectos == 4))
    {
        tipoCuadrilatero = 2;
    }

    // return 3 para trapecio rectangulo
    if ((a != b) && (b != c) && (c != d) && (cantAngRectos == 2))
    {
        tipoCuadrilatero = 3;
    }

    // return 4 para otro cuadrilatero, sin angulos rectos
    if ((a != b) && (b != c) && (c != d) && (cantAngRectos == 0))
    {
        tipoCuadrilatero = 4;
    }

    perimetro = calcular_perimetro(a, b, c, d);
}

int calcular_perimetro(int a, int b, int c, int d)
{
    return a + b + c + d;
}

void salida(int perimetro, int tipoCuadrilatero)
{
    cout << "El perimetro es: " << perimetro << endl;
    switch (tipoCuadrilatero)
    {
    case 1:
        cout << "Es cuadrado." << endl;
        break;
    case 2:
        cout << "Es rectangulo." << endl;
        break;
    case 3:
        cout << "Es trapecio rectangulo." << endl;
        break;
    case 4:
        cout << "Es otro tipo de cuadrilatero." << endl;
        break;
    }
}

void ingreso(int &a, int &b, int &c, int &d, int &cantAngRectos)
{

    bool positivo, angulos, existe;
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
        existe = (a + b + c > d) && (a + b + d > c) && (a + c + d > b) && (b + c + d > a);
        if (positivo == false)
        {
            cout << "Todos los lados deben ser positivos" << endl;
            cout << "Vuelva a ingresar valor de los lados." << endl;
        }
        if (existe == false)
        {
            cout << "La suma de 3 lados cualqesquiera debe ser mayor al lado restante." << endl;
            cout << "Vuelva a ingresar valores para todos los lados" << endl;
        }
        if (cantAngRectos == false)
        {
            cout << "La cantidad de angulos rectos deben ser entre 0 y 4" << endl;
            cout << "Vuelva a ingresar cantidad de angulos rectos" << endl;
        }

    } while (!(positivo && angulos && existe));

    cout << "Los valores son: " << " a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
    cout << "Cantidad de angulos rectos: " << cantAngRectos << endl;
}