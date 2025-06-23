#include <iostream>
#include <string.h>
using namespace std;

int main(){
	bool palindromo=true;
    char frase[200];
    char limpiar[200];
    int j=0;
    cout<<"Introduzca una frase: ";
    cin.getline(frase, 200);
    for(int i=0; i<strlen(frase); i++){
        if((frase[i]>='a' && frase[i]<='z') || (frase[i]>='A' && frase[i]<='Z')){
            if(frase[i]>='A' && frase[i]<='Z'){
                limpiar[j]=frase[i] + 32;
            } else{
                limpiar[j]= frase[i];
            }
            j++;
        }
    }
    limpiar[j]='\0';
    int n=strlen(limpiar);
    for (int i=0; i<n/2; i++) {
        if (limpiar[i]!=limpiar[n-i-1]){
            palindromo=false;
            break;
        }
    }
    if(palindromo){
        cout<<"La frase es un palindromo"<<endl;
    } else{
        cout<<"La frase no es un palindromo"<<endl;
    }
    return 0;
}

