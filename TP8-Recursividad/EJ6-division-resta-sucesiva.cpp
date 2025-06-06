#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void ingreso(int &dividendo, int &divisor);
// Realziar funcion recutsiva para calcular el cociente mediante restas sucesivas
int calcular_cociente(int dividendo, int divisor);
int calcular_resto(int dividendo, int divisor);
main()
{
    int dividendo, divisor;
    ingreso(dividendo, divisor);
    cout << dividendo << " / " << divisor << " = " << calcular_cociente(dividendo, divisor) << endl;
    cout << "Resto: " << calcular_resto(dividendo, divisor) << endl;
}

int calcular_cociente(int dividendo, int divisor)
{
    cout << dividendo << " - " << divisor << endl;
    if (dividendo < divisor)
        return 0;
    else
    {
        return 1 + calcular_cociente(dividendo - divisor, divisor);
    }
}

int calcular_resto(int dividendo, int divisor)
{
    cout << dividendo << " - " << divisor << endl;
    if (dividendo < divisor)
        return dividendo;
    else
    {
        return calcular_cociente(dividendo - divisor, divisor);
    }
}

void ingreso(int &dividendo, int &divisor)
{
    bool positivo, dividendoMasGrande;
    do
    {
        cout << "Ingrese dividendo: " << endl;
        cin >> dividendo;
        cout << "Ingrese divisor: " << endl;
        cin >> divisor;
        positivo = dividendo > 0 && divisor > 0;
        dividendoMasGrande = dividendo > divisor;
    } while (!(positivo && dividendoMasGrande));
    cout << "dividendo: " << dividendo << endl;
    cout << "divisor: " << divisor << endl;
}
