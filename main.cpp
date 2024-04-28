#include "Habitacion.h"

bool registrado = false;

void mostrarMenu() {
    cout << "Bienvenido al sistema de gesti�n de reservas de hotel" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "1. Ver disponibilidad de habitaciones" << endl;
    cout << "2. Realizar una nueva reserva" << endl;
    cout << "3. Ver informaci�n de una reserva existente" << endl;
    cout << "4. Modificar una reserva" << endl;
    cout << "5. Cancelar una reserva" << endl;
    cout << "6. Ver detalles del hotel" << endl;
    cout << "7. Salir" << endl;
    cout << "--------------------------------------------------" << endl;
}

void registrarse() {
    string nombre, apellido, correo, telefono;

    cout << "Por favor, ingrese su nombre: ";
    cin >> nombre;
    cout << "Por favor, ingrese su apellido: ";
    cin >> apellido;
    cout << "Por favor, ingrese su correo electr�nico: ";
    cin >> correo;
    cout << "Por favor, ingrese su n�mero de tel�fono: ";
    cin >> telefono;

    Cliente nuevoCliente(nombre, apellido, correo, telefono);
    nuevoCliente.guardarSesion();

    cout << "Registro exitoso. �Bienvenido, " << nombre << "!" << "\n\n";
    registrado = true;
}

int main() {
	setlocale(LC_ALL, "");

    int opcion;

    do {

        if (!registrado) {
            cout << "Bienvenido al sistema de gesti�n de reservas de hotel" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "Por favor, registre su cuenta antes de continuar." << endl;
            cout << "--------------------------------------------------" << endl;
            registrarse();
            registrado = true;
        }

        mostrarMenu();
        cout << "Ingrese el n�mero de la opci�n que desea realizar: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            // L�gica para ver disponibilidad de habitaciones
            cout << "Funci�n para ver disponibilidad de habitaciones" << endl;
            break;
        case 2:
            // L�gica para realizar una nueva reserva
            cout << "Funci�n para realizar una nueva reserva" << endl;
            break;
        case 3:
            // L�gica para ver informaci�n de una reserva existente
            cout << "Funci�n para ver informaci�n de una reserva existente" << endl;
            break;
        case 4:
            // L�gica para modificar una reserva
            cout << "Funci�n para modificar una reserva" << endl;
            break;
        case 5:
            // L�gica para cancelar una reserva
            cout << "Funci�n para cancelar una reserva" << endl;
            break;
        case 6:
            // L�gica para ver detalles del hotel
            cout << "Funci�n para ver detalles del hotel" << endl;
            break;
        case 7:
            cout << "Saliendo del sistema..." << endl;
            break;
        default:
            cout << "Opci�n no v�lida. Por favor, ingrese un n�mero del 1 al 7." << endl;
            break;
        }

    } while (opcion != 7);

    cout << "Saliendo del sistema..." << endl;

	_getch();
}