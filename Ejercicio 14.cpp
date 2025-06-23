#include <iostream>
using namespace std;

int main(){
    char str1[100]="Este es ";
    char str2[100]="el ejercicio 14";
    int i=0;
    while(str1[i]!='\0'){
        i=i+1;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i=i+1;
        j=j+1;
    }
    str1[i]='\0';
    cout<<"Los arreglos unidos: "<<str1<<endl;
    return 0;
}
