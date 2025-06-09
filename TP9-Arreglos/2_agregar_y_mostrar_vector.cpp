#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX = 5;
typedef int tvector[MAX];
void agregar(tvector &vectorNumeros, int &ocupado, int nuevo);
void mostrar(tvector vectorNumeros);
main()
{
    int ocu = -1, nuevo, i;
    tvector vectorNums;

    for(i = 0; i < MAX; i++){
        cout << "Ingrese dato" << endl;
        cin >> nuevo;
        agregar(vectorNums, ocu,nuevo);
    }

    mostrar(vectorNums);
}

void mostrar(tvector vectorNumeros){
    int i;
    for(i = 0; i < MAX; i++){
        cout << vectorNumeros[i] << " , ";
    }
}

void agregar(tvector &vectorNumeros, int &ocupado, int nuevo){
    if(ocupado == MAX-1){
        cout << "Vector lleno !!" << endl;
    }else{
        ocupado = ocupado + 1;
        vectorNumeros[ocupado] = nuevo;
    }
}