class Maquinas{
    char nombre_maquina[30];
    char ubicacion_maquina[30];
    char est_maquina[20];
public:
    Maquinas();
    void estado_maquina();
    friend class Ingeniero;
};