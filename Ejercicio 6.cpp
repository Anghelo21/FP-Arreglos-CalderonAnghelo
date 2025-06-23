#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n, par=0, impar=0;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
		if (i %2 == 0){
			impar=impar+arreglo[i];
		} else{
			par=par+arreglo[i];
		}
	}
	cout<<"La suma de los indices pares es: "<<par<<endl;
	cout<<"La suma de los indices impares es: "<<impar<<endl;
	return 0;
}
