
class Materia
{
    char materia[30];
    int semestre;
    float calif;
public:
    Materia();
    friend class Alumno;
};

class Profesor
{
    char profesor[30];
public:
    Profesor();
    friend class Alumno;
};

class Alumno
{
    char alumno[30];
    int edad;
    int promedio;
public:
    Alumno();
    void solicitar_alumno();
    void imprimir_alumno();
    void solicitar_kardex(Profesor[],Materia[]);
    void imprimir_kardex(Profesor[],Materia[]);
    //friend class Profesor;
    //friend class Materia;
};