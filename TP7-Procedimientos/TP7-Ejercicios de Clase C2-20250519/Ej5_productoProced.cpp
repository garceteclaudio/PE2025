#include <iostream>
using namespace std;

void ingreso(int &a, int &b, int &c);
void producto(int a, int b, int &prod);
main()
{
	int num1, num2, num3, prod;
	ingreso(num1, num2, num3);
	producto(num1,num2, prod);    //num1*num2
	producto(prod,num3, prod);  //prod * num3
	cout<<"Producto de "<<num1<<"*"<<num2<<"*"<<num3<<" es: "<<prod<<endl;

}

void ingreso(int &a, int &b, int &c)
{
	do{
		cout<<"Ingrese primer valor: ";
		cin>>a;
		cout<<"Ingrese segundo valor: ";
		cin>>b;
		cout<<"Ingrese tercer valor: ";
		cin>>c;
	} while(a<0 || b<0 || c<0);
}
void producto(int a, int b, int &prod)
{
	 prod=0;
	do{
		if(b>0)
		{ prod=prod + a;
		b--;
		}
	} while(b>0);
	
}
