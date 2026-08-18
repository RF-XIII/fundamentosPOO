class Camaras{
    int num_camaras;
    char ubicacion_camaras[30];
public:
    Camaras();
    void cambiar_camara();
    friend class Seguridad;
};