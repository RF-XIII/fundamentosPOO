/*Los productos bancarios que maneja cualquier banco son 3: 
tarjeta de débito, cheques y tarjeta de crédito. Considera 
todas las características de dichos productos así como las 
acciones que se pueden realizar con éstos, que básicamente 
son realizar un abono y/o un cargo según corresponda al 
producto en cuestión.*/
#include <iostream>
#include "producto.h"

using namespace std;

Producto::Producto(){
    cout<<"\n Nombre del cliente: ";
    cin>>usuario;
    cout<<"\n Numero De cuenta: ";
    cin>>cuenta;
}
tarjeta_debito::tarjeta_debito(){
    dinero_disponible=0;
}
tarjeta_credito::tarjeta_credito(){
    credito_disponible=0;
}
cheques::cheques(){
    importe=0;
    numero=0;
}

void tarjeta_debito::realizar_abono(){
    int abono;
    cout<<"\n De que banco es la tarjeta?: ";
    cin>>banco;
    cout<<"\n numero de la tarjeta: ";
    cin>>num_tarjeta;
    cout<<"\n fecha de vencimiento mes/año: ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese el pin: ";
    cin>>pin;
    cout<<"ingrese el numero de seguridad: ";
    cin>>numero_seguridad;
    if (pin==pin){
        cout<<" \n BIENVENIDO "<<usuario;
        cout<<"\n Cuanto desea depositar a su cuenta?"; 
        cin>>abono;
        cout<<"\n depositando "<<abono<<" a la cuenta "<<cuenta<<" del usuario "<<usuario;
        dinero_disponible=dinero_disponible+abono;
        cout<<"\n deposito exitoso!\n";
    }
    else
    {
        cout<<"\n pin incorrecto\n ";
    }
    
}
void tarjeta_debito::realizar_cargo(){
    int cargo;
    cout<<"\n De que banco es la tarjeta?: ";
    cin>>banco;
    cout<<"\n numero de la tarjeta: ";
    cin>>num_tarjeta;
    cout<<"\n fecha de vencimiento mes/año: ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese el pin: ";
    cin>>pin;
    cout<<"\n ingrese el numero de seguridad: ";
    cin>>numero_seguridad;
    if (pin==pin){
        cout<<" \n BIENVENIDO "<<usuario;
        cout<<"\n de cuanto es su cargo?"; 
        cin>>cargo;
        dinero_disponible=dinero_disponible-cargo;
        cout<<"\n el cargo de "<<cargo<<" a la tarjeta "<<num_tarjeta<<" del usuario "<<usuario;
        cout<<" esta siendo procesado ";
        cout<<"\n cargo exitoso!\n";
    }
    else
    {
        cout<<"\n pin incorrecto\n ";
    }
    
}

void tarjeta_credito::realizar_abono(){
    int abono;
    cout<<"\n De que banco es la tarjeta?: ";
    cin>>banco;
    cout<<"\n numero de la tarjeta: ";
    cin>>num_tarjeta;
    cout<<"\n fecha de vencimiento mes/año: ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese el pin: ";
    cin>>pin;
    cout<<"ingrese el numero de seguridad: ";
    cin>>numero_seguridad;
    if (pin==pin){
        cout<<" \n BIENVENIDO "<<usuario;
        cout<<"\n Cuanto desea depositar a su cuenta?"; 
        cin>>abono;
        cout<<"\n depositando "<<abono<<" a la cuenta "<<cuenta<<" del usuario "<<usuario;
        credito_disponible=credito_disponible+abono;
        cout<<"\n deposito exitoso!\n";
    }
    else
    {
        cout<<"\n pin incorrecto\n ";
    }
}
void tarjeta_credito::realizar_cargo(){
    int cargo;
    cout<<"\n De que banco es la tarjeta?: ";
    cin>>banco;
    cout<<"\n numero de la tarjeta: ";
    cin>>num_tarjeta;
    cout<<"\n fecha de vencimiento mes/año: ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese el pin: ";
    cin>>pin;
    cout<<"\n ingrese el numero de seguridad: ";
    cin>>numero_seguridad;
    if (pin==pin){
        cout<<" \n BIENVENIDO "<<usuario;
        cout<<"\n de cuanto es su cargo?"; 
        cin>>cargo;
        credito_disponible=credito_disponible-cargo;
        cout<<"\n el cargo de "<<cargo<<" a la tarjeta "<<num_tarjeta<<" del usuario "<<usuario;
        cout<<" esta siendo procesado ";
        cout<<"\n cargo exitoso!\n";
    }
    else
    {
        cout<<"\n pin incorrecto\n ";
    }
    
}
void cheques::realizar_abono(){
    cout<<"\n De que banco es el cheque?: ";
    cin>>banco;
    cout<<"\n ingrese la fecha de vencimiento ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese la cuenta";
    cin>>cuenta;
    cout<<"\n ingrese el nombre del beneficiario: ";
    cin>>beneficiario;
    cout<<"\n Que tipo de cheque desea? ";
    cin>>tipo;
    numero++;
    cout<<"ingrese el importe del cheque";
    cin>>importe;
    cout<<"creando el cheque "<<tipo<<" con importe: "<<importe<<" con beneficiario: "<<beneficiario;
    cout<<"Su cheque esta listo";
}
void cheques::realizar_cargo(){
    cout<<"\n De que banco es el cheque?: ";
    cin>>banco;
    cout<<"\n ingrese la fecha de vencimiento ";
    cin>>fecha_vencimiento;
    cout<<"\n ingrese la cuenta";
    cin>>cuenta;
    cout<<"\n ingrese el nombre del beneficiario: ";
    cin>>beneficiario;
    cout<<"\n tipo de cheque? ";
    cin>>tipo;
    cout<<"el pago "<<importe<<" con el cheque "<<tipo<<" con importe: "<<importe<<" al beneficiario: "<<beneficiario<<" se esta procesando";
    cout<<"\n cargo realizado con exito.";
}
int main(){
    int salir,opcion1,opcion2;
    do
    {
        cout<<"\n **** BIENVENIDO **** \n Selecione que tipo de producto va a usar : ";
        cout<<"\n 1. tarjeta de debito \n";
        cout<<"\n 2. tarjeta de credito \n";
        cout<<"\n 3. cheques \n";
        cout<<"\n SELECCIONA UNA OPCION: ";
        cin>>opcion1;
        switch (opcion1)
        {
        case 1:{
            cout<<"\n que operacion desea realizar con su tarjeta de debito: ";
            cout<<"\n 1. realizar abono";
            cout<<"\n 2. realizar cargo\n ";
            cin>>opcion2;
            tarjeta_debito td;
            if(opcion2==1)
                td.realizar_abono();
            else{
                td.realizar_cargo();
            }
            break;
        }
        case 2:{
            cout<<"\n que operacion desea realizar con su tarjeta de credito: ";
            cout<<"\n 1. realizar abono ";
            cout<<"\n 2. realizar cargo\n ";
            cin>>opcion2;
            tarjeta_credito tc;
            if(opcion2==1)
                tc.realizar_abono();
            else{
                tc.realizar_cargo();
            }
            break;
        }
        case 3:{
            cout<<"\n que operacion desea realizar con su tarjeta de credito: ";
            cout<<"\n 1. realizar abono ";
            cout<<"\n 2. realizar cargo\n ";
            cin>>opcion2;
            cheques ch;
            if(opcion2==1)
                ch.realizar_abono();
            else{
                ch.realizar_cargo();
            }
            break;
        }
        default:{
            cout<<"opcion no valida";
            break;
        }
        }
        cout<<"desea salir? si=1 no=0 ";
        cin>>salir;
    } while (!salir);
    
}