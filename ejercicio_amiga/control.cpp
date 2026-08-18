#include <iostream>
#include "control_escolar.h"

using namespace std;
#define NUM_MAT 3
//constructores 
Alumno::Alumno(){
    alumno;
    //edad=0;
    //promedio=0.0;
}

Materia::Materia(){
    materia;
    semestre;
    //calif=0;
    /*
    cout<<"\n Ingrese el nombre de la materia: "; cin>>materia;
    cout<<"\n Ingrese el semestre de la materia: "; cin>>semestre;
    cout<<"\n Ingrese la calificacion de la materia "<<materia<<": "; cin>>calif;
    */
}

Profesor::Profesor(){
    profesor;
    //cout<<"\n Ingrese el nombre del profesor "; cin>>profesor;
}

void Alumno::solicitar_alumno(){
    cout<<"\n Ingrese el nombre del alumno: "; cin>>alumno;
    cout<<"\n Ingrese la edad del alumno "<<alumno<<": "; cin>>edad;
}
void Alumno::imprimir_alumno(){
    cout<<"\n Alumno: "<<alumno;
    cout<<"\n Edad: "<<edad;
    cout<<"\n Promedio: "<<promedio;
}

void Alumno::solicitar_kardex(Profesor pr[],Materia ma[]){
    //int num_mat;
    cout<<"\ningrese los datos de la materia del alumno "<<alumno<<": ";
    //cout<<"\n Ingrese el numero de materias del alumno ";
    //cin>>num_mat;
    //Materia ma[num_mat];
    for (int i = 1; i <= NUM_MAT; i++)
    {
        cout<<"\n ingrese el nombre de la materia: ";
        cin>>ma[i].materia;
        cout<<"\n ingrese el nombre del profesor: ";
        cin>>pr[i].profesor;
        cout<<"\n ingrese el semestre de la materia: ";
        cin>>ma[i].semestre;
        cout<<"\n ingrese la calificacion de la materia: ";
        cin>>ma[i].calif;
    }
    
}

void Alumno::imprimir_kardex(Profesor pr[],Materia ma[]){
    int suma = 0;
    cout<<"\n Alumno: "<<alumno;
    cout<<"\n Edad: "<<edad;
    for (int i = 1; i <= NUM_MAT; i++)
    {
        suma = suma + ma[i].calif;
    }
    promedio=suma/NUM_MAT;
    for (int j = 1; j <= NUM_MAT; j++)
    {
        cout<<"\n Materia: "<<ma[j].materia<<" semestre: "<<ma[j].semestre<<" Profesor: "<<pr[j].profesor<<" calificacion: "<<ma[j].calif;
    }
    cout<<"\n promedio: "<<promedio;
    cout<<"\n";
}

int main(){
    int continuar,opcion;
    do
    {
        Alumno al;
        Materia ma[NUM_MAT];
        Profesor pr[NUM_MAT];
        cout<<"**** BIENVENIDO *** \n";
        cout<<"\n Ingrese una opcion ";
        cout<<"\n 0.- Salir ";
        cout<<"\n 1.- Ingresar los datos del alumno ";
        cout<<"\n 2.- Mostrar los datos del alumno ";
        cout<<"\n 3.- Ingresar los datos academicos del alumno ";
        cout<<"\n 4.- Mostrar los datos academicos del alumno "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 0:
            cout<<"Adios ";
            break;
        case 1:
            al.solicitar_alumno();
            break;
        case 2:
            al.imprimir_alumno();
            break;
        case 3:
            al.solicitar_kardex(pr,ma);
            break;
        case 4:
            al.imprimir_kardex(pr,ma);
            break;
        default:
            cout<<"errror";
            break;
        }
    } while (opcion);
    return 0;
}
