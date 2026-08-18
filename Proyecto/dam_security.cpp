#include <iostream>
#include "dam_security.h"
#include "trabajadores.h"
/*#include "compuertas.h"       <--- creo que ya no es necesario incluirlos ya que estan incluidos en el 
#include "sensor_agua.h"            archivo cabecera de trabajadores
#include "camaras.h"
#include "maquinaria.h"*/
#include "alarma.h"

#include <fstream>
#include "sqlite-poo/sqlite3.h"

using namespace std;

//constructor
Dam_security::Dam_security(){
    cout<<"\n ingrese el tipo de presa: ";
    cin>>tipo_presa;
    cout<<"\n de que capacidad es la presa?:";
    cin>>capacidad_agua;
}

Trabajadores::Trabajadores(){
    nombre = "";
    edad = 0;
    sexo = "";
    nivel_jerarquia = 0;
}

Seguridad::Seguridad(){
    tel_emergencia = "";
}

Ingeniero::Ingeniero(){
    descripcion_falla = "";
}

Administrador::Administrador(){

}

Alarma::Alarma(){
    // tipo
}

Sensor_nivel_agua::Sensor_nivel_agua(){

}

Maquinas::Maquinas(){

}
Compuertas::Compuertas(){

}

Camaras::Camaras(){
    num_camaras = 0;
    //ubicacion_camaras = "";
}

//funcion o metodo 
void Dam_security::mostrar_informacion(){
    cout<<"\n tipo: "<<tipo_presa;
    cout<<"\n capacidad: "<<capacidad_agua;
}

void Trabajadores::ingresar_trabajador(sqlite3 *db,char* err,sqlite3_stmt* stmt,int ID){
    string sql;
    cout<<"ingrese los datos del trabajador";
    cout<<"nombre";
    cin>>nombre;
    cout<<"edad:";
    cin>>edad;
    cout<<"sexo del trabajador";
    cin>>sexo;
    cout<<"nivel jerarquia";
    cin>>nivel_jerarquia;
    sql ="INSERT INTO Trabajadores (ID,nombre,edad,sexo,nivel_jerarquia) VALUES (?,?,?,?,?,?)";
    sqlite3_prepare_v2(db,sql.c_str(),-1,&stmt,NULL);
    sqlite3_bind_int(stmt,1,ID);
    sqlite3_bind_text(stmt,2,nombre.c_str(),nombre.length(),SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,3,edad);
    sqlite3_bind_text(stmt,4,sexo.c_str(),sexo.length(),SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,5,nivel_jerarquia);
    sqlite3_step(stmt);
}

void Trabajadores::mostrar_informacion(sqlite3 *db,char* err,sqlite3_stmt* stmt,int ID){
    string sql = "SELECT * FROM Trabajadores WHERE ID=" + to_string(ID) + ";";
    int rc = sqlite3_prepare_v2(db, sql.c_str(), sql.length(), &stmt, NULL);
    if (rc != SQLITE_OK) {
        cout<<"Error: "<<rc;
    }
    // Loop through the results, a row at a time.
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        //int ID = sqlite3_column_int(stmt, 0);
        string nombre = string ( reinterpret_cast< const char *> ( sqlite3_column_text ( stmt, 2 ) ) );
        int res3 = sqlite3_column_int(stmt,3);
        string sexo = string ( reinterpret_cast< const char *> ( sqlite3_column_text ( stmt, 4 ) ) );
        nivel_jerarquia = sqlite3_column_int(stmt,5);
        cout<<"\n nombre: "<<nombre;
        cout<<"\n edad: "<<edad;
        cout<<"\n sexo: "<<sexo;
        cout<<"\n nivel de jerarquia: "<<nivel_jerarquia;
    }
}

//TODO: agregar otro metodo para actualizar los datos del trabajador

void Trabajadores::informar_situacion(){
    ofstream rep;
    rep.open("Reporte.txt");
    if (rep.is_open())
    {
        rep << "Reporte de situacion \n";
        rep.close();
    }
    else{
        cout<<"error al abrir el archivo";
    }
}
void Administrador::monitorear_nivel_agua(Sensor_nivel_agua,Alarma){

}

void Administrador::controlar_nivel_agua(Compuertas){

}

void Administrador::llamar_emergencias(Alarma){

}
void Administrador::informar_situacion(){

}

void Seguridad::monitorear_camaras(){//Camaras){

}

void Seguridad::llamar_emergencias(Alarma){

}

void Ingeniero::monitorear_maquinas(Maquinas){
    //estado_maquina();
    //ubic
}

void Ingeniero::reparar_maquinas(Maquinas){

}

void Alarma::activar_alarma(){

}
void Alarma::desactivar_alarma(){

}

void Sensor_nivel_agua::Medir_nivel(){
    int c;
    srand(time(NULL));
    
    for(c = 1; c <= 10; c++)
    {
        nivel_agua = 1 + rand() % (10 - 1);
        cout << nivel_agua<< " ";
    }
    
    if(nivel_agua<=20){
    	
    	cout<<"Alerta: nivel del agua muy bajo";
    	
	}else if (nivel_agua > 21 && nivel_agua <= 40)
    {
        cout<<"nivel del agua bajo";
    }else if (nivel_agua >41 && nivel_agua <=60)
    {
        cout<<"nivel del agua normal";
    }
    else if (nivel_agua >61 && nivel_agua <=80)
    {
        cout<<"ALERTA: nivel del agua a sobre nivel";
        // abrir compuertas para liberar agua 
    }
    else if (nivel_agua >81 && nivel_agua <=100)
    {
        cout<<"ALERTA: nivel critico de agua, porfavor desaloje la instalacion";
        //activar alarma e informar a las autoridades
    }
    //return nivel_agua;
}

void Maquinas::estado_maquina(){
    
}

void Compuertas::abrir_compuertas(){

}
void Compuertas::cerrar_compuerta(){

}

void Camaras::cambiar_camara(){

}

int main(){
    char* err;
    int rc,i,ad;
    sqlite3 *db;
    sqlite3_stmt* stmt;
    sqlite3_open("Trabajadores.db",&db);
    rc=sqlite3_exec(db,"CREATE TABLE IN NOT EXIST Trabajadores(ID INT, nombre varchar(100), edad varchar(100), sexo varchar(1),nivel_jerarquia INT);",NULL,NULL, &err);
    if(rc != SQLITE_OK){
        cout<<"error:"<<err;
    }

    int opcion;
    //
    Dam_security sw;
    //Trabajadores tr; //[] TODO: agregar ? // es necesaria esta?
    Administrador admin[2];
    Ingeniero ing[200];
    Seguridad seg[10];
    Alarma Al[2];
    Sensor_nivel_agua sna;
    Maquinas mqn;
    Compuertas cmp;
    Camaras cm;

    do
    {
        cout << "\n ***Bienvenido ***"<<endl;
        //TODO: agregar las opciones
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            admin[ad].ingresar_trabajador(db,err,stmt,i);
            break;
        case 2:
        default:
            break;
        }
    } while (opcion);
    
    return 0;
}