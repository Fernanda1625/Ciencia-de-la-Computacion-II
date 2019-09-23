using namespace std;

class Carriage {
		bool asientos [40];
		bool primera;
	public:
		Carriage() {};
		Carriage(bool prim);
		bool getAsiento(int ind);
		bool getPrimera();
		void setPrimera(bool p);
		void ocupar();
};
