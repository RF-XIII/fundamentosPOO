#include <iostream>

using namespace std;

class carro
{
private:
    char color[10];
    char tipo[10];
    int combustible;
    int nivel_combustible=100;
    int velocidad=0;
public:
    void solicitar_datos(){
        cout<<"ingrese los datos del carro: "<<endl;
        cout<<"ingrese el color del carro: ";
        cin>>color;
        cout<<"de que tipo es el carro? ";
        cin>>tipo;
        cout<<"que combustible usa el carro? 1.gasolina, 2.diesel, 3.electricidad ";
        cin>>combustible;
    }
    void encender(){
        cout<<"encendiendo el carro "<<endl;
        if(nivel_combustible<1)
            cout<<"no se puede encender el carro, nivel de combustible bajo ";
    }
    void apagar(){
        cout<<"apagando el carro "<<endl;
    }
    void acelerar(){
        if(nivel_combustible>1){
        cout<<"acelerando "<<endl;
        velocidad = velocidad+10;
        cout<<"velocidad actual:"<<velocidad<<"Km/h";
        }
    }
    void frenar(){
        cout<<"frenando "<<endl;
        velocidad = velocidad-10;
        cout<<"velocidad actual:"<<velocidad<<"Km/h";
    }


};

int main(){
    int opcion,continuar;
    carro car;
    car.solicitar_datos();
    do
    {
        cout<<"que desea hacer:";
        cout<<"1. encender ";
        cout<<"2. acelerar ";
        cout<<"3. frenar ";
        cout<<"4. apagar "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:car.encender();
            break;
        case 2:car.acelerar();
            break;
        case 3:car.frenar();
            break;
        case 4:car.apagar();
            break;
        default: cout<<"Opcion invalida\n";
        }
        cout<<"\npara salir presione 0, para regresar al menu principal presione 1 "<<endl;
        cin>>continuar;
    } while (continuar);
    
}