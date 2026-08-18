#include <iostream>
#include "ciudad_clima copy.h"

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
    //cd.altitud=1321;
    return (5*(F-32))/9;
}
//funcion amiga
void Clima::reportar_clima(Ciudad cd){
    cout<<"\n*** REPORTE DEL CLIMA POR EL SNN***\n";
    cout<<"\nLa ciudad de "<<cd.ciudad<<" tiene una temperatura de "<<fahrenheit_celsius(temperatura)<<"° Celsius para el dia de hoy";
    cout<<"\nCon una probabilidad de lluvia del "<<precipitacion<<"%";
    cout<<"\nUn porcentaje de humedad de "<<humedad<<"%";
    cout<<"\nY una velociad del viento de "<<viento<<"km/h";
    viento=255;
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
        cl.reportar_clima(cd);
        cout<<"\n\n¿Quieres otro reporte del clima? si=1 no=0 ";
        cin>>continuar;
    } while (continuar);
}



