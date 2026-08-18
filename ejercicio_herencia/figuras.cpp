#include <iostream>
#include "figuras.h"

using namespace std;

#define PI 3.14159
#define CUADRADO(x) (x*x)

Figuras::Figuras(){
    cout<<"de que color es la figura? ";
    cin>>color;
}
Triangulo::Triangulo(){
    base=0;
    altura=0;
}
Circulo::Circulo(){
    radio=0;
}
Rectangulo::Rectangulo(){
    base=0;
    altura=0;
}
Cuadrado::Cuadrado(){
    lado=0;
}

float Triangulo::area(){
    cout<<"\n Base: ";
    cin>>base;
    cout<<"\n Altura ";
    cin>>altura;
    cout<<"\n Area del triangulo: "<<color<<"es: ";
    return base*altura/2;
}
float Circulo::area(){
    cout<<"\n Radio: ";
    cin>>radio;
    cout<<"\n Area del circulo"<<color<<"es: ";
    return PI*CUADRADO(radio);
}
float Rectangulo::area(){
    cout<<"\n Base: ";
    cin>>base;
    cout<<"\n Altura: ";
    cin>>altura;
    cout<<"\n Area del rectanguo "<<color<<" es: ";
    return base*altura;
}
float Cuadrado::area(){
    cout<<"\n lado: ";
    cin>>lado;
    cout<<"\n area del cuadrado "<<color<<" es: ";
    return CUADRADO(lado);
}

int main(){
    int salir,opcion;
    do
    {
        cout<<"\n **** PROGRAMA QUE CALCULA EL AREA DE FIGURAS GEOMETRICAS ***\n";
        cout<<"\n 1. TRIANGULO \n";
        cout<<"\n 2. CIRCULO \n";
        cout<<"\n 3. RECTANGULO \n";
        cout<<"\n 4. CUADRADO \n\n";
        cout<<"\n SELECCIONA UNA OPCION: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:{
            Triangulo t;
            cout<<t.area();
            break;
        }
        case 2:{
            Circulo c;
            cout<<c.area();
            break;
        }
        case 3:{
            Rectangulo r;
            cout<<r.area();
            break;
        }
        case 4:{
            Cuadrado cu;
            cout<<cu.area();
            break;
        }}
    cout<<"\n\n Quieres salir del programa? si=1 no=0 ";
    cin>>salir;
    } while (!salir);
    
}