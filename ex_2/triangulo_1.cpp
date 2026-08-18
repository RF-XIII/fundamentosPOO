#include <iostream>
#include "Triangulo_rectangulo.h"
#include <math.h>
using namespace std;

Triangulo_rectangulo::Triangulo_rectangulo(){
    cateto_adyacente=0;
    cateto_opuesto=0;
    hipotenusa=0.0;
}

float Triangulo_rectangulo::teorema_Pitagoras(int co,int ca,float h){
    cout<<"\n calculando la hipotenusa con el teorema de pitágoras \n";
    cout<<"La hipotenusa del triangulo mide: ";
    hipotenusa=sqrt(pow(ca,2)+pow(co,2));
    return hipotenusa;
}

int main(){
    int salir,opcion,c_a,c_o;
    cout<<"\n **** BIENVENIDO **** \n";
    cout<<"ingrese el cateto adyacente: ";
    cin>>c_a;
    cout<<"ingrese el cateto opuesto: ";
    cin>>c_o;
    Triangulo_rectangulo tr;
    cout<<tr.teorema_Pitagoras(c_o,c_a,0.0);
}