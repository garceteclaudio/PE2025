#include <iostream>
using namespace std;
void ingreso(int &a, int &b);
void calculo(int a, int b, int &coc, int &res);

main()
{
	int dividendo, divisor, cociente, resto;
	ingreso(dividendo, divisor);
	calculo(dividendo, divisor, cociente, resto);
	cout<<"Cociente: "<<cociente<<endl;
	cout<<"Resto: "<<resto<<endl;
}

void ingreso(int &a, int &b)
{
	do{
		cout<<"Ingrese valor: ";
		cin>>a;
		cout<<"Ingrese valor: ";
		cin>>b;
	} while(a<0 || b<=0);
}


void calculo(int a, int b, int &coc, int &res)
{
	if(a<b)
	{
		coc=0;
		res=a;
	}
	else
	{
		calculo(a-b, b, coc,res);
		coc++;
	}
}
