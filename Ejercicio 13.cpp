#include <iostream>
using namespace std;

int main(){
	char str1[100];
	char str2[100]="Ejemplo del problema 13";
	int i=0;
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i=i+1;
	}
	cout<<"Str1 despues de copiar str2: "<<str1<<endl;
	return 0;
}
