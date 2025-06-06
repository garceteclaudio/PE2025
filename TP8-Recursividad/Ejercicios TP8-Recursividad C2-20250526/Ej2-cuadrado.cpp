#include<iostream>
using namespace std;
void ingreso(int &n);
int calculo(int n);
void calculo_P(int n, int &res);
main()
{
	int num, res;
	ingreso(num);
	cout<<"Cuadrado es: "<<calculo(num)<<endl;
	calculo_P(num, res);
	cout<<"Calculo con proc: "<<res<<endl;
}

void ingreso(int &n)
{
	//do{
		cout<<"Ingrese valor: ";
		cin>>n;
		if(n<0)
			n=n*(-1);
	//} while(n<0);
}
/*
int calculo(int n)
{
   int res=0;

   while(n!=0)
   {
	   res=res+(2*n-1);
	   n=n-1;
   }
   return res;
}*/

int calculo(int n)
{
	int res;
	if(n==0)
		res=0;
	else
		res=(2*n-1)+calculo(n-1);
	
	return res;
}

void calculo_P(int n, int &res)
{
	
	if(n==0)
		res=0;
	else
		{ calculo_P(n-1, res);
		  res=(2*n-1)+res;
	}
}
