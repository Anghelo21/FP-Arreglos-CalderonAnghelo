#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[]="Este es la resolucion del ejercicio tres y se va a contar cuantas vocales hay";
	int n = strlen(arreglo);
	int as, es, is, os, us;
	cout<<arreglo<<endl;
	for(int i=0; i<n; i++){
		if(arreglo[i]=='a'){
			as++;
		} else if(arreglo[i]=='e'){
			es++;
		} else if(arreglo[i]=='i'){
			is++;
		} else if(arreglo[i]=='o'){
			os++;
		} else if(arreglo[i]=='u'){
			us++;
		}
	}
	cout<<"En su oracion hay: "<<as<<" letras (a)"<<endl;
	cout<<"En su oracion hay: "<<es<<" letras (e)"<<endl;
	cout<<"En su oracion hay: "<<is<<" letras (i)"<<endl;
	cout<<"En su oracion hay: "<<os<<" letras (o)"<<endl;
	cout<<"En su oracion hay: "<<us<<" letras (u)"<<endl;
	return 0;
}
