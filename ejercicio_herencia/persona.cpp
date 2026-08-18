#include <iostream>
#include "persona.h"

using namespace std;
#define NUM_CALIF 8

void Persona::Personas(){
    cout<<"\n ingrese el nombre: ";
    cin>>nombre;
    cout<<"\n ingrese la edad: ";
    cin>>edad;
    cout<<"\n ingrese el sexo 'M' o 'F' ";
    cin>>sexo;
}
void Estudiante::Estudiante(){
    for (int i = 1; i <= NUM_CALIF; i++)
    {
        cout<<"\n ingrese la calificacion #"<<i<<":";
        cin>>calif[i];
    }
}
Empleado::Empleado(){
    cout<<"\n ingrese la cantidad de horas trabajando:";
    cin>>horas;
    cout<<"\n ingrese la tarifa:";
    cin>>tarifa;
}

float Estudiante::calcularProm(){
    float res;
    cout<<"el promedio del estudiante es:";
    for (int i = 1; i <= NUM_CALIF; i++)
    {
        res=res+calif[i];
    }
    return res/NUM_CALIF;
}
float Empleado::calcularSueldo(){
    cout<<"\n el sueldo del trabajador es: ";
    return horas*tarifa;
}

void Persona::imprimirinfo(float){
    cout<<"Nombre: "<<nombre<<"\n edad: "<<edad<<"\n sexo: "<<sexo;
}

int main(){
    int opcion,continuar;
    Estudiante es;
    Empleado em;
    do
    {
        cout<<"que desea hacer:";
        cout<<"1. ingresar los datos del estudiante ";
        cout<<"2. calcular su promedio ";
        cout<<"3. mostrar los datos del estudiante "<<endl;
        cout<<"4. ingresar los datos del empleado ";
        cout<<"5. calcular el sueldo del empleado ";
        cout<<"6. mostrar los datos del empleado "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:{cout<<es.Estudiante();
            break;
            }
        case 2:es.calcularProm();
            break;
        case 3:es.imprimirinfo();
            es.calcularProm();
            break;
        case 4:{cout<<em.Empleado();
            break;
            }
        case 5:em.calcularSueldo();
            break;
        case 6:em.imprimirinfo();
            em.calcularSueldo();
            break;
        default: cout<<"Opcion invalida\n";
        }
        cout<<"\n para salir presione 0, para regresar al menu principal presione 1 "<<endl;
        cin>>continuar;
    } while (continuar);
    
}