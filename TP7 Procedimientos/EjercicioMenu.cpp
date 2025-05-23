#include <iostream>
#include <stdlib.h>
using namespace std;

// Diseñe un algoritmo modular que presente un menu con las siguiente opciones:
// a) Ingresar 3 valores impares positivos, distintos entre si y ordenardos de menor a  mayor
// b) Calcular la potencia del maximo elevado al minimo obtenido en la opcion a, mediante productos sucesivos
// c) Determinar si alguno de los valores obtenidos en la opcion a) son primos o no y
// d) Salir

void ingreso(int &a, int &b, int &c);
void ingresoTest(int &a, int &b, int &c);
int potencia(int b, int e);
void mostrarPrimo(int a, int b, int c);
bool esprimo(int n);
void menu(char &op);
main()
{
    int num1, num2, num3;
    char opcion;
    bool control = false;

    do
    {
        system("cls"); // limpieza de pantalla, si uso limpieza, uso pausa!!
        menu(opcion);
        switch (opcion)
        {
        case 'a':
            ingreso(num1, num2, num3);
            control = true;
            break;
        case 'b':
            if (control == true)
            {
                cout << "Potencia: " << num1 << "^" << num3 << " = " << potencia(num1, num3) << endl;
            }
            else
                cout << "debe elegir primero la opcion a" << endl;
            break;
        case 'c':
            if (control == true)
            {
                mostrarPrimo(num1, num2, num3);
            }
            else
                cout << "debe elegir primero la opcion a" << endl;
            break;
        case 'd':
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
        system("pause"); // pausa
    } while (opcion != 'd'); // sale por Falso
}

void mostrarPrimo(int a, int b, int c)
{
    if (esprimo(a) == true)
    {
        cout << a << " es primo" << endl;
    }
    if (esprimo(b) == true)
    {
        cout << b << " es primo" << endl;
    }
    if (esprimo(c) == true)
    {
        cout << c << " es primo" << endl;
    }
}

bool esprimo(int n)
{
    int contDivisible = 0, resto, cont = 1;
    while (cont <= n)
    {
        resto = n % cont;
        if (resto == 0)
        {
            contDivisible = contDivisible + 1;
        }
        cont = cont + 1;
    }

    if (contDivisible == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int potencia(int b, int e)
{
    int cont = 1, pot = 1;
    while (cont <= e) // entra por Verdadero
    {
        pot = pot * b;
        cout << "pot: " << pot << endl;
        cont = cont + 1;
    }
    return pot;
}

void menu(char &op)
{
    cout << "\n*****MENU*****" << endl;
    cout << "a. Ingreso de 3 valores impares, positivos y distintos" << endl;
    cout << "b. potencia del mayor elevado al menor" << endl;
    cout << "c. Determinar si son primos" << endl;
    cout << "d. Salir" << endl;
    cout << "Elija opcion: ";
    cin >> op;
}
void ingreso(int &a, int &b, int &c)
{
    bool numPositivo = false, esImpar = false, ordenados = false;

    do
    {
        cout << "Ingrese 1er valor impar positivo" << endl;
        cin >> a;
        cout << "Ingrese 2do valor impar positivo" << endl;
        cin >> b;
        cout << "Ingrese 3er valor impar positivo" << endl;
        cin >> c;
        numPositivo = a > 0 && b > 0 && c > 0;
        esImpar = (a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0);
        // debe ser ordenado de menor a mayor
        ordenados = b > a && c > b && c > a;

    } while (!(numPositivo && esImpar && ordenados)); // Sale por falso

    cout << "Se ingreso correctamente: " << " a: " << a << " b: " << b << " c: " << c << endl;
}
