#include <iostream>
using namespace std;

int mistrcmp(char str1[], char str2[]){
    int i=0, comp;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]<str2[i]){
        	comp=-1;
            break;
        }else if(str1[i]>str2[i]){
        	comp=1;
            break;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
    	comp=0;
    }
    return comp;
}

int main() {
    char str1[100]="Ejemplo del ejercicio";
    char str2[100]="Ejemplo del ejercicio 15";
    int comp=mistrcmp(str1, str2);
    if(comp == 0){
        cout<<"Los arreglos son iguales"<<endl;
    } else if(comp == 1){
        cout<<"El arreglo str1 es mayor que str2"<<endl;
    } else{
        cout<<"El arreglo str2 es mayor que str1"<<endl;
    }
    return 0;
}

