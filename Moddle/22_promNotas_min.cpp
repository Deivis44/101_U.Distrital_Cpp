#include<iostream>
using namespace std;

int main() {
	float alta, baja, n, suma=0,conteo=1;
	int c=0, x;

	for (x=1;x<=40;x++) {
		cout << "Ingresa una nota (" << "" << conteo << ")" << endl;
		conteo++;
		cin >> n;
		suma = suma+n;

		if (x==1) {
			alta = n;
			baja = n;
		} else {
			if (n>alta) {
				baja = n;
			} else {
				if (n<baja) {
					baja = n;
				}
			}
		}
	}
	cout << "EL promedio de las 40 calificaciones es: " << suma/40 << endl;
	cout << "La calificacion mas baja es; " << baja << endl;
	cout << "La calificacion mas alta es; " << alta << endl;
	return 0;
}

