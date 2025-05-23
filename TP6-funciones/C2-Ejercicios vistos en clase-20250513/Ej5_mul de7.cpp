#include<iostream>
using namespace std;

int multiplo(int n);
int COCIENTE(int a, int b);
int RESTO(int a, int b);
main()
{
	int num, res;
	do{
		cout<<"Ingrese numero: ";
		cin>>num;
	}while(num<=0);
	
	res=multiplo(num);
	
	if(res==0 || res==7)
		cout<<num<<" es multiplo 7"<<endl;
	else
		cout<<num<<" no es multiplo de 7"<<endl;
}

int multiplo(int n)
{
	int r,c,res;
	
	while(n>9)
	{
		r=RESTO(n,10);//n%10;
		c=COCIENTE(n,10);//n/10;
		res= c - r*2;
		//cout<<res<<endl;
		if(res<0)
			n=res*(-1);
		else
			n=res;
	}
	return n;
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
