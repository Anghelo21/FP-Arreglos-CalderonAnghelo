#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main() {
    char arreglo[100];
    char digitos[100];
    int j=0;
    cout<<"Introduce un texto:";
    cin.getline(arreglo, 100);
    for(int i=0; i<strlen(arreglo); i++){
        if(isdigit(arreglo[i])){
            digitos[j]=arreglo[i];
            j=j+1;
        }
    }
    int n = atoi(digitos);
    n=n+2;
    cout<<"El numero resultante es: "<<n<<endl;
    return 0;
}

