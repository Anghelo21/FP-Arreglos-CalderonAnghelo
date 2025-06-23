#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double media(int arreglo[], int n){
	double sum=0, prom;
	for (int i=0; i<n; i++){
		sum=sum+arreglo[i];
	}
	prom=sum/30;
	return prom;
}

double mediana(int arreglo[], int n){
	int aux;
	double med;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	med=(arreglo[14]+arreglo[15])/2.0;
	return med;
}

void moda(int arreglo[], int n){
	int repe=0;
    int mod=-1;
    int frecuencia[1001]={0};
    for (int i=0; i<n; i++){
        frecuencia[arreglo[i]]++;
    }
    for (int i=100; i<=1000; i++){
        if (frecuencia[i]>repe) {
            repe=frecuencia[i];
            mod=i;
        }
    }
    if (repe == 1){
        cout<<"No hay moda"<<endl;
    } else{
    	cout<<"La moda es: "<<mod<<endl;
	}
}

int main(){
	int n=30;
	int arreglo[n];
	srand(time(0));
	cout<<"Los numeros del arreglo son"<<endl;
	for (int i=0; i<n; i++){
		arreglo[i] = rand() % 901 + 100;
		cout<<"Numero ("<<i+1<<"): "<<arreglo[i]<<endl;
	}
	cout<<"La media es: "<<media(arreglo, n)<<endl;
    cout<<"La mediana es: "<<mediana(arreglo, n)<<endl;
    moda(arreglo, n);
	return 0;
}
