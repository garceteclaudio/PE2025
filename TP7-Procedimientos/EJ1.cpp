#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Consigna TP1: Usar solo procedimientos
// Datos de prueba:
// 5,5,5.. perimetro=15 area=10.83
// 11, 20, 40 No es triangulo valido
// 20, 20, 10 perimetro=50 area=96.82
//
void ingreso(float &a, float &b, float &c);
void calculo(float &a, float &b, float &c, float &per, float &area);
void salida(float per, float area);
main()
{
    float a, b, c;
    float per, area;

    ingreso(a, b, c);
    calculo(a, b, c, per, area);
    salida(per, area);
}

void calculo(float &a, float &b, float &c, float &per, float &area)
{
    float sper;
    per = a + b + c;
    sper = per / 2;
    area = powf(sper * (sper - a) * (sper - b) * (sper - c), 0.5);
}

void ingreso(float &a, float &b, float &c)
{
    bool positivo, existe;
    do
    {
        cout << "Ingrese lado: " << endl;
        cin >> a;
        cout << "Ingrese lado: " << endl;
        cin >> b;
        cout << "Ingrese lado: " << endl;
        cin >> c;

        positivo = (a > 0) && (b > 0) && (c > 0);
        existe = (a + b > c) && (a + c > b) && (b + c > a);

        if (positivo == false)
        {
            cout << "El valor de los lados debe ser positivo" << endl;
        }
        if (existe == false)
        {
            cout << "El triangulo no podra construirse" << endl;
        }
    } while (!(positivo == true && existe == true));
}

void salida(float per, float area)
{
    cout << "El perimetro del triangulo es: " << per << endl;
    cout << "El area del triangulo es: " << area << endl;
}