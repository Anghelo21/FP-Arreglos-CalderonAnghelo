#include <iostream>
using namespace std;

int main(){
	int n, aux, ultimo;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
	}
	ultimo=arreglo[n-1];
	for(int i=n-1; i>0; i--){
		arreglo[i]=arreglo[i-1];
	}
	arreglo[0]=ultimo;
	cout<<"ARREGLO ROTADO UNA POSICION A LA DERECHA"<<endl;
	for(int i=0; i<n; i++){
		cout<<"("<<i+1<<"): "<<arreglo[i]<<endl;
	}
	return 0;
}
