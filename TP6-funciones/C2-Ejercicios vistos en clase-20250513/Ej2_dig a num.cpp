//'6' -> 6
#include <iostream>
using namespace std;

int DIGITO(char a);
int digito_2(char a);
main()
{
	char dig,a;
	int num;
	
	do{
		cout<<"Ingrese valor: ";
		cin>>dig;
	}while(dig<'0' || dig>'9');//(!(dig>='0' && dig<='9'));
	
	num=digito_2(dig);
	cout<<dig<<" su valor entero corresp es "<<num;
	cout<<"\ningrese letra: ";
	cin>>a;
	a=a+32;
	cout<<"mayuscula: "<<a<<endl;
	
}
int DIGITO(char a)
{
	int n;
	switch(a)
	{
		case '0': n=0; break;
		case '1': n=1; break;
		case '2': n=2; break;
		case '3': n=3; break;
		case '4': n=4; break;
		case '5': n=5; break;
		case '6': n=6; break;
		case '7': n=7; break;
		case '8': n=8; break;
		case '9': n=9; break;
	}
	return n;
}

int digito_2(char a)
{
	return (a-48);
}
/*
  dígito a numérico
  char        int
  '0'=48 - 48=0
  '1'=49 - 48=1
	....
  '9'=57 - 48=9
	int        char
	0 + 48 =48='0'
 
	char            char
	'a'=97 - 32=65->'A'
*/
