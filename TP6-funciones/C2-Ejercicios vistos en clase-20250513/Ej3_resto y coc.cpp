#include <iostream>
using namespace std;

int RESTO(int a, int b);
int COCIENTE(int a, int b);

main()
{
	int dividendo, divisor;
	
	do{
		cout<<"Ingrese dividendo: ";
		cin>>dividendo;
		cout<<"Ingrese divisor: ";
		cin>>divisor;
	} while(dividendo<0 || divisor<=0);
	
	cout<<"Resto "<<dividendo<<" % "<<divisor<<" es: "<<RESTO(dividendo,divisor)<<endl;
	cout<<"Cociente "<<dividendo<<" / "<<divisor<<" es: "<<COCIENTE(dividendo,divisor)<<endl;
}

int RESTO(int a, int b)
{
	do{
		if(a>=b)
			a=a-b;
	} while(a>=b); //centinela
	
	return a;
}

int COCIENTE(int a, int b)
{ int c=0;
	do{
		if(a>=b)
		{
			a=a-b;
			c++;
		}
	} while(a>=b); //centinela
	
	return c;
}
