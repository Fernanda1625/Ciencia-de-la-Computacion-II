class Volumen{
    private:
		char* titulo;
		char* isbn;
		int numero_ejemplares;
	public:
		Volumen(char* title, char* is, int numero);
		Volumen (const Volumen& v);
		char* getTitulo();
		char* getIsbn();
		int getNumeroEjemplares();
		virtual void mostrar();
		void setDatos(char* title, char*is, int numero);
		~Volumen();
};
