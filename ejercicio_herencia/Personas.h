class Personas{
protected:
    char nombre[30];
    char domicilio[50];
    int edad;
    char sexo;
public:
Personas();
};
class Empleados:public Personas{
protected:
    int h_trabajadas;
    int tarifa;
public:
    Empleados();
    float calcular_nomina();
    void desplegar_info();
};
class Clientes:public Personas{
    char razon_social[50];
    char telefono[10];
public:
    Clientes();
    void desplegar_info();
};
class Directivo:public Empleados{
    float bono_especial;
    char categoria[15];
public:
    Directivo();
    float calcular_nomina();
    void desplegar_info();
};