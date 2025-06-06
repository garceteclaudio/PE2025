#include <iostream>
using namespace std;
void ingreso(int &a, int &b);
void mostrar(int a, int b);
bool primo(int num);
void mostrar_NOPrimo(int a, int b);
int contar_Primos(int a, int b);
main()
{
	int inferior,superior;
	ingreso(inferior, superior);
	mostrar(inferior,superior);
	cout<<endl;
	mostrar_NOPrimo(inferior,superior);
	
	cout<<"\n cantidad de primos: "<<contar_Primos(inferior,superior)<<endl;
	
}

void ingreso(int &vi, int &vf)
{
	do{
		cout<<"Ingrese limite inferior: ";
		cin>>vi;
		cout<<"Ingrese limite superior: ";
		cin>>vf;
	} while(vi<0 || vf<vi); //positivos y a<b
}

void mostrar(int vi, int vf)
{
	if(vi==vf)
		cout<<vi<<", ";
	else
		{
		  cout<<vi<<", ";  
		  mostrar(vi+1,vf);
		  //cout<<vi<<", ";
		
	}
}

void mostrar_NOPrimo(int vi, int vf)
{
	if(vi==vf)
	{	if(primo(vi)==false)
			cout<<vi<<", ";
	}
	else
	{
		if(primo(vi)==false)
			cout<<vi<<", ";	
		
		mostrar_NOPrimo(vi+1,vf);
		
	}
}

bool primo(int num)
{
	int i=2;
	bool pri=true;
	while(i<=num/2 && pri==true)
	{
		if(num%i==0)
			pri=false;
		i++;
	}
	return (pri && num!=1) ;
}

int contar_Primos(int vi, int vf)
{ int c=0;
	if(vi==vf)
	{	if(primo(vi)==true)
		   c=1;
	}
	else
	{
		if(primo(vi)==true)
			c= 1+ contar_Primos(vi+1,vf);
		else
			c=contar_Primos(vi+1,vf);
		
	}
	return c;
}
