#include <iostream>
using namespace std;

int RESTO(int a, int b);
int cantidad(int n);


main()
{
	int num, i;
	
	cout<<"Ingrese numero: ";
	cin>>num;
	
	for(i=1;i<=num;i++)
		if(RESTO(num,i)==0)//(num % i==0)
			cout<<i<<"  ";
	cout<<"\nCantidad de divisores impares: "<<cantidad(num)<<endl;
}

int cantidad(int n)
{int i,c=0;
	for(i=1;i<=n;i++)
		if(RESTO(n,i)==0)
		  if(RESTO(i,2)==1)//(i%2==1)
			c++;
  return c;
}
int RESTO(int a, int b)
{
	do{
		if(a>=b)
			a=a-b;
	} while(a>=b); //centinela
	
	return a;
}

