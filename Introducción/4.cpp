#include <stdio.h>
#include <iostream>
using namespace std;

int factorial (int);
int main(){
	int n1;
	cout<<"Intoduzca el valor del numero: "<< endl;
	cin>>n1;
	int fact = factorial(n1);
	cout<<"El factoial es: "<<fact<<endl;
	
	return 1;
}
int factorial (int a){
	int i;
	int resultado = 1;
	for (i = 1; i <=a; i++){
		resultado *=i;
	}
	return resultado;
}
