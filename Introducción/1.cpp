#include <stdio.h>
#include <iostream>
using namespace std;

void suma(int,int);

int main(){
	int n1,n2;
	cout <<"Introduzca el valor de primer operando: "<<endl;
		cin>>n1;
	cout <<"Introduzca el valor de segundo operando: "<<endl;
		cin>>n2;
		suma(n1,n2);
		return 1;	
}
void suma(int a,int b){
	int c = a + b;
	cout<<" El resultado de la suma es : \n" << c << endl;
}
