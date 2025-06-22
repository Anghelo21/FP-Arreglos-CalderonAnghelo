#include <iostream>
using namespace std;

int main(){
	int n, mayor=0, repma=0, repme=0;
	cout<<"Cuantos numeros va a ingresar?:"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
		if (arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	}
	int menor=mayor+1;
	for (int i=0; i<n; i++){
		if (arreglo[i]<menor){
			menor=arreglo[i];
		}
	}
	for (int i=0; i<n; i++){
		if (arreglo[i] == mayor){
			repma=repma+1;
		} else if (arreglo[i] == menor){
			repme=repme+1;
		}
	}
	cout<<"El menor es: "<<menor<<endl;
	cout<<"El mayor es: "<<mayor<<endl;
	if (repma!=1){
		cout<<"El mayor aparece "<<repma<<" veces"<<endl;
	} else{
		cout<<"El mayor aparece "<<repma<<" vez"<<endl;
	}
	if (repme!=1){
		cout<<"El menor aparece "<<repme<<" veces"<<endl;
	} else{
		cout<<"El menor aparece "<<repme<<" vez"<<endl;
	}
	return 0;
}
