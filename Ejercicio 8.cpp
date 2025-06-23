#include <iostream>
using namespace std;

int main(){
	bool capicua;
	int aux;
	long n;
	int cifras[10];
	cout<<"Ingrese el numero de 10 cifras"<<endl;
	cin>>n;
	if (n<1000000000 || n>9999999999){
        cout << "El numero debe tener 10 cifras" << endl;
    }
    for (int i=9; i>=0; i--){
    	cifras[i]=n%10;
    	n=n/10;
	}
	for (int i=0; i<5; i++){
		if (cifras[i]==cifras[9-i]){
			capicua=true;
		} else{
			capicua=false;
		}
	}
	cout<<"El numero: ";
	for (int i=0; i<10; i++){
        cout<<cifras[i];
    }
    if (capicua==true){
    	cout<<" es capicua"<<endl;
	} else{
		cout<<" no es capicua"<<endl;
	}
	return 0;
}
