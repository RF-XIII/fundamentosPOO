#include <iostream>
#include "contrasena.h"


using namespace std;

void contrasena::cambiar_contrasena(){    
    do
    {
        cout<<"ingrese la contraseña: ";
        cin>>clave;
    } while (num_intentos >= 3);
}
void contrasena::activar_sistema()
{
    cout<<"Activando sistema..."<<endl;
}
void contrasena::desactivar_sistema()
{
    cout<<"desactivando sistema.."<<endl;
}

void contrasena::bloquear_sistema()
{
    cout<<"sistema bloqueado"<<endl;
}

void contrasena::verificar_contrasena()
{
    /*if (cont != clave)
    {
        cout<<"contraseña erronea";
        num_intentos=num_intentos + 1;
    }*/
    std::cout << "contraseña verificada" << std::endl;
}

int main(){
    int opcion;
    contrasena con;
    do
    {
        cout<<"ingese una opcion: 0.salir, 1. cambiar contraseña, 2. activar sistema, 3. desactivar sistema, 4. bloquear sistema. "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:con.cambiar_contrasena();
            break;
        case 2:con.activar_sistema();
            break;
        case 3:con.desactivar_sistema();
            break;
        case 4:con.bloquear_sistema();
            break;
        }
    } while (opcion != 0);
    
}
