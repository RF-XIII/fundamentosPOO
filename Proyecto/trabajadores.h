#include "camaras.h"
#include "sensor_agua.h"
#include "compuertas.h"
#include "maquinaria.h"
#include "sqlite-poo/sqlite3.h"

class Trabajadores{
protected:
    string nombre;
    int edad;
    string sexo;
    int nivel_jerarquia;
public:
    Trabajadores();
    void mostrar_informacion(sqlite3 *db,char* err,sqlite3_stmt* stmt,int ID); //falta en el diagrama de secuencias "creo"
    void ingresar_trabajador(sqlite3 *db,char* err,sqlite3_stmt* stmt,int ID);
    virtual void informar_situacion();//falta que tipo de dato va a retornar >propuesta string
};
class Administrador:public Trabajadores {
    string tel_emergencia;
public:
    Administrador();
    void monitorear_nivel_agua(Sensor_nivel_agua,Alarma);
    void controlar_nivel_agua(Compuertas);
    void llamar_emergencias(Alarma);
    void informar_situacion();
};
class Seguridad: public Trabajadores {
    string tel_emergencia;
public:
    Seguridad();
    void monitorear_camaras();
    void llamar_emergencias(Alarma);
    void informar_situacion();
    friend class Camaras;       //prueba para ver si sirve tener la clase amiga en otro archivo cabecera.
};
class Ingeniero: public Trabajadores{
    string descripcion_falla;
public:
    Ingeniero();
    void monitorear_maquinas(Maquinas);
    void reparar_maquinas(Maquinas);
    void informar_situacion();
};