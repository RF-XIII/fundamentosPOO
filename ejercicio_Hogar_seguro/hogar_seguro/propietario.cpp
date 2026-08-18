#include <iostream>
#include "propietario.h"

using namespace std;

void propietario::interactuar()
{
    cout<<"ingrese los siguentes datos: "<<endl;
    cout<<"nombre: ";
    cin>>nombre;
    cout<<"\n apellido paterno: ";
    cin>>ap_paterno;
    cout<<"\n apellido materno: ";
    cin>>ap_materno;
    cout<<"\n calle: ";
    cin>>calle;
    cout<<"\n numero exterior: ";
    cin>>num_ext;
    cout<<"\n numero interior: ";
    cin>>num_int;
    cout<<"\n colonia: ";
    cin>>colonia;
    cout<<"\n codigo postal: ";
    cin>>cp;
    cout<<"\n alcaldia: ";
    cin>>alcaldia;
    cout<<"\n correo electronico: ";
    cin>>correo_e;
    cout<<"\n telefono: ";
    cin>>telefono;
    cout<<"\n numero de celular: ";
    cin>>celular;
    cout<<"\n tipo de sangre: ";
    cin>>tipo_sangre;
    cout<<"\n alergias: ";
    cin>>alergias;
    cout<<"\n discapacidad: ";
    cin>>discapacidad;
    cout<<"\n comorbilidades: ";
    cin>>comorbilidades;
}

int main(){
    propietario user;
    user.interactuar();
    return 0;
}