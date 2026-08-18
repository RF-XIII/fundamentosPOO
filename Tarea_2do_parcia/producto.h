
class Producto
{
protected:
    char usuario[100];
    char cuenta[25];
    char banco[100];
    char fecha_vencimiento[4];
    char num_tarjeta[16];
    char tipo_tarjeta[10];
    int pin;
    int numero_seguridad;
public:
    Producto();
    virtual void realizar_abono(){
    };
    virtual void realizar_cargo(){
    };
};

class tarjeta_debito:public Producto
{
private:
    int dinero_disponible;
public:
    tarjeta_debito();
    void realizar_abono();
    void realizar_cargo();
};

class cheques:public Producto
{
private:
    int importe;
    char beneficiario[100];
    char n_serie[20];
    char tipo[15];
    int numero;
public:
    cheques();
    void realizar_abono();
    void realizar_cargo();
};

class tarjeta_credito:public Producto
{
private:
    int credito_disponible;
public:
    tarjeta_credito();
    void realizar_abono();
    void realizar_cargo();
};