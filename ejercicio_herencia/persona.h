class Persona
{
protected:
    char nombre[15];
    int edad;
    char sexo;
public:
    void Personas();
    virtual void imprimirinfo(float);
};

class Estudiante:public Persona
{
private:
    int calif[8];
public:
    void Estudiante();
    float calcularProm();
};

class Empleado:public Persona
{
private:
    int horas;
    int tarifa;
public:
    Empleado();
    float calcularSueldo();
};
