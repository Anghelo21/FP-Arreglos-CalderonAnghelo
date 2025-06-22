#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[100];
	cout<<"Introduzca un texto:"<<endl<<endl;
	gets(arreglo);
	int n = strlen(arreglo);
	int s=0;
	char letra;
	cout<<endl<<"Que letra de su texto desea contar?"<<endl;
	cin>>letra;
	for(int i=0; i<n; i++){
		if(arreglo[i]==letra){
			s=s+1;
		}
	}
	cout<<"En su oracion hay: "<<s<<" letras '"<<letra<<"'"<<endl;
	return 0;
}
