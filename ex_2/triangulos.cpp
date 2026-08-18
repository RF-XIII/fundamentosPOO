#include <iostream>
#include "Triangulos.h"

using namespace std;

Triangulos::Triangulos(){
    cout<<"de qué color es el triángulo?: ";
    cin>>color;
}

Rectangulo::Rectangulo(){
    c_a=0;
    c_o=0;
    hip=0.0;
}

Equilatero::Equilatero(){
    lado=0;
}

Isosceles::Isosceles(){
    lado=0;
    base=0;
}

float Rectangulo::perimetro(int ca,int co, int h){
    c_a=ca;
    c_o=co;
    hip=h;
    cout<<"\n el perimetro del triángulo rectangulo "<<color<<" es: ";
    return c_a+c_o+hip;
}

float Equilatero::perimetro(int la){
    lado=la;
    cout<<"\n el perimetro del triángulo equilatero "<<color<<" es: ";
    return lado*lado*lado;
}

float Isosceles::perimetro(int la,int bs){
    lado=la;
    base=bs;
    cout<<"\n el perimetro del triángulo isoceles "<<color<<" es: ";
    return 2*lado+base;
}

int main(){
    int opcion,salir;
    int la,ca,co,h,bs;
    do
    {
        cout<<" *** BIENVENIDO ***\n";
        cout<<"Selecione el  triángulo qué desea obtener su perimetro: \n";
        cout<<"1. Triángulo rectangulo "<<"2. Triángulo equilatero "<<"3. Triángulo isoceles \n";
        cin>>opcion;
        switch (opcion)
        {
        case 1:{
            Rectangulo rt;
            cout<<"ingrese el cateto opuesto: ";
            cin>>co;
            cout<<"ingrese el cateto adyacente: ";
            cin>>ca;
            cout<<"ingrese la hipotenusa: ";
            cin>>h;
            cout<<rt.perimetro(co,ca,h);
            break;
        }
        case 2:{
            Equilatero eq;
            cout<<"ingrese la medida de un lado";
            cin>>la;
            cout<<eq.perimetro(la);
            break;//
        }
        case 3:{
            Isosceles iso;
            cout<<"ingrese la medida de un lado: ";
            cin>>la;
            cout<<"ingrese la medida de la base: ";
            cin>>bs;
            cout<<iso.perimetro(la,bs);
        }
        default:
            cout<<"opcion no valida";
            break;
        }
        cout<<"desea salir? si=1 no=0 ";
        cin>>salir;
    } while (!salir);
    
}