#include <iostream>
using namespace std;

int main(){
	int n, positivos=0, negativos=0;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
	}
	for (int i=0; i<n; i++){
		if (arreglo[i]>0){
			positivos=positivos+arreglo[i];
		}else if (arreglo[i]<0){
			negativos=negativos+arreglo[i];
		}
	}
	cout<<"La suma de los elementos positivos es: "<<positivos<<endl;
	cout<<"La suma de los elementos negativos es: "<<negativos<<endl;
	return 0;
}
