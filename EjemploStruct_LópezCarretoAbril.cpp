#include <iostream>
#include <string>

using namespace std;
struct Empleado {
    string nombre;
    char sexo;
    double salario;
    string puesto;
    int edad;
};

Empleado empleados[100];
int numEmpleados = 0;

void agregarEmpleado() {
    Empleado nuevoEmpleado;

    cout << "Nombre del empleado: ";
    cin >> nuevoEmpleado.nombre;
    cout << "Sexo (M/F): ";
    cin >> nuevoEmpleado.sexo;
    cout << "Salario: ";
    cin >> nuevoEmpleado.salario;
    cout << "Puesto: ";
    cin >> nuevoEmpleado.puesto;
    cout << "Edad: ";
    cin >> nuevoEmpleado.edad;

    empleados[numEmpleados++] = nuevoEmpleado;
    cout << "Empleado agregado correctamente." << endl;
}
void eliminarEmpleado() {
    string nombreEmpleado;
    bool encontrado = false;

    cout << "Nombre del empleado a eliminar: ";
    cin >> nombreEmpleado;

    for (int i = 0; i < numEmpleados; ++i) {
        if (empleados[i].nombre == nombreEmpleado) {
            for (int j = i; j < numEmpleados - 1; ++j) {
                empleados[j] = empleados[j + 1];
            }
            numEmpleados--;
            encontrado = true;
            cout << "Empleado eliminado correctamente." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Empleado no encontrado." << endl;
    }
}

void actualizarEmpleado() {
    string nombreEmpleado;
    bool encontrado = false;

    cout << "Nombre del empleado a actualizar: ";
    cin >> nombreEmpleado;

    for (int i = 0; i < numEmpleados; ++i) {
        if (empleados[i].nombre == nombreEmpleado) {
            cout << "Nuevo sexo (M/F): ";
            cin >> empleados[i].sexo;
            cout << "Nuevo salario: ";
            cin >> empleados[i].salario;
            cout << "Nuevo puesto: ";
            cin >> empleados[i].puesto;
            cout << "Nueva edad: ";
            cin >> empleados[i].edad;

            encontrado = true;
            cout << "Empleado actualizado correctamente." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Empleado no encontrado." << endl;
    }
}

void mostrarEmpleados() {
    if (numEmpleados == 0) {
        cout << "No hay empleados registrados." << endl;
    } else {
        cout << "Lista de empleados:" << endl;
        for (int i = 0; i < numEmpleados; ++i) {
            cout << "Nombre: " << empleados[i].nombre << ", Sexo: " << empleados[i].sexo
                 << ", Salario: " << empleados[i].salario << ", Puesto: " << empleados[i].puesto
                 << ", Edad: " << empleados[i].edad << endl;
        }
    }
    cout << endl;
}

int main() {
    int opcion;

    do {
        cout<<"================================\n"<<endl;
        cout << "Menu:" << endl;
        cout << "1. Agregar empleado" << endl;
        cout << "2. Eliminar empleado" << endl;
        cout << "3. Actualizar empleado" << endl;
        cout << "4. Mostrar todos los empleados" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cout<<"\n================================\n"<<endl;

        switch (opcion) {
            case 1:
                agregarEmpleado();
                break;
            case 2:
                eliminarEmpleado();
                break;
            case 3:
                actualizarEmpleado();
                break;
            case 4:
                mostrarEmpleados();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}
