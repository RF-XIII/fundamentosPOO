class Figuras
{
protected:
    char color[15];
public:
    Figuras();
    virtual float area(){
    };

};

class Triangulo:public Figuras
{
private:
    int base,altura;
public:
    Triangulo();
    float area();
};
class Circulo:public Figuras
{
    int radio;
public:
    Circulo();
    float area();
};
class Rectangulo:public Figuras
{
    int base,altura;
public:
    Rectangulo();
    float area();
};
class Cuadrado:public Figuras
{
    int lado;
public:
    Cuadrado();
    float area();
};