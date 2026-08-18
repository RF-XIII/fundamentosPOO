class Triangulos{
protected:
    char color[20];
public:
    Triangulos();
    virtual float perimetro(){};
};

class Rectangulo:public Triangulos{
private:
    int c_a,c_o,hip;
public:
    Rectangulo();
    float perimetro(int,int,int);
};

class Equilatero:public Triangulos{
private:
    int lado;
public:
    Equilatero();
    float perimetro(int);

};

class Isosceles:public Triangulos{
private:
    int lado,base;
public:
    Isosceles();
    float perimetro(int,int);

};