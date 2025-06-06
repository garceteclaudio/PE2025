#include <iostream>
using namespace std;

void ingreso(int &a, int &b);
int potencia(int a, int b);
void potencia_proc(int a, int b, int &pot);
main()
{
	int base, exponente, pot;
	float res;
	ingreso(base, exponente);
	if (exponente<0)
	{ exponente=exponente*(-1);
		res=1.0/potencia(base,exponente);
	}
	else
		res=potencia(base,exponente);
	
	cout<<"Potencia: "<<res<<endl;
	potencia_proc(base, exponente, pot);
	cout<<"Calculo: "<<pot<<endl;
}

void ingreso(int &a, int &b)
{
	//do{
		cout<<"Ingrese base: ";
		cin>>a;
		cout<<"Ingrese exponente: ";
		cin>>b;
	//} while(b<0);
}

int potencia(int a, int b)
{
	int pot;
	if(b==0)
		pot=1;
	else
		pot=a*potencia(a,b-1);
	
	return pot;
}

void potencia_proc(int a, int b, int &pot)
{
	if(b==0)
	{pot=1;
	cout<<"pot CB: "<<pot<<endl;
	}
	else
		{ cout<<"pot antes: "<<pot<<endl;
		  potencia_proc(a,b-1,pot);
		  cout<<"pot luego: "<<pot<<endl;
		  pot=a*pot;
	}
}
