#include <iostream>
using namespace std;

char* PrimeraLetra(char oracion[]){
	int n=0;
	while(oracion[n]!='\0'){
		n++;
	}
	oracion[0]=toupper(oracion[0]);
	for(int i=0; i<n; i++){
		if(oracion[i]==' '){
		oracion[i+1]=toupper(oracion[i+1]);
	    }
	}
	return oracion;
}

int main(){
	char arreglo[]="caceres patrimonio de la humanidad";
	cout<<PrimeraLetra(arreglo);
	return 0;
}
