#include <iostream>
#include "ciudad_clima.h"

using namespace std;

//constructor
Ciudad::Ciudad(){
    cout<<"\n\nIntroduce los datos solicitados. \n";
    cout<<"\n¿Ciudad? "; cin>>ciudad;
    cout<<"¿Superficie (en km2)? "; cin>>superficie;
    cout<<"¿Altitid (en m)? "; cin>>altitud;
}
//constructor 
Clima::Clima(){
    cout<<"¿Temperatura? (en °F) "; cin>>temperatura;
    cout<<"¿Probabilidad de lluvia? "; cin>>precipitacion;
    cout<<"¿porcentaje de humedad? "; cin>>humedad;
    cout<<"¿Velocidad del viento? "; cin>>viento;
}
//funcion miembro 
float Clima::fahrenheit_celsius(float F){
    return (5*(F-32))/9;
}
//funcion amiga
void reportar_clima(Ciudad cd,Clima cl){
    cout<<"\n*** REPORTE DEL CLIMA POR EL SNN***\n";
    cout<<"\nLa ciudad de "<<cd.ciudad<<" tiene una temperatura de "<<cl.fahrenheit_celsius(cl.temperatura)<<"° Celsius para el dia de hoy";
    cout<<"\nCon una probabilidad de lluvia del "<<cl.precipitacion<<"%";
    cout<<"\nUn porcentaje de humedad de "<<cl.humedad<<"%";
    cout<<"\nY una velociad del viento de "<<cl.viento<<"km/h";
    cl.viento=255;
    cd.altitud=1200;
}
//funcion principal
int main(){
    int continuar;float f=100.0; //variables locales
    do
    {
        cout<<"\n*** SISTEMA METEOROLÓGICO NACIONAL ***";
        Ciudad cd;
        Clima cl;
        reportar_clima(cd,cl);
        cout<<"\n\n¿Quieres otro reporte del clima? si=1 no=0 ";
        cin>>continuar;
    } while (continuar);
}