
class Propietario{
    char nombre[15];
    char ap_paterno[15];
    char ap_materno[15];
    char calle[15];
    int num_ext;
    int num_int;
    char colonia[15];
    int cp;
    char referencias[30];
    char tipo_sangre[3];
    char alergias[15];
    char cormobilidades[30];
    char telefono[10];
    char celular[10];
    char correo_e[30];
public:
    Propietario();
    void interactuar();
    friend void activar();
    friend void desactivar();
};