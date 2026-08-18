#include "Servicio_vigilancia.h"
class Suceso_detectado{
    char naturaleza[15];
    char localizacion[15];
    char hora[5];
    char fecha[8];
    int cant_personas;
public:
    Suceso_detectado();
    void informar();
    friend class Servicio_vigilancia;
};