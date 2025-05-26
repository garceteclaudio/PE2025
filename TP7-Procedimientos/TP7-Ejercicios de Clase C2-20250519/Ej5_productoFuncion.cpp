#include <iostream>
using namespace std;

void ingreso(int &a, int &b, int &c);
int producto(int a, int b);
main()
{
	int num1, num2, num3, prod;
	ingreso(num1, num2, num3);
	// num1*num2*num3
	// prod=producto(num1,num2);    //num1*num2
	// prod=producto(prod,num3);  //prod * num3
	// cout<<"Producto de "<<num1<<"*"<<num2<<"*"<<num3<<" es: "<<prod<<endl;
	// cout<<"Producto de "<<num1<<"*"<<num2<<"*"<<num3<<" es: "<<producto(prod,num3)<<endl;
	cout << "Producto de " << num1 << "*" << num2 << "*" << num3 << " es: " << producto(producto(num1, num2), num3) << endl;
}

void ingreso(int &a, int &b, int &c)
{
	do
	{
		cout << "Ingrese primer valor: ";
		cin >> a;
		cout << "Ingrese segundo valor: ";
		cin >> b;
		cout << "Ingrese tercer valor: ";
		cin >> c;
	} while (a < 0 || b < 0 || c < 0);
}
int producto(int a, int b)
{
	int prod = 0;
	do
	{
		if (b > 0)
		{
			prod = prod + a;
			b--;
		}
	} while (b > 0);
	return prod;
}
