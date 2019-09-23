#include<iostream>
#include"Carriage.h"
#include"Train.h"
using namespace std;

int main() {
	Train t(4, 9, "Arequipa", "Cuzco", 15, 25);
	t.llenar();
	cout << endl << endl << t.totalVentas() << endl;
	return 0;
}
