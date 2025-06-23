#include <iostream>
using namespace std;

int main(){
	int n, aux;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
	}
	for (int i=0; i<n/2; i++){
		aux=arreglo[i];
		arreglo[i]=arreglo[n-(i+1)];
		arreglo[n-(i+1)]=aux;
	}
	cout<<"ARREGLO INVERTIDO"<<endl;
	for (int i=0; i<n; i++){
		cout<<"numero ("<<i+1<<"): "<<arreglo[i]<<endl;
	}
	return 0;
}
