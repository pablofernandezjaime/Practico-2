/*
Titulo:Menu de usuario
Auntor:Pablo Jesús Fernández Jaime
Descripcion: Primer ejercicion del practico de pregramacion 1
Fecha 2024-01-18
*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int num_uno, num_dos, num_tres;
	double res_num;  // Cambiado a double para manejar valores con decimales
	
	char opcion;
	opcion = tolower(opcion);
	do {
		cout << "Menu principal" << endl;
		cout << "1. Multiplicacion con dos valores" << endl;
		cout << "2. Division con dos valores" << endl;
		cout << "3. Multiplicacion con tres valores" << endl;
		cout << "4. Mayor de 3 numeros" << endl;
		cout << "S. SALIR" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "Ingrese el primer valor a multiplicar: ";
			cin >> num_uno;
			cout << "Ingrese el segundo valor a multiplicar: ";
			cin >> num_dos;
			res_num = static_cast<double>(num_uno * num_dos);
			cout << "EL RESULTADO DE LA MULTIPLICACION ES DE: " << res_num << endl;
			break;
			
		case '2':
			cout << "Ingrese el primer valor del dividendo: ";
			cin >> num_uno;
			cout << "Ingrese el segundo valor del divisor: ";
			cin >> num_dos;
			if (num_dos != 0) {
				res_num = static_cast<double>(num_uno) / static_cast<double>(num_dos);
				cout << "EL RESULTADO DE LA DIVISION ES DE: " << res_num << endl;
			} else {
				cout << "¡¡NO ES POSIBLE DIVIDIR ENTRE 0!!" << endl;
			}
			break;
			
		case '3':
			cout << "Ingrese el primer valor a multiplicar: ";
			cin >> num_uno;
			cout << "Ingrese el segundo valor a multiplicar: ";
			cin >> num_dos;
			cout << "Ingrese el tercer valor a multiplicar: ";
			cin >> num_tres;
			res_num = static_cast<double>(num_uno * num_dos) * num_tres;
			cout << "EL RESULTADO DE LA MULTIPLICACION ES DE: " << res_num << endl;
			break;
			
		case '4':
			cout << "Ingrese el primer valor: ";
			cin >> num_uno;
			cout << "Ingrese el segundo valor: ";
			cin >> num_dos;
			cout << "Ingrese el tercer valor: ";
			cin >> num_tres;
			
			if (num_uno > num_dos && num_uno > num_tres) {
				cout << "EL NUMERO MAYOR ES: " << num_uno << endl;
			} else if (num_dos > num_uno && num_dos > num_tres) {
				cout << "EL NUMERO MAYOR ES: " << num_dos << endl;
			} else {
				cout << "EL NUMERO MAYOR ES: " << num_tres << endl;
			}
			break;
			
		case 's':
			cout << "SALIENDO...DE UN CLICK PARA FINALIZAR" << endl;
			break;
			
		default:
			cout << "OPCION INVALIDA" << endl;
		}
	} while (opcion != 's');
	
	return 0;
}

