#include <iostream>

using namespace std;

class Lampara
{
private:
    char tipo_foco[15];
    int potencia;
    int temperatura_luz;
    char tipo[10];
    int consumo;
public:
    void solicitar_datos(){
        cout<<"ingrese los datos de la lampara: "<<endl;
        cout<<"que tipo de foco tiene? LED, incandecente, fluorecente, etc.: ";
        cin>>tipo_foco;
        cout<<"de que potencia es? ";
        cin>>potencia;
        cout<<"de que temperatura es? 1=fria, 2=neutra, 3=calida: ";
        cin>>temperatura_luz;
        cout<<"de que tipo es la lampara?: ";
        cin>>tipo;
    }
    void encender(){
        cout<<"encendiendo la lampara de "<<tipo<<endl;
    }
    void atenuar(){
        cout<<"atenuando lampara de "<<tipo<<endl;

    }
    int calcular_consumo(){
        int tiempo;
        cout<<"cuantas horas ha estado encendida la lampara?: ";
        cin>>tiempo;
        consumo = potencia * tiempo;
        cout<<"la lampara de "<<tipo<<"ha consumido: "<<consumo<<" watts"<<endl; 
        return consumo;
    }
    void apagar(){
        cout<<"apagando la lampara de "<<tipo<<endl;
    }

};

int main(){
    int opcion,continuar;
    Lampara a;
    a.solicitar_datos();
    do
    {
        cout<<"que desea hacer:";
        cout<<"1. encender ";
        cout<<"2. atenuar ";
        cout<<"3. apagar ";
        cout<<"4. calcular consumo "<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:a.encender();
            break;
        case 2:a.atenuar();
            break;
        case 3:a.apagar();
            break;
        case 4:a.calcular_consumo();
            break;
        default: cout<<"Opcion invalida\n";
        }
        cout<<"para salir presione 0, para regresar al menu principal presione 1 "<<endl;
        cin>>continuar;
    } while (continuar);
    
}