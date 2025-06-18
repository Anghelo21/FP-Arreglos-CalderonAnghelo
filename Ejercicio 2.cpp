#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[]="Este es la resolucion del ejercicio dos";
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
