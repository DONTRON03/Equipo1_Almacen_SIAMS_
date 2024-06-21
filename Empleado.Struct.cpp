#include <iostream>
#include <string>
#define M 100
using namespace std;
struct Empleado {
    int edad;
    string sexo;
    string puesto;
    float salario;
};
Empleado matriz[M];
void agregarEmpleado(Empleado empleados[], int &numEm) {
    if (numEm < M) {
        cout << "Ingrese la edad del empleado: ";
        cin >> empleados[numEm].edad;

        cout << "Ingrese el sexo del empleado m o f ";
        cin >> empleados[numEm].sexo;

        cout << "Ingrese el puesto del empleado: ";
        cin>> empleados[numEm].puesto;

        cout << "Ingrese el salario del empleado: ";
        cin >> empleados[numEm].salario;

        numEm++;
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
    const int MAIZIMO = 100;
    Empleado empleados[MAIZIMO];
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

