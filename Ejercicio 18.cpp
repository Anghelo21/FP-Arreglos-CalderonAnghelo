#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char frase[100];
    int abierto=0;
    int cerrado=0;
    cout<<"Introduce una frase: ";
    cin.getline(frase, 100);
    for(int i=0; i<strlen(frase); i++){
        if(frase[i] == '('){
            abierto=abierto+1;
        } else if(frase[i] == ')'){
            cerrado=cerrado+1;
            if(cerrado>abierto){
                cout<<"No es correcto"<<endl;
                break;
            }
        }
    }
    if (abierto == cerrado){
        cout<<"Es correcto"<<endl;
    } 
    return 0;
}

