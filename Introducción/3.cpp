#include <stdio.h>
#include <iostream>
using namespace std;

int max (int,int);

int main (){
	int n1,n2,n3;
	cout<< "Introduzca el valor de primer operando: "<< endl;
	cin>>n1;
	cout<< "Introduzca el valor de segundo operando: "<< endl;
	cin>>n2;
	cout<< "Introduzca el valor de tercer operando: "<< endl;
	cin>>n3;
	int max1= max (n1,n2);
	int max2= max(max1,n3);
/*	cout<<"El numero mayor es: "<< max <<endl;*/ 
	return 1;	
}
int max(int a,int b){
	int c;
	if (a>b){ c = a;}
	else { c = b;}
	return c;
}
