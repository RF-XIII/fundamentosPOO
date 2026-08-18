class Sensores{
    char tipo[15];
    int numero;
    char posicion[15];
public:
    Sensores();
    void conectar();
    void detectar_suceso();
};