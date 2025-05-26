#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Codifica un programa modular que permita calcular el cuadrado y/o cubo de un valor ingresado por el usuario, considerando 2
// propuestas para llevar a cabo el cálculo:
// a) una función que, según un parámetro de opción, calcule el cuadrado o cubo de un número (mediante la suma de impares).
// b) un procedimiento que, utilizando la función del ítem a, calcule el cubo y cuadrado de un número ingresado por el usuario.

// Considera que el programa admitirá tanto valores positivos como negativos para realizar el cálculo. Indica el pasaje de
// parámetros utilizado.

void ingreso(int &num);
int calcular_cuadrado_o_cubo(int num, char op);
void proce_calcular_cuadrado_y_cubo(int num, int &cuadrado, int &cubo);
main()
{
    int num, cuadrado, cubo;

    ingreso(num);
    proce_calcular_cuadrado_y_cubo(num, cuadrado, cubo);

    cout << "Numero: " << num << " Cuadrado: " << cuadrado << " Cubo: " << cubo << endl;
}

void proce_calcular_cuadrado_y_cubo(int num, int &cuadrado, int &cubo)
{
    cuadrado = calcular_cuadrado_o_cubo(num, 'c');
    cubo = calcular_cuadrado_o_cubo(num, 'p');
}

int calcular_cuadrado_o_cubo(int num, char op)
{
    if (op == 'c')
    {
        // Se calcula cuadrado
        int cont = 1, suma = 0;

        while (cont <= num)
        {
            suma = suma + (2 * cont - 1);
            cont = cont + 1;
        }
        return suma;
    }
    else
    {
        // Se calcula cubo
        int cont = 1, suma = 0;
        int impar = (num - 1) * num + 1;

        while (cont <= num)
        {
            suma = suma + impar;
            impar = impar + 2;
            cont = cont + 1;
        }
        return suma;
    }
}

void ingreso(int &num)
{
    cout << "Ingrese numero:" << endl;
    cin >> num;
    if (num < 0)
    {
        num = num * (-1);
    }

    cout << "El numero es :" << num << endl;
}