#include <iostream>
using namespace std;

bool ordenado(int arreglo[], int n){
	for (int i=0; i<n-1; i++){
        if (arreglo[i]>arreglo[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Introduzca los numeros: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el numero ("<<i+1<<"): ";
		cin>>arreglo[i];
	}
	if (ordenado(arreglo, n)){
        cout<<"El arreglo esta ordenado"<<endl;
    } else{
        cout<<"El arreglo no esta ordenado"<<endl;
    }
	return 0;
}
