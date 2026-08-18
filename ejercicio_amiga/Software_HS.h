#include "Propietario.h"
#include "Suceso_detectado.h"

class Software_HS{
    int alarma = 1;
    int tiempo_marcado;
public:
    Software_HS();
    void instalar();
};
class Sensores: public Software_HS{
    char tipo[15];
    int numero;
    char posicion[15];
public:
    Sensores();
    void conectar();
    void detectar_suceso();
    friend class Suceso_detectado;
};
class Panel_control:public Software_HS{
    int teclado_numerico; //¿?
    int teclas_funcion;
    int monitor; //
    int sonido_prueba; //
public:
    void Configurar_HS();
    void leer_info();
    void mostrar_mensajes();
};
class Contrasena: public Software_HS{
    char tipo[15];
    char clave[8];
    int num_intentos;
    int longitud;
public:
    Contrasena();
    friend void activar();
    friend void desactivar();
};