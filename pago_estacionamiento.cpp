#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>=  11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
	cout << "Número de prueba " << "Testdata " << "Expected result " << "Actual result " << "Pass fail" << endl;
	cout << "   Prueba 1: " << "       3 " << "        30                 "<< pago_estacionamiento(3) << endl;
	cout << "   Prueba 2: " << "       9 " << "        81                 "<< pago_estacionamiento(9) << endl;
	cout << "   Prueba 3: " << "      15 " << "       105                 "<< pago_estacionamiento(15) << endl;
	cout << "   Prueba 4: " << "       1 " << "        10                 "<< pago_estacionamiento(1) << endl;
	cout << "   Prueba 5: " << "       5 " << "        50                 "<< pago_estacionamiento(5) << endl;
	cout << "   Prueba 6: " << "       6 " << "        54                 "<< pago_estacionamiento(6) << endl;
	cout << "   Prueba 7: " << "      10 " << "        90                 "<< pago_estacionamiento(10) << endl;
	cout << "   Prueba 8: " << "      11 " << "        77                 "<< pago_estacionamiento(11) << endl;



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
