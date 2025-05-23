#include<iostream>
using namespace std;
int calculo1(int n);
int calculo2(int n);
main()
{
	int s, n;
	
	cout<<"Ingrese valor: ";
	cin>>n;
	s=calculo1(n);
	cout<<"Resultado es: "<<s<<endl;
	
	s=calculo2(n);
	cout<<"Resultado es: "<<s<<endl;
}

int calculo1(int n)
{ int i, s,aux;
	i=1;
	s=0;
	aux=n;
	while(n!=0) //(i<=n) contador
	{
		s=s+i;
		i++;//i=i+1;
		n=n-1;
	}
	s=s*2-aux;
	return s;
}
int calculo2(int n)
{
	int s,aux;
	s=0;
	aux=n;
	while(n!=0) //(i<=n) contador
	{
		s=s+n;
		n=n-1;
	}
	s=s*2-aux;
	return s;
}
