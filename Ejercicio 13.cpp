#include <iostream>
using namespace std;

void mistrcpy(char str1[], char str2[]){
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main(){
	char str1[100];
	char str2[100]="Ejemplo del problema 13";
	mistrcpy(str1, str2);
	cout<<"Str1 despues de copiar str2: "<<str1<<endl;
	return 0;
}
