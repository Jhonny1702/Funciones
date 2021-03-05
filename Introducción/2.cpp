#include <stdio.h>
#include <iostream>
using namespace std;

void max (int,int);

int main (){
	int n1,n2;
	cout<< "Introduzca el valor de primer operando: "<< endl;
	cin>>n1;
	cout<< "Introduzca el valor de segundo operando: "<< endl;
	cin>>n2;
	max (n1,n2);
	return 1;
}
void max (int a, int b){
	if (a>b){
		cout<<"El mayor es: "<<a<<endl;
		}
		else if (a<b){
			cout<<"El mayor es: "<<b<<endl;
		}
		else 
		cout<<"Son iguales"<<endl;
	}

