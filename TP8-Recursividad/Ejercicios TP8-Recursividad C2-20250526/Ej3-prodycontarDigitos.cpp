#include<iostream>
using namespace std;
void ingreso(int &n);
void calculo(int n, int &prod, int &dig);
main()
{
	int num, producto,cantidad;
	ingreso(num);
	calculo(num,producto,cantidad);
	cout<<"Producto: "<<producto<<endl;
	cout<<"Cantidad de digitos: "<<cantidad<<endl;
}

void ingreso(int &n)
{
	//do{
	cout<<"Ingrese valor: ";
	cin>>n;
	//} while(n<0);
}

void calculo(int n, int &prod, int &dig)
{
	if(n<10)
	{  if(n==0)
	    { prod=0;
	      dig=0;
	     }
	   else
		{ prod=n;
		  dig=1;
	    }
	}
	else
	   {
		calculo(n/10,prod,dig);
		//cout<<"prod: "<<prod<<endl;
		prod=prod*(n%10);
		dig=dig+1;
	}
}
