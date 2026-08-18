#include <iostream>
#include "Software_HS.h"
//#include "Propietario.h"
//#include "Suceso_detectado.h"
//#include "Servicio_vigilancia.h"

using namespace std;
//constructores
Software_HS::Software_HS(){

}
Sensores::Sensores(){

}
Contrasena::Contrasena(){

}
Propietario::Propietario(){

}
Suceso_detectado::Suceso_detectado(){

}
Servicio_vigilancia::Servicio_vigilancia(){

}
//metodos
void Software_HS::instalar(){
    Sensores sn;
    Panel_control p_ctl;
    Contrasena pw;
    p_ctl.Configurar_HS();
}

void Sensores::conectar(){

}
void Sensores::detectar_suceso(){

}

void Panel_control::Configurar_HS(){
    cout<<"\n *** BIENVENIDO *** "<<endl;
    cout<<"\nIngrese los siguentes datos: ";
    cout<<"c"<<pw.tipo;
}
void Panel_control::leer_info(){

}
void Panel_control::mostrar_mensajes(){

}

void activar(){

}
void desactivar(){

}

void Propietario::interactuar(){

}

void Suceso_detectado::informar(){

}

void Servicio_vigilancia::marcar(){

}
int main(){
    int opcion;
    Software_HS sw;
    do
    {
        cout<<" : ";
        cin>>opcion;
        sw.instalar();
        sw.
    } while (opcion);
    
    return 0;
}