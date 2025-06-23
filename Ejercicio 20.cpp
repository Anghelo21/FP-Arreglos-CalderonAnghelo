#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    double ventas[12];
    cout<<"Ingrese las ventas mensuales del año 2020: "<<endl<<endl;
    for (int i=0; i<12; i++){
        cout<<"Venta de "<<meses[i]<<": ";
        cin>>ventas[i];
    }
    double sum=0;
    for (int i=0; i<12; i++){
        sum=sum+ventas[i];
    }
    double prom=sum/12;
    cout<<endl<<"Promedio de ventas del año 2020: "<<prom<<endl<<endl;
    int minimo=0, regular=0, excelente=0;
    cout<<endl<<"Nivel de porcentaje de ventas por mes:"<<endl<<endl;
    for (int i=0; i<12; i++){
        if(ventas[i]<0.4*prom){
            cout<<meses[i]<<": Minimo"<<endl;
            minimo=minimo+1;
        } else if(ventas[i]>=0.4*prom && ventas[i]<=0.75*prom){
            cout<<meses[i]<<": Regular"<<endl;
            regular=regular+1;
        } else{
            cout<<meses[i]<<": Excelente"<<endl;
            excelente=excelente+1;
        }
    }
    cout<<endl<<"Porcentaje de los meses del año que cumplieron con los niveles de ventas:"<<endl<<endl;
    cout<<"Mínimo: "<<(minimo/12.0)*100<<"%"<<endl;
    cout<<"Regular: "<<(regular/12.0)*100<<"%"<<endl;
    cout<<"Excelente: "<<(excelente/12.0)*100<<"%"<<endl;
    return 0;
}

