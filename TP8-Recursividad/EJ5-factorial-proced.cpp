#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void factorial_rec(int num, int &fact);
void ingreso(int &num);
main()
{
    int num, factorial;
    ingreso(num);
    factorial_rec(num, factorial);
    cout << "Resultado: " << factorial << endl;
}
void ingreso(int &num)
{
    bool positivo;
    do
    {
        cout << "Ingrese numero: " << endl;
        cin >> num;
        positivo = num > 0;
    } while (!positivo);
    cout << "Numero ingresado: " << num << endl;
}

void factorial_rec(int num, int &fact)
{
    if (num == 0)
        fact = 1;
    else
    {
        factorial_rec(num - 1, fact);
        fact = num * fact;
    }
}