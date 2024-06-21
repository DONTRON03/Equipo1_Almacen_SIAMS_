#include <iostream>
#include <string>
#define MAXIMOO 100
using namespace std;
struct Empleado {
    int edad;
    string sexo;
    string puesto;
    float salario;
};
Empleado MT[MAXIMOO];
void agregarEmpleado(Empleado empleados[], int &numEmpleados) {
    if (numEmpleados < MAXIMOO) {
        cout << "Ingrese la edad del empleado: ";
        cin >> empleados[numEmpleados].edad;

        cout << "Ingrese el sexo del empleado m o f ";
        cin >> empleados[numEmpleados].sexo;

        cout << "Ingrese el puesto del empleado: ";
        cin>> empleados[numEmpleados].puesto;

        cout << "Ingrese el salario del empleado: ";
        cin >> empleados[numEmpleados].salario;

        numEmpleados++;
        cout << "Empleado agregado correctamente" << endl;
    } else {
        cout << "No se pueden agregar más empleados Capacidad máxima alcanzada" << endl;
    }
}

void mostrarEmpleados(const Empleado empleados[], int numEmpleados) {
    cout << "\nLista de empleados:" << endl;
    for (int i = 0; i < numEmpleados; i++) {
        cout << "Empleado " << i + 1 << ":" << endl;
        cout << "Edad: " << empleados[i].edad << " años" << endl;
        cout << "Sexo: " << empleados[i].sexo << endl;
        cout << "Puesto: " << empleados[i].puesto << endl;
        cout << "Salario: $" << empleados[i].salario << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    const int MAX = 100;
    Empleado empleados[MAX];
    int numEmpleados = 0;
    int opc;

    cout << "Bienvenido al sistema de registro de empleados" << endl;

    while (true) {
        cout << "\nPresione 1) para agregar un nuevo empleado" << endl;
        cout << "Presione 2) para ver la lista de empleados" << endl;
        cout << "Presione 0) para salir" << endl;
        cin >> opc;

        switch (opc) {
            case 1:
                agregarEmpleado(empleados, numEmpleados);
                break;
            case 2:
                mostrarEmpleados(empleados, numEmpleados);
                break;
            case 0:
                cout << "Gracias por usar el sistema." << endl;
                return 0;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    }
}

