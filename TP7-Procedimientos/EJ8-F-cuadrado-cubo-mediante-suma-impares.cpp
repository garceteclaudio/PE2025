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

void ingreso(int &num, char &op);
int calcular_cuadrado_o_cubo(int num, char op);
main()
{
    int num;
    char op;
    ingreso(num, op);

    int resul = calcular_cuadrado_o_cubo(num, op);

    cout << "resultado: " << resul << endl;
}

// mediante suma de impares
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

void ingreso(int &num, char &op)
{
    bool positivo, opcion;
    do
    {
        cout << "Ingrese numero:" << endl;
        cin >> num;
        cout << "Ingrese [c] CUADRADO - [p] CUBO" << endl;
        cin >> op;
        opcion = (op == 'c') || (op == 'p');
    } while (!(opcion));

    if (num < 0)
    {
        num = num * (-1);
    }

    cout << "El numero es :" << num << endl;

    if (op == 'c')
    {
        cout << "Selecciono CUADRADO" << endl;
    }
    else
    {
        cout << "Selecciono CUBO" << endl;
    }
}