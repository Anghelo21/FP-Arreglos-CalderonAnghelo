#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string arreglo[50], aux;
	int n;
	cout<<"Introduzca la cantidad de nombres que desea ordenar"<<endl;
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"El nombre "<<"("<<i+1<<")"<<" es: ";
		cin>>arreglo[i];
	}
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	cout<<endl<<"Los nombres ordenados alfabeticamente: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Nombre ("<<i+1<<") = "<<arreglo[i]<<endl;
	}
	return 0;
}
