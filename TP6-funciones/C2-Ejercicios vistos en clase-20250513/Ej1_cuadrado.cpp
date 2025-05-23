#include <iostream>
using namespace std;

int cuadrado(int num);
main()
{
	int m,a;
	//ENTRADA
	cout<<"Ingrese dato: ";
	cin>>a;
	
	//PROCESO
	m=cuadrado(a); //se usa cuando necesitan trabajar con la vble
	
	//SALIDA
	cout<<"Salida: "<<m<<endl;
	
	cout<<"Ingrese dato: ";
	cin>>a;
	cout<<"Resultado: "<<cuadrado(a)<<endl; //solo interesa el resultado
	
	cout<<"Ingrese dato: ";
	cin>>a;
	
	if(cuadrado(a)%2==1) //expresión 
		cout<<"El cuadrado es impar "<<cuadrado(a);
	else
		cout<<"El cuadrado es par "<<cuadrado(a);
	/*
	m=cuadrado(a);
	if(m%2==1) //expresión 
		cout<<"El cuadrado es impar "<<m;
	else
		cout<<"El cuadrado es par "<<m;
	*/
}

int cuadrado(int num)
{  int m, i;
   bool band;
	m=0;
	i=1;
	band= num>0;
	while(band==true)
	{
		m=m+2*i-1;
		num--; //a=a-1
		band=num>0;
		i++;
	}
	return m;
}
