class Ciudad
{
    char ciudad[25];
    float superficie;
    int altitud;
public:
    Ciudad();
    friend class Clima;
};

class Clima
{
    float temperatura;
    int precipitacion;
    int humedad;
    int viento;
public:
    Clima();
    float fahrenheit_celsius(float);
    void reportar_clima(Ciudad);
};

