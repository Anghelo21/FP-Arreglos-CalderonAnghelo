#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[100];
	cout<<"Introduzca su texto:"<<endl<<endl;
	gets(arreglo);
	cout<<endl<<"Su texto separado es:"<<endl<<endl;
	int n = strlen(arreglo);
	for(int i=0; i<n; i++){
		if (arreglo[i]==' '){
			cout<<endl;
		} else{
			cout<<arreglo[i];
		}
	}
	return 0;
}
