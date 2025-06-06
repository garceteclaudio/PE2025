#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int factorial_rec(int num);
void ingreso(int &num);
main()
{
    int num;
    ingreso(num);
    cout << "Resultado: " << factorial_rec(num) << endl;
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

int factorial_rec(int num)
{
    if (num == 0)
        return 1;
    else
        return factorial_rec(num - 1) * num;
}