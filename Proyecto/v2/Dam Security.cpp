#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <fstream>
//#include <locale.h>
using namespace std;
#include "Dam security.h"
#include "Trabajadores.h"

Dam_security::Dam_security(){
	cout<<"\n\tIngresa el tipo de presa: ";
	cin>> tipo_presa;
	cout<<"\tIngresa la capacidad de agua de la presa: ";
	cin>> capacidad_agua;
	cout<<"\tIngresa el n�mero de compuertas: ";
	cin>> num_compuertas;
}
void Dam_security::mostrar_informacion(){
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\tINFORMACI�N GENERAL DE LA PRESA";
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\n\tTIPO DE PRESA: "<<tipo_presa<<endl;
	cout<<"\tCAPACIDAD DE AGUA: "<<capacidad_agua<<" litros"<<endl;
	cout<<"\tN�MERO DE COMPUERTAS: "<<num_compuertas<<endl;
	cout<<"\n\t---------------------------------------------------------------";
}

Alarma::Alarma(){
	cout<<"\n\tIngresa el tipo de alarma: ";
	cin>> tipo;
}
void Alarma::activar_alarma(){
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\n\tLA ALARMA HA SIDO ACTIVADA "<<endl;
	cout<<"\n\t---------------------------------------------------------------";
}
void Alarma::desactivar_alarma(){
	int op;
	do{
		cout<<"\n\t�Est� seguro que desea desactivar la alarma? ";
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n\t---------------------------------------------------------------";
				cout<<"\n\n\tLA ALARMA HA SIDO DESACTIVADA "<<endl;
				cout<<"\n\t---------------------------------------------------------------";
				break;
			case 2:
				cout<<"\n\t---------------------------------------------------------------";
				cout<<"\n\n\tLA ALARMA NO SER� DESACTIVADA "<<endl;
				cout<<"\n\t---------------------------------------------------------------";
				break;
			default:
				cout<<"\n\tOpci�n inv�lida, int�ntelo de nuevo\n\t";
				//system("pause");
		}
	}
	while (op<1 || op>2);
}

Trabajadores::Trabajadores(){
	edad=0;
	nivel_jerarquia=0;
}
void Trabajadores::ingresar_trabajador(){
	cout<<"\n\tIngresa el nombre del trabajador: ";
	cin>> nombre;
	cout<<"\tIngresa la edad: ";
	cin>> edad;
	cout<<"\tIngresa sexo: ";
	cin>> sexo;
	cout<<"\tIngresa ID del trabajador: ";
	cin>> id_trabajador;
	cout<<"\tIngresa el nivel de jerarqu�a: ";
	cin>> nivel_jerarquia;
}
void Trabajadores::mostrar_informacion(){
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\tINFORMACI�N GENERAL DEL EMPLEADO";
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\n\tNombre del empleado: "<<nombre<<endl;
	cout<<"\tEdad: "<<edad<<endl;
	cout<<"\tSexo: "<<sexo<<endl;
	cout<<"\tID de trabajador: "<<id_trabajador<<endl;
	cout<<"\tJerarqu�a de trabajador: "<<nivel_jerarquia<<endl;
}

Administrador::Administrador(){
	cout<<"\n\n\tIngrese el n�mero de emergencias al que se llamar� en caso de un incidente con los niveles de agua: ";
	cin>>tel_emergencia;
}
void Administrador::monitorear_nivel_agua(){
	cout<<"\n\n\tPreparando sensores de agua\n";
	cout<<"\tUn momento por favor...\n\t";
	//system("pause");
}
void controlar_nivel_agua(Administrador adm, Sensor_nivel_agua sensor){
	cout<<"\n\n\tEl nivel de agua era de: "<<sensor.nivel_agua<<endl;
	int c;
	float num;
	srand(time(NULL));
	if(sensor.nivel_agua>5){
	    for(c = 1; c <= 1; c++){
	        num = 3 + rand() % (6 - 3);
	    }
	    sensor.nivel_agua=num;
		cout<<"\tAl abrirse las compuertas,el agua ha bajado a: "<<sensor.nivel_agua<<endl;
	}
	else if(sensor.nivel_agua<=3){
		for(c = 1; c <= 1; c++){
	        num = 3 + rand() % (6 - 3);
	    }
	    sensor.nivel_agua=num;
	    cout<<"\tLas compuertas se mantuvieron cerradas, el agua ha subido a: "<<sensor.nivel_agua<<endl;
	}
}
void Administrador::llamar_emergencias(){
	cout<<"\n\tLlamando al n�mero +"<<tel_emergencia<<endl;
	cout<<"\tUn momento por favor...\n\t";
	//system("pause");
}
void Administrador::informar_situacion(){
	ofstream rep;
    rep.open("Reporte.txt");
    if (rep.is_open())
    {
		cout<<"\n\n\tIngrese una breve descripci�n de la situaci�n a informar\n\t";
		fflush(stdin);
		cin.getline(descripcion,150);
		//gets(descripcion);
		cout<<"\n\tLa informaci�n se ha transmitido con �xito";
        rep << "Reporte de situacion \n";
		rep <<descripcion;
        rep.close();
    }
    else{
        cout<<"error al abrir el archivo";
    }
}

Seguridad::Seguridad(){
	cout<<"\n\tIngresa el tel�fono de emergencia: ";
	cin>>tel_emergencia;
}
void Seguridad::monitorear_camaras(){
	cout<<"\n\n\tConectando con c�maras de seguridad\n";
	cout<<"\tUn momento por favor...\n\t";
	//system("pause");
}
void Seguridad::llamar_emergencias(){
	cout<<"\n\tLlamando al n�mero +"<<tel_emergencia<<endl;
	cout<<"\tUn momento por favor...\n\t";
	//system("pause");
}
void Seguridad::informar_situacion(){
	ofstream rep;
    rep.open("Reporte.txt");
    if (rep.is_open())
    {
		cout<<"\n\n\tIngrese una breve descripci�n de la situaci�n a informar\n\t";
		fflush(stdin);
		cin.getline(descripcion,150);
		//gets(descripcion);
		cout<<"\n\tLa informaci�n se ha transmitido con �xito";
        rep << "Reporte de situacion \n";
		rep <<descripcion;
        rep.close();
    }
    else{
        cout<<"error al abrir el archivo";
    }
}

Ingeniero::Ingeniero(){
}
void Ingeniero::monitorear_maquinas(){
	cout<<"\n\n\tPreparando m�quinas para su revisi�n\n";
	cout<<"\tUn momento por favor...\n\t";
	//system("pause");
}
void reparar_maquinas(Ingeniero ing, Maquinas maq){
	cout<<"\n\n\t"<<maq.estado_maquina<<endl;
	cout<<"\tIniciando reparaci�n de la m�quina...\n\t";
	//system("pause");
	cout<<"\n\tLa m�quina ha sido reparada con �xito";
}
void Ingeniero::informar_situacion(){
	ofstream rep;
    rep.open("Reporte.txt");
    if (rep.is_open())
    {
		cout<<"\n\n\tIngrese una breve descripci�n de la situaci�n a informar\n\t";
		fflush(stdin);
		cin.getline(descripcion,150);
		//gets(descripcion);
		cout<<"\n\tLa informaci�n se ha transmitido con �xito";
        rep << "Reporte de situacion \n";
		rep <<descripcion;
        rep.close();
    }
    else{
        cout<<"error al abrir el archivo";
    }
}

Compuertas::Compuertas(){
	cout<<"\n\tIngresa n�mero de puerta: ";
	cin>> num_puerta;
	cout<<"\tIngresa la ubicaci�n de la puerta: ";
	cin>> ubicacion_puerta;
	/*cout<<"\tIngresa las tomas: ";
	cin>> tomas;*/
}
void Compuertas::abrir_compuertas(){
	cout<<"\n\t---------------------------------------------------------------";
	cout<<"\n\n\tLAS COMPUERTAS SE HAN ABIERTO "<<endl;
	cout<<"\n\t---------------------------------------------------------------";
}
void Compuertas::cerrar_compuertas(){
				cout<<"\n\t---------------------------------------------------------------";
				cout<<"\n\n\tLAS COMPUERTAS SE HAN CERRADO"<<endl;
				cout<<"\n\t---------------------------------------------------------------";
}

Sensor_nivel_agua::Sensor_nivel_agua(){
	nivel_agua=0;
}
void Sensor_nivel_agua::medir_nivel(){
	int c, op;
	float num;
	do{
		srand(time(NULL));
		op=0;
	    for(c = 1; c <= 1; c++){
	        num = 1 + rand() % (7 - 1);
	    }
	    nivel_agua=num;
	    //system("cls");
	    cout<<"\n\t---------------------------------------------------------------";
	    cout<<"\n\t\t\t"<<"EL NIVEL DE AGUA EN LA PRESA ES DE "<<nivel_agua<<endl;
	    cout<<"\tEl nivel normal en la presa debe ser de 3 a 5\n";
	    if(num>5){
	    	cout<<"\n\t---------------------------------------------------------------";
	    	cout<<"\n\n\tSE HA DETECTADO UN ALTO NIVEL DE AGUA EN LA PRESA\n\n\tIniciando protocolo de seguridad...\n";	
	    	cout<<"\n\t---------------------------------------------------------------";
		}
		else if(num>=3 && num<=5){
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tNo se ha detectado ninguna anormalidad\n";	
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tPresione 1 para volver a evaluar el nivel, cualquier otro n�mero para volver al inicio\n";
			cin>>op;
		}
		else{
	    	cout<<"\n\t---------------------------------------------------------------";
	    	cout<<"\n\n\tSE HA DETECTADO UN BAJO NIVEL DE AGUA EN LA PRESA\n\n\tIniciando protocolo de seguridad...\n";	
	    	cout<<"\n\t---------------------------------------------------------------";
		}
	}
	while (op==1);
}

Camaras::Camaras(){
	cout<<"\n\tIngresa la ubicaci�n de las c�maras: ";
	fflush(stdin);
	cin.getline(ubicacion_camaras,30);
	//gets (ubicacion_camaras);
	cout<<"\tIngresa el n�mero de c�maras: ";
	cin>> num_camaras;
}
void Camaras::cambiar_camara(char, int){
	int num, c, op, cont;
	cont=0;
	do{
		srand(time(NULL));
		op=0;
	    cont =cont +1;
	    for(c = 1; c <= 1; c++){
	        num = 1 + rand() % (3 - 1);
	    }
	    //system("cls");
	    cout<<"\n\t---------------------------------------------------------------";
	    cout<<"\n\t\t\t"<<ubicacion_camaras<<endl;
	    cout<<"\n\t\t\t\t\tC�mara No. "<<cont<<endl;
	    if(num==1){
	    	cout<<"\n\t---------------------------------------------------------------";
	    	cout<<"\n\n\tSE HA DETECTADO UN INTRUSO\n\n\tIniciando protocolo de seguridad...\n";	
	    	cout<<"\n\t---------------------------------------------------------------";
		}
		else{
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tNo se ha detectado ninguna anormalidad\n";	
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tPresione 1 para cambiar de c�mara, cualquier otro n�mero para volver al inicio\n";
			cin>>op;
		}
		if(cont==num_camaras) cont=0;
	}
	while (op==1);
}

Maquinas::Maquinas(){
	for (int i=0;i<3;i++){
		cout<<"\n\tIngresa la ubicacion de la m�quina "<<i+1<<": ";
		fflush(stdin);
		cin.getline(ubicacion_maquina[i],30);
		//gets (ubicacion_maquina[i]);
		cout<<"\tIngresa el nombre de la m�quina "<<i+1<<": ";
		cin.getline(nombre_maquina[i],30);
		//gets (nombre_maquina[i]);
		cout<<ubicacion_maquina[i]<<endl;
		cout<<nombre_maquina[i];
	}
}
string Maquinas::estatus_maquina(char, char){
	int num, c, op, cont;
	cont=0;
	string n;
	string u;
	do{
		srand(time(NULL));
		op=0;
	    cont =cont +1;
	    for(c = 1; c <= 1; c++){
	        num = 1 + rand() % (3 - 1);
	    }
	    //system("cls");
	    cout<<"\n\t---------------------------------------------------------------";
	    cout<<"\n\t\t\tNombre de la m�quina: "<<nombre_maquina[cont-1]<<endl;
	    cout<<"\n\t\t\t\t\tUbicada en "<<ubicacion_maquina[cont-1]<<endl;
	    if(num==1){
	    	cout<<"\n\t---------------------------------------------------------------";
	    	cout<<"\n\n\tSE HA DETECTADO UN FALLO EN LA M�QUINA\n\n\tIniciando protocolo de seguridad...\n";	
	    	cout<<"\n\t---------------------------------------------------------------";
	    	n=nombre_maquina[cont-1];
	    	u=ubicacion_maquina[cont-1];
	    	estado_maquina= "Hubo un fallo en la m�quina llamada "+n+" ubicada en "+u;
	    	return estado_maquina;
		}
		else{
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tNo se ha detectado ninguna anormalidad\n";	
			cout<<"\n\t---------------------------------------------------------------";
			cout<<"\n\n\tPresione 1 para cambiar de m�quina, cualquier otro n�mero para volver al inicio\n";
			cin>>op;
		}
		if(cont==3) cont=0;
	}
	while (op==1);
}

int main(){
	setlocale(LC_ALL, "Spanish");
	/*Dam_security dam;
	system("cls");
	dam.mostrar_informacion();
	Compuertas com;
	system("pause");
	system("cls");
	com.abrir_compuertas();
	com.cerrar_compuertas();*/
	Seguridad seg;
	seg.monitorear_camaras();
	Camaras cam;
	cam.cambiar_camara(cam.ubicacion_camaras[30], cam.num_camaras);
	seg.llamar_emergencias();
	seg.informar_situacion();
	/*Ingeniero ing;
	Maquinas maq;
	ing.monitorear_maquinas();
	maq.estatus_maquina(maq.ubicacion_maquina[3][30], maq.nombre_maquina[3][30]);
	reparar_maquinas(ing, maq);
	ing.informar_situacion();*/
	
	/*Administrador adm;
	Sensor_nivel_agua sen;
	sen.medir_nivel();
	Compuertas com;
	if(sen.nivel_agua<3){
		com.cerrar_compuertas();
		controlar_nivel_agua(adm, sen);
		adm.llamar_emergencias();
		adm.informar_situacion();
	}
	else if(sen.nivel_agua>5){
		com.abrir_compuertas();
		controlar_nivel_agua(adm, sen);
		adm.llamar_emergencias();
		adm.informar_situacion();
	}*/
}

