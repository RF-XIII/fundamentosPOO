class Sensor_nivel_agua;
class Administrador;

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
	public:
		char tel_emergencia[10];
		char descripcion[150];
		Administrador();
		void monitorear_nivel_agua();
		void llamar_emergencias();
		friend void controlar_nivel_agua(Administrador, Sensor_nivel_agua);
		void informar_situacion();
};
class Seguridad:public Trabajadores{
	private:
		char tel_emergencia[10];
	public:
		Seguridad();
		void monitorear_camaras();
		void llamar_emergencias();
		void informar_situacion();
};
class Ingeniero:public Trabajadores{
	public:
		char descripcion_falla[30];
		Ingeniero();
		void monitorear_maquinas();
		void reparar_maquinas();
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
		char estado_maquina[20];
		Maquinas();
		void estatus_maquina(char, char);
};
