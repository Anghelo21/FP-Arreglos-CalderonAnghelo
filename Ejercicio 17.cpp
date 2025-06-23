#include <iostream>
#include <string.h>
using namespace std;

bool verificar(char nc[], char ape[]){
	int a=strlen(nc);
	int b=strlen(ape);
	for (int i=0; i<b; i++){
		if(nc[a-b+i] != ape[i]){
			return false;
		}
	}
	return true;
}

int main(){
	char nc[100];
    char ape[50];
    cout<<"Introduzca su nombre completo: ";
    cin.getline(nc, 100);
    cout<<"Introduzca sus apellido: ";
    cin.getline(ape, 50);
    if(verificar(nc, ape)){
        cout<<"El apellido pertenece al nombre completo."<<endl;
    } else{
        cout<<"El apellido no pertenece al nombre completo."<<endl;
    }
	return 0;
} 
