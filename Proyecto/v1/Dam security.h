class Dam_security{
	protected:
		char tipo_presa[15];
		float capacidad_agua;
		int num_compuertas;
	public:
		char status_agua[20];
		Dam_security();
		void mostrar_informacion();
};

class Alarma{
	protected: 
		char tipo;
	public:
		Alarma();
		void activar_alarma();
		void desactivar_alarma();
};

class Compuertas{
	protected:
		int num_puerta;
		char ubicacion_puerta[50];
		//char tomas[50];
	public:
		Compuertas();
		void abrir_compuertas();
		void cerrar_compuertas();
};
