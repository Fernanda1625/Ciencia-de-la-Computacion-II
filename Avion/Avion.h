class Avion{
	private:
		char* nombre_vuelo;
		char* destino;
	public:
		Avion(char* name,char* dest);
		char* getNombreVuelo();
		char* getDestino();
		void setNombreVuelo(char* name);
		void setDestino(char* dest);
		void mostrar();
		~Avion();
};
