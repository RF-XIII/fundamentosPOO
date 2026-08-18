
class contrasena
{
private:
    char tipo_contrasena[10];
    char clave[8];
    int num_intentos=0;
public:
    void cambiar_contrasena();

    void activar_sistema();

    void desactivar_sistema();

    void bloquear_sistema();

    void verificar_contrasena();

};