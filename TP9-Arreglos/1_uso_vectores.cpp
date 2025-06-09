#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX = 5;
typedef char tvector[MAX];
main()
{
    tvector datos;
    int i;
    for(i=0; i < MAX; i++){
        cout  << "Ingrese un caracter " << endl;
        cin >> datos[i];
    }    

    for(i=0; i < MAX; i++){
        cout  << datos[i] << "  - ";
    }

    system("pause");

}
