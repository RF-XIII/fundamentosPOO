#include <iostream>

using namespace std;

class lampara
{
private:
    char marca[15];
    char tipo_foco[15];
    int potencia;
    char tipo[5];
    char temperatura[10];
public:
    void ingresar_datos(){
        cout<<"ingrese los datos de la lampara"<<endl;
        cout<<"ingrese la marca: ";
        cin>>marca;
        cout<<"ingrese el tipo de foco ";
        cin>>tipo_foco;
        cout<<"ingrese la potencia: ";
        cin>>potencia;
        cout<<"ingrese la temperatura del foco: ";
        cin>>temperatura;
        cout<<"ingrese el tipo de lampara: ";
        cin>>tipo;
    }
    float comprar_lampara(int cantidad){
        return cantidad*precio;
    }
    char probar_lampara(int resp){
        if(resp == 1){
            cout"comprobando si enciende:";
            
            return "funciona!!"
        }
    }
};


int main(){
    lampara lamp;
    int resp= 0;

    lamp.ingresar_datos();
    cout<<"desea provar la lampara: 1-si,2-no"
    cin<<resp;
    lamp.probar_lampara(resp);
    cout>>
}