#include <iostream>
#include <string.h>
#include "Empresa.h"
#include "Personas.h"
#define MAX 2

using namespace std;

Empresa::Empresa(){
    cout<<"\n Nombre de la empresa?: ";
    cin>>nombre;
    cout<<"\n Domicilio de la empresa? ";
    cin>>domicilio;
}

void Empresa::desplegar_info(){
    cout<<"\n Empresa: ";
    cout<<nombre;
    cout<<"\n Domicilio: ";
    cout<<domicilio;
}

Personas::Personas(){
    cout<<"\n Nombre de la persona? ";
    cin>>nombre;
    cout<<"\n Domicilio? ";
    cin>>domicilio;
    cout<<"\n edad? ";
    cin>>edad;
    cout<<"\n Sexo? ";
    cin>>sexo;
}

Empleados::Empleados(){
    cout<<"\n horas trabajadas a la semana? ";
    cin>>h_trabajadas;
    tarifa=100;
}

void Empleados::desplegar_info(){
    cout<<"\n\n Nombre del empleado: "<<nombre;
    cout<<"\n Domicilio: "<<domicilio;
    cout<<"\n Edad: "<<edad;
    cout<<"\n Sexo"<<sexo;
    cout<<"\n Horas laborales a la semana: "<<h_trabajadas;
    cout<<calcular_nomina();
}
float Empleados::calcular_nomina(){
    cout<<"\n Tu nomina mensual es: ";
    return h_trabajadas*tarifa*4;
}

Directivo::Directivo(){
    cout<<"\n Categoria? ";
    cin>>categoria;
    bono_especial=10000;
}

void Directivo::desplegar_info(){
    cout<<"\n\n Nombre del directivo: "<<nombre;
    cout<<"\n Domicilio: "<<domicilio;
    cout<<"\n Edad: "<<edad;
    cout<<"\n Sexo: "<<sexo;
    cout<<"\n Horas laboradas a la semana: "<<h_trabajadas;
    cout<<"\n Categoria: "<<categoria;
    cout<<calcular_nomina();
}
float Directivo::calcular_nomina(){
    if(strcmp(categoria,"director")==0){
        cout<<"\n Tu nomina mensual es: ";
        return h_trabajadas*tarifa*4+bono_especial*2;
    }
    if(strcmp(categoria,"subdirector")==0){
        cout<<"\n Tu nomina mensual es: ";
        return h_trabajadas*tarifa*4+bono_especial;
    }
}

Clientes::Clientes(){
    cout<<"\n Razon social? ";
    cin>>razon_social;
    cout<<"\n Telefono?: ";
    cin>>telefono;
}

void Clientes::desplegar_info(){
    cout<<"\n\n Nombre del cliente:  "<<nombre;
    cout<<"\n Domicilio: "<<domicilio;
    cout<<"\n Edad: "<<edad;
    cout<<"\n Sexo: "<<sexo;
    cout<<"\n Razon social: "<<razon_social;
    cout<<"\n Telefono: "<<telefono;
}

int main(){
    int opcion,dir,salir;
    do
    {
        cout<<"\n El PROGRAMA CALCULA LA NOMINA DE LOS EMPLEADOS Y MUESTRA LA CARTERA DE CLIENTES ";
        cout<<"\n *** MENU DE OPCIONES DE LA EMPRESA *** \n";
        cout<<"\n 1. EMPLEADOS ";
        cout<<"\n 2. CLIENTES ";
        cout<<"\n 3. SALIR";
        cout<<"\n Digita la opcion deseada: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:{
            cout<<"\n El empleado es directivo? si=1 no=0 ";
            cin>>dir;
            if (dir==0)
            {
                Empresa t;
                Empleados e;
                cout<<"\n\n *** INFORMACION DEL EMPLEADO *** \n";
                t.desplegar_info();
                e.desplegar_info();
            }
            else
            {
                Empresa t;
                Directivo d;
                cout<<"\n\n *** INFORMACION DEL Directivo *** \n";
                t.desplegar_info();
                d.desplegar_info();
            }
        break;
        }
        case 2:{
            Empresa t;
            Clientes c[MAX];
            cout<<"\n\n *** CARTERA DE CLIENTES *** \n";
            t.desplegar_info();
            for (int i = 0; i < MAX; i++)
            {
                c[i].desplegar_info();
            }
            break;
        }
        case 3:{
            cout<<"\n Hasta luego...";
            break;
        }
        default:{
            cout<<"\n Opcion invalida...";
            break;
        }}
        cout<<"\n\n Esta seguro que desea salir del programa? si=1 no=0 ";
        cin>>salir;
    } while (!salir);
}
