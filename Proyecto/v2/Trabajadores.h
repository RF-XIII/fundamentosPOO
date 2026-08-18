#include<iostream>
using namespace std;
class Sensor_nivel_agua;
class Maquinas;

class Trabajadores{
	protected:
		char nombre[20];
		int edad;
		char sexo[2];
		char id_trabajador[10];
		int nivel_jerarquia;
	public:
		Trabajadores();
		void mostrar_informacion();
		void ingresar_trabajador();
		virtual void informar_situacion(){
		};
};
class Administrador:public Trabajadores{
	private:
		char tel_emergencia[10];
		char descripcion[150];
	public:
		Administrador();
		void monitorear_nivel_agua();
		void llamar_emergencias();
		friend void controlar_nivel_agua(Administrador, Sensor_nivel_agua);
		void informar_situacion();
};
class Seguridad:public Trabajadores{
	private:
		char tel_emergencia[10];
		char descripcion[150];
	public:
		Seguridad();
		void monitorear_camaras();
		void llamar_emergencias();
		void informar_situacion();
};
class Ingeniero:public Trabajadores{
	private:
		char descripcion[150];
	public:
		Ingeniero();
		void monitorear_maquinas();
		void reparar_maquinas(Ingeniero, Maquinas);
		void informar_situacion();
};

class Sensor_nivel_agua{
	public:
		float nivel_agua;
		Sensor_nivel_agua();
		void medir_nivel();
		friend void controlar_nivel_agua(Administrador, Sensor_nivel_agua);
};

class Camaras{
	public:
		int num_camaras;
		char ubicacion_camaras[30];
		Camaras();
		void cambiar_camara(char, int);
};

class Maquinas{
	public:
		char nombre_maquina[3][30];
		char ubicacion_maquina[3][30];
		string estado_maquina;
		Maquinas();
		string estatus_maquina(char, char);
};
