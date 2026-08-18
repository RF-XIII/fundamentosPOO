class Ciudad;

class Clima
{
    float temperatura;
    int precipitacion;
    int humedad;
    int viento;
public:
    Clima();
    float fahrenheit_celsius(float);
    friend void reportar_clima(Ciudad,Clima);
};

class Ciudad
{
    char ciudad[25];
    float superficie;
    int altitud;
public:
    Ciudad();
    friend void reportar_clima(Ciudad,Clima);
};