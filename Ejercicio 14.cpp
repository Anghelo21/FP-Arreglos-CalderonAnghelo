#include <iostream>
using namespace std;

void mistrcat(char str1[], char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=0;
    while(str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}

int main(){
    char str1[100]="Este es ";
    char str2[100]="el ejercicio 14";
    mistrcat(str1, str2);
    cout<<"Los arreglos unidos: "<<str1<<endl;
    return 0;
}
