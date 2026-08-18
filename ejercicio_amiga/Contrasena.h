class Contrasena {
    char tipo[15];
    char clave[8];
    int num_intentos;
    int longitud;
public:
    Contrasena();
    void activar();
    void desactivar();
};